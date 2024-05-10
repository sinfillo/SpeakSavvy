#include "quizwidget.h"
#include "ui_quizwidget.h"

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
    style_translation_button = QString("font-size: 20pt; font-family: PT Mono");
    neutral_color += "; ";
    neutral_color += style_translation_button;
    correct_color += "; ";
    correct_color += style_translation_button;
    wrong_color += "; ";
    wrong_color += style_translation_button;

    ui->cntAllLabel->setText("10");
    ui->cntCorrectLabel->setText("0");
    QTime answer_time(0, 0, 15, 0);
    QTime end_time(0, 0, 0, 0);
    ui->timeLabel->setText(answer_time.toString(format_time));
    timer = new QTimer(this);
    timer->setParent(this);
    qDebug() << "hahahahahhaha";
    connect(timer, &QTimer::timeout, this, &QuizWidget::updateTimeInfo);
    start_tour_time = answer_time;
    end_tour_time = end_time;
    QString remainder = "Осталось слов: " + QString::number(cnt - cnt_tour);
    ui->remainderLabel->setText(remainder);
    ui->remainderLabel->setStyleSheet(style_translation_button);
    ui->cntAllLabel->setAlignment(Qt::AlignHCenter);
    ui->cntAllLabel->setStyleSheet(style_translation_button);
    ui->cntCorrectLabel->setAlignment(Qt::AlignHCenter);
    ui->cntCorrectLabel->setStyleSheet(style_translation_button);
    ui->curWordLabel->setAlignment(Qt::AlignHCenter);
    ui->backButton->setIcon(style()->standardIcon(QStyle::SP_FileDialogBack));

    connect(this, &QuizWidget::correctButton1, this, &QuizWidget::on_translationButton1_clicked);
    connect(this, &QuizWidget::correctButton2, this, &QuizWidget::on_translationButton2_clicked);
    connect(this, &QuizWidget::correctButton3, this, &QuizWidget::on_translationButton3_clicked);


    dbHandler = new DatabaseHandler;
    dbHandler->getWordsInfoFromDB(username);
    connect(dbHandler, &DatabaseHandler::wordsRead, this, &QuizWidget::updateWords);

}

void QuizWidget::regenNewQuiz(size_t new_cnt)
{
    qDebug() << "kukuk";
    ui->cntCorrectLabel->setText("0");
    ui->cntAllLabel->setText(QString::number(new_cnt));
    ui->cntCorrectLabel->setStyleSheet(style_translation_button);
    cnt_correct = 0;
    cnt_tour = 0;
    cnt = new_cnt;
    ui->progressBar->setValue(0);
    QTime answer_time(0, 0, 15, 0);
    ui->timeLabel->setText(answer_time.toString(format_time));
    ui->timeLabel->setStyleSheet(style_translation_button);
    timer->start(1000);
    start_tour_time = answer_time;
    QString remainder = "Осталось слов: " + QString::number(cnt - cnt_tour);
    ui->remainderLabel->setText(remainder);
    selectNewWord();
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
    indx_correct_translation = dis_word(gen);
    indx_correct_button = dis_button(gen);
    ui->curWordLabel->setText(eng_words[indx_correct_translation]);
    size_t indx_wrong1 = dis_word(gen);
    while (indx_wrong1 == indx_correct_translation || translations[indx_wrong1] == translations[indx_correct_translation]) {
        indx_wrong1 = dis_word(gen);
    }
    size_t indx_wrong2 = dis_word(gen);
    while (indx_wrong2 == indx_correct_translation || translations[indx_wrong2] == translations[indx_correct_translation] || indx_wrong2 == indx_wrong1 || translations[indx_wrong1] == translations[indx_wrong2]) {
        indx_wrong2 = dis_word(gen);
    }
    if (indx_correct_button == 0) {
        ui->translationButton1->setText(translations[indx_correct_translation]);
        ui->translationButton2->setText(translations[indx_wrong1]);
        ui->translationButton3->setText(translations[indx_wrong2]);
    } else if (indx_correct_button == 1) {
        ui->translationButton2->setText(translations[indx_correct_translation]);
        ui->translationButton1->setText(translations[indx_wrong1]);
        ui->translationButton3->setText(translations[indx_wrong2]);
    } else {
        ui->translationButton3->setText(translations[indx_correct_translation]);
        ui->translationButton2->setText(translations[indx_wrong1]);
        ui->translationButton1->setText(translations[indx_wrong2]);
    }
    qDebug() << translations[indx_correct_translation];
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
    timer2->start(2000);
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
    ui->cntCorrectLabel->setStyleSheet(style_translation_button);
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
    QString remainder = "Осталось слов: " + QString::number(cnt - cnt_tour);
    ui->remainderLabel->setText(remainder);
    ui->remainderLabel->setStyleSheet(style_translation_button);
    paintCorrectButton();
    if (start_tour_time == end_tour_time) {
        pushNotification(end_time_msg);
        return;
    }
    if (indx_correct_button == 0) {
        timer->stop();
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
    QString remainder = "Осталось слов: " + QString::number(cnt - cnt_tour);
    ui->remainderLabel->setText(remainder);
    paintCorrectButton();
    if (start_tour_time == end_tour_time) {
        pushNotification(end_time_msg);
        return;
    }
    if (indx_correct_button == 1) {
        timer->stop();
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
    QString remainder = "Осталось слов: " + QString::number(cnt - cnt_tour);
    ui->remainderLabel->setText(remainder);
    paintCorrectButton();
    if (start_tour_time == end_tour_time) {
        pushNotification(end_time_msg);
        return;
    }
    if (indx_correct_button == 2) {
        timer->stop();
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
    ui->timeLabel->setStyleSheet(style_translation_button);
    timer->start(1000);
    start_tour_time = answer_time;
    selectNewWord();
}

void QuizWidget::updateWords()
{
    QList<Word> words = dbHandler->getWords();
    //words.clear();
    //cnt = words.size();
    //cnt = 0;
    std::vector<size_t> perm(words.size());
    std::iota(perm.begin(), perm.end(), 0);
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(perm.begin(), perm.end(), g);
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
        qDebug() << "i hate";
        translations.resize(cnt);
        eng_words.resize(cnt);
        dis_word = std::uniform_int_distribution<int>(0, cnt - 1);
        dis_button = std::uniform_int_distribution<int>(0, 2);
        for (size_t i = 0; i < cnt; ++i) {
            eng_words[i] = words[perm[i % words.size()]].getWord();
            translations[i] = words[perm[i % words.size()]].getTranslation();
        }
        selectNewWord();
    }
}
