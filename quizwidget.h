#ifndef QUIZWIDGET_H
#define QUIZWIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QStyle>
#include <QMessageBox>
#include <QTime>
#include <QTimer>
#include <vector>
#include <chrono>
#include <random>
#include "databasehandler.h"

namespace Ui {
class QuizWidget;
}

class QuizWidget : public QWidget
{
    Q_OBJECT

public:
    explicit QuizWidget(QWidget *parent = nullptr);
    QuizWidget(const QString &username_, QWidget *parent = nullptr);
    void regenNewQuiz(size_t new_cnt);
    DatabaseHandler *dbHandler;
    ~QuizWidget();
private slots:
    void on_backButton_clicked();
    void on_translationButton1_clicked();

    void on_translationButton2_clicked();

    void on_translationButton3_clicked();
    void updateTimeInfo();
    void updateWords();
    void selectNewWordAndUpdTimer();

signals:
    void changeWidgetToStartOrProfile(bool back_to_start);
    void changeWidgetToResult(size_t cnt_correct, size_t cnt);
    void correctButton1();
    void correctButton2();
    void correctButton3();

private:
    Ui::QuizWidget *ui;
    size_t cnt = 10;
    std::vector<QString> translations;
    std::vector<QString> eng_words;
    size_t indx_correct_button = 0;
    size_t indx_correct_translation = 0;
    size_t cnt_correct = 0;
    std::uniform_int_distribution<int> dis_word;
    std::uniform_int_distribution<int> dis_button;
    void selectNewWord();
    size_t cnt_tour = 0;
    QString correct_color;
    QString wrong_color;
    QString neutral_color;
    QString danger_color;
    QString safe_color;
    QString neutral_color_prbar;
    void paintCorrectButton();
    void updateProgressBar();
    QTimer *timer;
    QString format_time = "ss";
    QTime start_tour_time;
    QTime end_tour_time;
    QString username;
    QString style_translation_button;
    bool back_to_start = true;
    void pushNotification(QString msg);
    QString end_time_msg = "Time is over :(";
    QString correct_button_msg = "This is the correct answer!";
    QString wrong_button_msg = "This is the wrong answer :(";
};

#endif // QUIZWIDGET_H
