#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    profile = new Profile;
    authHandler = new AuthHandler;
    readNowWidget = new ReadNowWidget;
    //QList<Book> books = dbHandler.getBooks();
    libraryWidget = new LibraryWidget;
    signUpWidget = new SignUp;
    logInWidget = new LogInWidget;
    gamesWidget = new GamesWidget;
    videoWidget = new VideoWidget;
    ui->setupUi(this);
    ui->tabWidget->setTabBarAutoHide(true);
    ui->tabWidget->insertTab(0, signUpWidget, "SignUp");
    connect(profile, &Profile::logOut, this, &MainWindow::logOut);
    connect(signUpWidget, &SignUp::changeTabToLogIn, this, &MainWindow::changeTabToLogIn);
    connect(logInWidget, &LogInWidget::changeTabToSignUp, this, &MainWindow::changeTabToSignUp);
    connect(signUpWidget, &SignUp::createAccount, this, &MainWindow::signUp);
    connect(logInWidget, &LogInWidget::logIntoAccount, this, &MainWindow::logIn);
    connect(libraryWidget, &LibraryWidget::signalToReadNow, this, &MainWindow::changeTabToReadNow);
    connect(authHandler, &AuthHandler::userSignedIn, this, &MainWindow::LogIntoAccount);
    connect(authHandler, &AuthHandler::userSignInError, this, &MainWindow::signInError);
    connect(this, &MainWindow::signal, profile, &Profile::slot);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::LogIntoAccount(QString m_idToken, QString email)
{
    ui->tabWidget->clear();
    ui->tabWidget->insertTab(0, profile, "Profile");
    ui->tabWidget->insertTab(1, readNowWidget, "Reading now");
    ui->tabWidget->insertTab(2, libraryWidget, "Library");
    ui->tabWidget->insertTab(3, gamesWidget, "Games");
    ui->tabWidget->insertTab(4, videoWidget, "Video");
    emit signal(email);
}

void MainWindow::signInError(QString error)
{
    QMessageBox msgBox;
    msgBox.setText(error);
    msgBox.exec();
}

void MainWindow::changeTabToReadNow(int bookId)
{
    readNowWidget->setCurrentBookId(bookId);
    ui->tabWidget->setCurrentIndex(1);

}

void MainWindow::changeTabToSignUp()
{
    ui->tabWidget->clear();
    ui->tabWidget->insertTab(0, signUpWidget, "SignUp");
}

void MainWindow::changeTabToLogIn()
{
    ui->tabWidget->clear();
    ui->tabWidget->insertTab(0, logInWidget, "LogIn");
}

void MainWindow::signUp(QString email, QString password)
{
    authHandler->setAPIKey("AIzaSyBk6-Ki3TqW5sxiMTshkKgX2RSx6nCzEkY");
    authHandler->signUserUp(email, password);
}

void MainWindow::logIn(QString email, QString password)
{
    authHandler->setAPIKey("AIzaSyBk6-Ki3TqW5sxiMTshkKgX2RSx6nCzEkY");
    //authHandler->signUserIn(email, password);
    authHandler->signUserIn("test@inbox.ru", "password");
}

void MainWindow::logOut()
{
    ui->tabWidget->clear();
    ui->tabWidget->insertTab(0, signUpWidget, "SignUp");
}

