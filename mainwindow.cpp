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
    quizWidget = new QuizWidget;
    startQuizWidget = new StartQuizWidget;
    resultQuizWidget = new ResultQuizWidget;
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
    connect(ui->tabWidget, &QTabWidget::currentChanged, videoWidget, &VideoWidget::stopVideo);
    connect(startQuizWidget, &StartQuizWidget::changeWidget, this, &MainWindow::changeToQuiz);
    connect(quizWidget, &QuizWidget::changeWidgetToStart, this, &MainWindow::changeToStartQuizBack);
    connect(quizWidget, &QuizWidget::changeWidgetToResult, this, &MainWindow::changeToResult);
    connect(resultQuizWidget, &ResultQuizWidget::backToStart, this, &MainWindow::changeToStartQuizBack);
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
    ui->tabWidget->insertTab(5, startQuizWidget, "Quiz");
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

void MainWindow::changeToQuiz()
{
    //ui->tabWidget->setTabVisible(0, false);
    ui->tabWidget->removeTab(5);
    quizWidget->regenNewQuiz();
    ui->tabWidget->insertTab(5, quizWidget, "Quiz");
    ui->tabWidget->setCurrentIndex(5);
    ui->tabWidget->tabBar()->hide();
}

void MainWindow::changeToStartQuizBack()
{
    ui->tabWidget->tabBar()->show();
    //ui->tabWidget->setTabVisible(0, true);
    //ui->tabWidget->insertTab(0, video, "tiktok");
    ui->tabWidget->removeTab(5);
    ui->tabWidget->insertTab(5, startQuizWidget, "quiz");
    ui->tabWidget->setCurrentIndex(5);
}

void MainWindow::changeToResult(size_t cnt_correct)
{
    ui->tabWidget->removeTab(5);
    resultQuizWidget->updateResults(cnt_correct);
    ui->tabWidget->insertTab(5, resultQuizWidget, "Results");
    ui->tabWidget->setCurrentIndex(5);
    ui->tabWidget->tabBar()->hide();
    qDebug() << cnt_correct;
}
