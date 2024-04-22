#include "quizwidget.h"
#include "ui_quizwidget.h"

QuizWidget::QuizWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::QuizWidget)
{
    ui->setupUi(this);

    translations.resize(cnt);
    translations[0] = "лол";
    translations[1] = "кек";
    translations[2] = "абоба";
    translations[3] = "алина";
    translations[4] = "даша";
    translations[5] = "книга";
    translations[6] = "дом";
    translations[7] = "акос";
    translations[8] = "чай";
    translations[9] = "печенье";
    eng_words.resize(cnt);
    eng_words[0] = "lol";
    eng_words[1] = "kek";
    eng_words[2] = "aboba";
    eng_words[3] = "alina";
    eng_words[4] = "dasha";
    eng_words[5] = "book";
    eng_words[6] = "home";
    eng_words[7] = "caos";
    eng_words[8] = "tea";
    eng_words[9] = "cookie";
    ui->cntAllLabel->setText("10");
    ui->cntCorrectLabel->setText("0");
    QTime answer_time(0, 0, 15, 0);
    QTime end_time(0, 0, 0, 0);
    ui->timeLabel->setText(answer_time.toString(format_time));
    timer = new QTimer();
    //connect(timer, &QTimer::timeout, this, &QuizWidget::updateTimeInfo);
    //timer->start(1000);
    timer->stop();
    start_tour_time = answer_time;
    end_tour_time = end_time;
    QString remainder = "Осталось слов: " + QString::number(10 - cnt_tour);
    ui->remainderLabel->setText(remainder);
    ui->cntAllLabel->setAlignment(Qt::AlignHCenter);
    ui->cntCorrectLabel->setAlignment(Qt::AlignHCenter);
    ui->curWordLabel->setAlignment(Qt::AlignHCenter);
    ui->backButton->setIcon(style()->standardIcon(QStyle::SP_FileDialogBack));
    dis_word = std::uniform_int_distribution<int>(0, cnt - 1);
    dis_button = std::uniform_int_distribution<int>(0, 2);

    correct_color = QString("background-color: %1").arg(QColor(Qt::green).name());
    wrong_color = QString("background-color: %1").arg(QColor(Qt::red).name());
    neutral_color = QString("background-color: %1").arg(QColor(Qt::lightGray).name());
    danger_color = QString("QProgressBar::chunk {background-color: %1; width: 5px;}").arg(QColor(Qt::darkRed).name());
    neutral_color_prbar = QString("QProgressBar::chunk {background-color: %1; width: 5px;}").arg(QColor(Qt::darkYellow).name());
    safe_color = QString("QProgressBar::chunk {background-color: %1; width: 5px;}").arg(QColor(Qt::darkGreen).name());

    selectNewWord();

    connect(this, &QuizWidget::correctButton1, this, &QuizWidget::on_translationButton1_clicked);
    connect(this, &QuizWidget::correctButton2, this, &QuizWidget::on_translationButton2_clicked);
    connect(this, &QuizWidget::correctButton3, this, &QuizWidget::on_translationButton3_clicked);
}

void QuizWidget::regenNewQuiz()
{
    ui->cntCorrectLabel->setText("0");
    cnt_correct = 0;
    cnt_tour = 0;
    ui->progressBar->setValue(0);
    selectNewWord();
}


QuizWidget::~QuizWidget()
{
    delete ui;
}

void QuizWidget::on_backButton_clicked() {
    emit changeWidgetToStart();
}

static std::mt19937_64 gen{
                           static_cast<unsigned long long>(
                               std::chrono::system_clock::now().time_since_epoch().count())};

void QuizWidget::selectNewWord()
{
    if (cnt_tour == 10) {
        emit changeWidgetToResult(cnt_correct);
        return;
    }

    QTime answer_time(0, 0, 15, 0);
    ui->timeLabel->setText(answer_time.toString(format_time));
    //timer = new QTimer();
    timer->start(1000);
    start_tour_time = answer_time;

    ui->translationButton1->setStyleSheet(neutral_color);
    ui->translationButton2->setStyleSheet(neutral_color);
    ui->translationButton3->setStyleSheet(neutral_color);
    indx_correct_translation = dis_word(gen);
    indx_correct_button = dis_button(gen);
    ui->curWordLabel->setText(eng_words[indx_correct_translation]);
    size_t indx_wrong1 = dis_word(gen);
    while (indx_wrong1 == indx_correct_translation) {
        indx_wrong1 = dis_word(gen);
    }
    size_t indx_wrong2 = dis_word(gen);
    while (indx_wrong2 == indx_correct_translation || indx_wrong2 == indx_wrong1) {
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
    if (cnt_correct > 0 && cnt_correct <= 3) {
        ui->progressBar->setStyleSheet(danger_color);
    } else if (cnt_correct > 3 && cnt_correct <= 7) {
        ui->progressBar->setStyleSheet(neutral_color_prbar);
    } else {
        ui->progressBar->setStyleSheet(safe_color);
    }
}


void QuizWidget::on_translationButton1_clicked()
{
    timer->stop();
    ++cnt_tour;
    QString remainder = "Осталось слов: " + QString::number(10 - cnt_tour);
    ui->remainderLabel->setText(remainder);
    paintCorrectButton();
    if (start_tour_time == end_tour_time) {
        QMessageBox msgBox;
        msgBox.setText("Время вышло :(");
        msgBox.exec();
        selectNewWord();
        return;
    }
    if (indx_correct_button == 0) {
        updateProgressBar();
        QMessageBox msgBox;
        msgBox.setText("Все верно, Вы супер!");
        msgBox.exec();
    } else {
        ui->translationButton1->setStyleSheet(wrong_color);
        QMessageBox msgBox;
        msgBox.setText("Неправильно(");
        msgBox.exec();
    }
    selectNewWord();
}




void QuizWidget::on_translationButton2_clicked()
{
    timer->stop();
    ++cnt_tour;
    QString remainder = "Осталось слов: " + QString::number(10 - cnt_tour);
    ui->remainderLabel->setText(remainder);
    paintCorrectButton();
    if (start_tour_time == end_tour_time) {
        QMessageBox msgBox;
        msgBox.setText("Время вышло :(");
        msgBox.exec();
        selectNewWord();
        return;
    }
    if (indx_correct_button == 1) {
        updateProgressBar();
        QMessageBox msgBox;
        msgBox.setText("Все верно, Вы супер!");
        msgBox.exec();
    } else {
        ui->translationButton1->setStyleSheet(wrong_color);
        QMessageBox msgBox;
        msgBox.setText("Неправильно(");
        msgBox.exec();
    }
    selectNewWord();
}


void QuizWidget::on_translationButton3_clicked()
{
    timer->stop();
    ++cnt_tour;
    QString remainder = "Осталось слов: " + QString::number(10 - cnt_tour);
    ui->remainderLabel->setText(remainder);
    paintCorrectButton();
    if (start_tour_time == end_tour_time) {
        QMessageBox msgBox;
        msgBox.setText("Время вышло :(");
        msgBox.exec();
        selectNewWord();
        return;
    }
    if (indx_correct_button == 2) {
        updateProgressBar();
        QMessageBox msgBox;
        msgBox.setText("Все верно, Вы супер!");
        msgBox.exec();
    } else {
        ui->translationButton1->setStyleSheet(wrong_color);
        QMessageBox msgBox;
        msgBox.setText("Неправильно(");
        msgBox.exec();
    }
    selectNewWord();
}

void QuizWidget::updateTimeInfo()
{
    start_tour_time = start_tour_time.addSecs(-1);
    ui->timeLabel->setText(start_tour_time.toString(format_time));
    if (start_tour_time == end_tour_time) {
        if (indx_correct_button == 0) {
            emit correctButton1();
        } else if (indx_correct_button == 1) {
            emit correctButton2();
        } else {
            emit correctButton3();
        }
    }

}
