#include "quizwidget.h"
#include "ui_quizwidget.h"
#include <iostream>

QuizWidget::QuizWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::QuizWidget)
{
    ui->setupUi(this);
}

QuizWidget::QuizWidget(const QString &username_, QWidget *parent)
    : QWidget(parent), username(username_)
    , ui(new Ui::QuizWidget)
{
    ui->setupUi(this);
    correct_color = QString("background-color: %1").arg(QColor(Qt::green).name());
    wrong_color = QString("background-color: %1").arg(QColor(Qt::red).name());
    neutral_color = QString("background-color: %1").arg(QColor(Qt::lightGray).name());
    danger_color = QString("QProgressBar::chunk {background-color: %1; width: 5px;}").arg(QColor(Qt::darkRed).name());
    neutral_color_prbar = QString("QProgressBar::chunk {background-color: %1; width: 5px;}").arg(QColor(Qt::darkYellow).name());
    safe_color = QString("QProgressBar::chunk {background-color: %1; width: 5px;}").arg(QColor(Qt::darkGreen).name());
    style_translation_button = QString("font-size: 24pt; font-family: Arial; border-radius: 15; border-width: 1px; border-style: solid; border-color: black");
    other_style = QString("font-size: 24pt; font-family: YuGothic");
    neutral_color += ("; " + style_translation_button);
    correct_color += ("; " + style_translation_button);
    wrong_color += ("; " + style_translation_button);

    ui->cntAllLabel->setText("10");
    ui->cntCorrectLabel->setText("0");
    QTime answer_time(0, 0, 15, 0);
    QTime end_time(0, 0, 0, 0);
    ui->timeLabel->setText(answer_time.toString(format_time));
    timer = new QTimer(this);
    timer->setParent(this);
    connect(timer, &QTimer::timeout, this, &QuizWidget::updateTimeInfo);
    start_tour_time = answer_time;
    end_tour_time = end_time;

    QString remainder = QString::number(cnt - cnt_tour) + " words left";
    ui->remainderLabel->setText(remainder);
    ui->remainderLabel->setStyleSheet(other_style);
    ui->cntAllLabel->setAlignment(Qt::AlignHCenter);
    ui->cntAllLabel->setStyleSheet(other_style);
    ui->cntCorrectLabel->setAlignment(Qt::AlignHCenter);
    ui->cntCorrectLabel->setStyleSheet(other_style);
    ui->curWordLabel->setAlignment(Qt::AlignHCenter);
    QPixmap backPixmap(":/png/left-arrow.png");
    QIcon backButtonIcon(backPixmap);
    ui->backButton->setIcon(backButtonIcon);

    connect(this, &QuizWidget::correctButton1, this, &QuizWidget::on_translationButton1_clicked);
    connect(this, &QuizWidget::correctButton2, this, &QuizWidget::on_translationButton2_clicked);
    connect(this, &QuizWidget::correctButton3, this, &QuizWidget::on_translationButton3_clicked);


    dbHandler = new DatabaseHandler;
    connect(dbHandler, &DatabaseHandler::wordsRead, this, &QuizWidget::updateWords);

}

void QuizWidget::regenNewQuiz(size_t new_cnt)
{
    ui->backButton->hide();
    ui->cntAllLabel->hide();
    ui->cntCorrectLabel->hide();
    ui->curWordLabel->setText("Waiting for the quiz...");
    ui->progressBar->hide();
    ui->remainderLabel->hide();
    ui->timeLabel->hide();
    ui->translationButton1->hide();
    ui->translationButton2->hide();
    ui->translationButton3->hide();
    cnt = new_cnt;
    dbHandler->getWordsInfoFromDB(username);
}


QuizWidget::~QuizWidget()
{
    delete ui;
}

void QuizWidget::on_backButton_clicked() {
    timer->stop();
    emit changeWidgetToStartOrProfile(back_to_start);
}

static std::mt19937_64 gen{
                           static_cast<unsigned long long>(
                               std::chrono::system_clock::now().time_since_epoch().count())};

void QuizWidget::selectNewWord()
{
    if (!back_to_start) {
        return;
    }
    if (cnt_tour == cnt) {
        timer->stop();
        emit changeWidgetToResult(cnt_correct, cnt);
        return;
    }

    ui->translationButton1->setStyleSheet(neutral_color);
    ui->translationButton2->setStyleSheet(neutral_color);
    ui->translationButton3->setStyleSheet(neutral_color);
    indx_correct_translation = genWordIndx();
    indx_correct_button = dis_button(gen);
    ui->curWordLabel->setText(words[indx_correct_translation].getWord());
    size_t indx_wrong1 = genWordIndx();
    while (indx_wrong1 == indx_correct_translation || words[indx_wrong1].getTranslation() == words[indx_correct_translation].getTranslation()) {
        indx_wrong1 = genWordIndx();
    }
    size_t indx_wrong2 = genWordIndx();
    while (indx_wrong2 == indx_correct_translation || words[indx_wrong2].getTranslation() == words[indx_correct_translation].getTranslation() ||
            indx_wrong2 == indx_wrong1 || words[indx_wrong1].getTranslation() == words[indx_wrong2].getTranslation()) {
        indx_wrong2 = genWordIndx();
    }

    if (indx_correct_button == 0) {
        ui->translationButton1->setText(words[indx_correct_translation].getTranslation());
        ui->translationButton2->setText(words[indx_wrong1].getTranslation());
        ui->translationButton3->setText(words[indx_wrong2].getTranslation());
    } else if (indx_correct_button == 1) {
        ui->translationButton2->setText(words[indx_correct_translation].getTranslation());
        ui->translationButton1->setText(words[indx_wrong1].getTranslation());
        ui->translationButton3->setText(words[indx_wrong2].getTranslation());
    } else {
        ui->translationButton3->setText(words[indx_correct_translation].getTranslation());
        ui->translationButton2->setText(words[indx_wrong1].getTranslation());
        ui->translationButton1->setText(words[indx_wrong2].getTranslation());
    }
}

void QuizWidget::pushNotification(QString msg)
{
    auto msgbox = new QMessageBox(this);
    msgbox->setGeometry(850, 450, 250, 200);
    msgbox->setWindowTitle("Result");
    msgbox->setText(msg);
    msgbox->setStandardButtons(QMessageBox::NoButton);
    msgbox->open();
    auto timer2 = new QTimer(msgbox);
    QObject::connect(timer2, &QTimer::timeout, msgbox, &QMessageBox::deleteLater);
    QObject::connect(timer2, &QTimer::timeout, this, &QuizWidget::selectNewWordAndUpdTimer);
    timer2->start(1500);
}

size_t QuizWidget::genWordIndx()
{
    size_t gen_sum = dis_sum(gen);
    size_t pos_in_word = std::lower_bound(pref_sum.begin(), pref_sum.end(), gen_sum) - pref_sum.begin();
    while (pos_in_word == 0) {
        pos_in_word = dis_word(gen);
    }
    --pos_in_word;
    return pos_in_word;
}

void QuizWidget::paintCorrectButton()
{
    if (indx_correct_button == 0) {
        ui->translationButton1->setStyleSheet(correct_color);
    } else if (indx_correct_button == 1) {
        ui->translationButton2->setStyleSheet(correct_color);
    } else {
        ui->translationButton3->setStyleSheet(correct_color);
    }
}

void QuizWidget::updateProgressBar()
{
    ui->progressBar->setValue(++cnt_correct);
    ui->cntCorrectLabel->setText(QString::number(static_cast<int>(cnt_correct)));
    ui->cntCorrectLabel->setStyleSheet(other_style);
    if (cnt_correct > 0 && cnt_correct <= cnt * 0.3) {
        ui->progressBar->setStyleSheet(danger_color);
    } else if (cnt_correct > cnt * 0.3 && cnt_correct <= cnt * 0.7) {
        ui->progressBar->setStyleSheet(neutral_color_prbar);
    } else {
        ui->progressBar->setStyleSheet(safe_color);
    }
}


void QuizWidget::on_translationButton1_clicked()
{
    ++cnt_tour;
    QString remainder = QString::number(cnt - cnt_tour) + " words left";
    ui->remainderLabel->setText(remainder);
    ui->remainderLabel->setStyleSheet(other_style);
    paintCorrectButton();
    if (start_tour_time == end_tour_time) {
        pushNotification(end_time_msg);
        return;
    }
    if (indx_correct_button == 0) {
        timer->stop();
        cnt_correct_click[words[indx_correct_translation].getWord()];
        updateProgressBar();
        pushNotification(correct_button_msg);
    } else {
        timer->stop();
        ui->translationButton1->setStyleSheet(wrong_color);
        pushNotification(wrong_button_msg);
    }
}




void QuizWidget::on_translationButton2_clicked()
{
    ++cnt_tour;
    QString remainder = QString::number(cnt - cnt_tour) + " words left";
    ui->remainderLabel->setText(remainder);
    paintCorrectButton();
    if (start_tour_time == end_tour_time) {
        pushNotification(end_time_msg);
        return;
    }
    if (indx_correct_button == 1) {
        timer->stop();
        cnt_correct_click[words[indx_correct_translation].getWord()];
        updateProgressBar();
        pushNotification(correct_button_msg);
    } else {
        timer->stop();
        ui->translationButton2->setStyleSheet(wrong_color);
        pushNotification(wrong_button_msg);
    }

}

void QuizWidget::on_translationButton3_clicked()
{
    ++cnt_tour;
    QString remainder = QString::number(cnt - cnt_tour) + " words left";
    ui->remainderLabel->setText(remainder);
    paintCorrectButton();
    if (start_tour_time == end_tour_time) {
        pushNotification(end_time_msg);
        return;
    }
    if (indx_correct_button == 2) {
        timer->stop();
        cnt_correct_click[words[indx_correct_translation].getWord()];
        updateProgressBar();
        pushNotification(correct_button_msg);
    } else {
        timer->stop();
        ui->translationButton3->setStyleSheet(wrong_color);
        pushNotification(wrong_button_msg);
    }
}

void QuizWidget::updateTimeInfo()
{
    start_tour_time = start_tour_time.addSecs(-1);
    ui->timeLabel->setText(start_tour_time.toString(format_time));
    if (start_tour_time == end_tour_time) {
        timer->stop();
        if (indx_correct_button == 0) {
            emit correctButton1();
        } else if (indx_correct_button == 1) {
            emit correctButton2();
        } else {
            emit correctButton3();
        }
    }

}

void QuizWidget::selectNewWordAndUpdTimer()
{
    QTime answer_time(0, 0, 15, 0);
    ui->timeLabel->setText(answer_time.toString(format_time));
    ui->timeLabel->setStyleSheet(other_style);
    timer->start(1000);
    start_tour_time = answer_time;
    selectNewWord();
}

void QuizWidget::updateWords()
{
    ui->backButton->show();
    ui->cntAllLabel->show();
    ui->cntCorrectLabel->show();
    ui->progressBar->show();
    ui->remainderLabel->show();
    ui->timeLabel->show();
    ui->translationButton1->show();
    ui->translationButton2->show();
    ui->translationButton3->show();

    ui->cntCorrectLabel->setText("0");
    ui->cntAllLabel->setText(QString::number(cnt));
    ui->cntCorrectLabel->setStyleSheet(other_style);
    cnt_correct = 0;
    cnt_tour = 0;
    ui->progressBar->setValue(0);
    QTime answer_time(0, 0, 15, 0);
    ui->timeLabel->setText(answer_time.toString(format_time));
    ui->timeLabel->setStyleSheet(other_style);
    timer->start(1000);
    start_tour_time = answer_time;
    QString remainder = QString::number(cnt - cnt_tour) + " words left";
    ui->remainderLabel->setText(remainder);

    words = dbHandler->getWords();
    if (words.size() == 0) {
        back_to_start = false;
        ui->curWordLabel->setText("You haven't added any words yet!");
        ui->cntAllLabel->hide();
        ui->cntCorrectLabel->hide();
        ui->progressBar->hide();
        ui->remainderLabel->hide();
        ui->timeLabel->hide();
        ui->translationButton1->hide();
        ui->translationButton2->hide();
        ui->translationButton3->hide();
    } else {
        int64_t cnt_all_correct_click = 0;
        for (const auto& word : words) {
            if (cnt_correct_click.find(word.getWord()) == cnt_correct_click.end()) {
                cnt_correct_click[word.getWord()] = 1;
            }
            cnt_all_correct_click += cnt_correct_click[word.getWord()];
        }
        pref_sum.resize(words.size() + 1, 0);
        size_t pt = 1;
        for (const auto& word_info : cnt_correct_click) {
            pref_sum[pt] = pref_sum[pt - 1] + (cnt_all_correct_click - word_info.second);
            ++pt;
        }

        dis_sum = std::uniform_int_distribution<int64_t>(0, pref_sum.back());
        dis_button = std::uniform_int_distribution<size_t>(0, 2);
        dis_word = std::uniform_int_distribution<size_t>(1, words.size());
        selectNewWord();
    }
}
