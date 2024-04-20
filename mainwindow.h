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

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    QString nickname;
    AuthHandler *authHandler;
    Profile *profile;
    ReadNowWidget *readNowWidget;
    LibraryWidget *libraryWidget;
    SignUp *signUpWidget;
    LogInWidget *logInWidget;
    GamesWidget *gamesWidget;
    VideoWidget *videoWidget;
    explicit MainWindow(QWidget *parent = nullptr);
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

signals:
    void signal(QString nickname);


private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
