#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include "profile.h"
#include "authhandler.h"
#include "readnowwidget.h"
#include "librarywidget.h"
#include "signup.h"
#include "loginwidget.h"
#include "gameswidget.h"
#include "videowidget.h"
#include "startquizwidget.h"
#include "quizwidget.h"
#include "resultquizwidget.h"
#include "revisionwidget.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    QString nickname;
    AuthHandler *authHandler;
    DatabaseHandler *dbHandler;
    Profile *profile;
    ReadNowWidget *readNowWidget;
    LibraryWidget *libraryWidget;
    SignUp *signUpWidget;
    LogInWidget *logInWidget;
    GamesWidget *gamesWidget;
    VideoWidget *videoWidget;
    QuizWidget *quizWidget;
    StartQuizWidget* startQuizWidget;
    ResultQuizWidget* resultQuizWidget;
    RevisionWidget *revisionWidget;
    explicit MainWindow(QWidget *parent = nullptr);
    QString removeSpecialCharsFromEmail(QString email);
    ~MainWindow();

private slots:

    void LogIntoAccount(QString m_idToken, QString email);

    void signInError(QString error);

    void changeTabToReadNow(int bookId);

    void changeTabToSignUp();
    void changeTabToLogIn();

    void signUp(QString email, QString password);
    void logIn(QString email, QString password);

    void logOut();

    void changeToQuiz(size_t cnt);
    void changeToStartQuizOrProfile(bool is_start);
    void changeToStartQuizBack();
    void changeToResult(size_t cnt_correct, size_t cnt_all);

    void changeTabToRevision(bool flag = false);

    void endRevision(bool from_quiz);

    void on_goToGamesButton_clicked();

    void on_goToLibraryButton_clicked();

    void on_goToProfileButton_clicked();

    void on_goToQuizButton_clicked();

    void on_goToReadingButton_clicked();

    void on_goToVideoButton_clicked();

signals:
    void signal(QString nickname);


private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
