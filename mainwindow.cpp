#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
      , ui(new Ui::MainWindow)
{
    profile = new Profile;
    authHandler = new AuthHandler;
    dbHandler = new DatabaseHandler;
    readNowWidget = new ReadNowWidget;
    //QList<Book> books = dbHandler.getBooks();
    libraryWidget = new LibraryWidget;
    signUpWidget = new SignUp;
    logInWidget = new LogInWidget;
    gamesWidget = new GamesWidget;
    videoWidget = new VideoWidget;
    //quizWidget = new QuizWidget;
    startQuizWidget = new StartQuizWidget;
    resultQuizWidget = new ResultQuizWidget;
    ui->setupUi(this);
    //ui->stackedWidget->setTabBarAutoHide(true);

    ui->statusbar->hide();
    ui->goToGamesButton->setToolTip("Game");
    ui->goToLibraryButton->setToolTip("Library");
    ui->goToProfileButton->setToolTip("My profile");
    ui->goToQuizButton->setToolTip("Quiz");
    ui->goToVideoButton->setToolTip("Video");
    ui->goToReadingButton->setToolTip("Reading now");

    QPixmap gamePixmap(":/png/game-console.png");
    QIcon gameButtonIcon(gamePixmap);
    ui->goToGamesButton->setIcon(gameButtonIcon);


    QPixmap booksPixmap(":/png/books.png");
    QIcon booksButtonIcon(booksPixmap);
    ui->goToLibraryButton->setIcon(booksButtonIcon);


    QPixmap homePixmap(":/png/home.png");
    QIcon homeButtonIcon(homePixmap);
    ui->goToProfileButton->setIcon(homeButtonIcon);

    QPixmap openBookPixmap(":/png/open-book.png");
    QIcon readNowButtonIcon(openBookPixmap);
    ui->goToReadingButton->setIcon(readNowButtonIcon);

    QPixmap quizPixmap(":/png/quiz.png");
    QIcon quizButtonIcon(quizPixmap);
    ui->goToQuizButton->setIcon(quizButtonIcon);

    QPixmap tvPixmap(":/png/tv.png");
    QIcon videoButtonIcon(tvPixmap);
    ui->goToVideoButton->setIcon(videoButtonIcon);

    ui->menubar->hide();
    ui->goToGamesButton->hide();
    ui->goToLibraryButton->hide();
    ui->goToProfileButton->hide();
    ui->goToQuizButton->hide();
    ui->goToVideoButton->hide();
    ui->goToReadingButton->hide();
    ui->stackedWidget->insertWidget(0, signUpWidget);
    connect(profile, &Profile::logOut, this, &MainWindow::logOut);
    connect(signUpWidget, &SignUp::changeTabToLogIn, this, &MainWindow::changeTabToLogIn);
    connect(logInWidget, &LogInWidget::changeTabToSignUp, this, &MainWindow::changeTabToSignUp);
    connect(signUpWidget, &SignUp::createAccount, this, &MainWindow::signUp);
    connect(logInWidget, &LogInWidget::logIntoAccount, this, &MainWindow::logIn);
    connect(libraryWidget, &LibraryWidget::signalToReadNow, this, &MainWindow::changeTabToReadNow);
    connect(authHandler, &AuthHandler::userSignedIn, this, &MainWindow::LogIntoAccount);
    connect(authHandler, &AuthHandler::userSignInError, this, &MainWindow::signInError);
    connect(this, &MainWindow::signal, profile, &Profile::slot);
    connect(ui->stackedWidget, &QStackedWidget::currentChanged, videoWidget, &VideoWidget::stopVideo);
    connect(startQuizWidget, &StartQuizWidget::changeWidget, this, &MainWindow::changeToQuiz);
    connect(resultQuizWidget, &ResultQuizWidget::backToStart, this, &MainWindow::changeToStartQuizBack);
    connect(resultQuizWidget, &ResultQuizWidget::showRevision, this, &MainWindow::changeTabToRevision);
    connect(profile, &Profile::goToRevision, this,  &MainWindow::changeTabToRevision);
    connect(readNowWidget, &ReadNowWidget::wordAdded, this, &MainWindow::updateRevisionWidget);
    connect(libraryWidget, &LibraryWidget::bookAdded, this, &MainWindow::updateCollection);
}

QString MainWindow::removeSpecialCharsFromEmail(QString email)
{
    QString result;

    for (QChar c : email) {
      if(c != '@' && c != '.') {
        result += c;
      }
    }

    return result;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::LogIntoAccount(QString m_idToken, QString email)
{

    ui->goToGamesButton->show();
    ui->goToLibraryButton->show();
    ui->goToProfileButton->show();
    ui->goToQuizButton->show();
    ui->goToVideoButton->show();
    ui->goToReadingButton->show();
    QObject::connect(ui->goToLibraryButton, &QPushButton::clicked, this, [=]() { ui->stackedWidget->setCurrentWidget(libraryWidget); });
    revisionWidget = new RevisionWidget(this->removeSpecialCharsFromEmail(authHandler->getUsername()));
    booksCollection = new BooksCollection(this->removeSpecialCharsFromEmail(authHandler->getUsername()));
    connect(booksCollection, &BooksCollection::layoutReady, this, &MainWindow::connectButton);
    connect(booksCollection, &BooksCollection::signalToReadNow, this, &MainWindow::changeTabToReadNow);
    connect(booksCollection, &BooksCollection::backToMain, this, &MainWindow::goToProfileFromCollection);
    connect(revisionWidget, &RevisionWidget::endRevision, this, &MainWindow::endRevision);


            //ui->stackedWidget->clear();
    ui->stackedWidget->removeWidget(signUpWidget);
    ui->stackedWidget->removeWidget(logInWidget);
    ui->stackedWidget->insertWidget(0, profile);
    ui->stackedWidget->insertWidget(1, readNowWidget);
    ui->stackedWidget->insertWidget(2, libraryWidget);
    ui->stackedWidget->insertWidget(3, gamesWidget);
    ui->stackedWidget->insertWidget(4, videoWidget);
    ui->stackedWidget->insertWidget(5, startQuizWidget);
    ui->stackedWidget->setCurrentIndex(0);
    readNowWidget->setEmail(this->removeSpecialCharsFromEmail(authHandler->getUsername()));
    libraryWidget->setEmail(this->removeSpecialCharsFromEmail(authHandler->getUsername()));
    //booksCollection->setEmail(this->removeSpecialCharsFromEmail(authHandler->getUsername()));
    quizWidget = new QuizWidget(this->removeSpecialCharsFromEmail(authHandler->getUsername()));
    connect(quizWidget, &QuizWidget::changeWidgetToStartOrProfile, this, &MainWindow::changeToStartQuizOrProfile);
    connect(quizWidget, &QuizWidget::changeWidgetToResult, this, &MainWindow::changeToResult);
    emit signal(email);
}

void MainWindow::signInError(QString error)
{
    QMessageBox msgBox;
    if (error == "INVALID_EMAIL") {
      msgBox.setText("Invalid email");
    } else if (error == "INVALID_LOGIN_CREDENTIALS") {
      msgBox.setText("Invalid log-in credentials");
    } else {
      msgBox.setText(error);
    }
    msgBox.exec();
}

void MainWindow::changeTabToReadNow(int bookId)
{
    readNowWidget->setCurrentBookId(bookId);
    ui->stackedWidget->setCurrentIndex(1);

}

void MainWindow::changeTabToSignUp()
{
    //ui->stackedWidget->clear();
    ui->stackedWidget->insertWidget(0, signUpWidget);
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::changeTabToLogIn()
{
    //ui->stackedWidget->clear();
    ui->stackedWidget->insertWidget(0, logInWidget);
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::signUp(QString email, QString password)
{
    authHandler->setAPIKey("AIzaSyBk6-Ki3TqW5sxiMTshkKgX2RSx6nCzEkY");
    authHandler->signUserUp(email, password);

}

void MainWindow::logIn(QString email, QString password)
{
    authHandler->setAPIKey("AIzaSyBk6-Ki3TqW5sxiMTshkKgX2RSx6nCzEkY");
    authHandler->signUserIn(email, password);
    //authHandler->signUserIn("test@inbox.ru", "password");
}

void MainWindow::logOut()
{
    //ui->stackedWidget->clear();
    delete revisionWidget;
    logInWidget->deleteText();
    ui->stackedWidget->insertWidget(0, signUpWidget);
    ui->stackedWidget->setCurrentIndex(0);
    ui->goToGamesButton->hide();
    ui->goToLibraryButton->hide();
    ui->goToProfileButton->hide();
    ui->goToQuizButton->hide();
    ui->goToVideoButton->hide();
    ui->goToReadingButton->hide();
}

void MainWindow::changeToQuiz(size_t cnt)
{
    ui->goToGamesButton->hide();
    ui->goToLibraryButton->hide();
    ui->goToProfileButton->hide();
    ui->goToQuizButton->hide();
    ui->goToVideoButton->hide();
    ui->goToReadingButton->hide();
    //ui->tabWidget->setTabVisible(0, false);
    ui->stackedWidget->removeWidget(startQuizWidget);
    ui->stackedWidget->insertWidget(5, quizWidget);
    quizWidget->regenNewQuiz(cnt);
    qDebug() << "helllllooo";
    ui->stackedWidget->setCurrentIndex(5);
    //ui->stackedWidget->tabBar()->hide();
}

void MainWindow::changeToStartQuizOrProfile(bool is_start)
{
    qDebug() << is_start;
    ui->goToGamesButton->show();
    ui->goToLibraryButton->show();
    ui->goToProfileButton->show();
    ui->goToQuizButton->show();
    ui->goToVideoButton->show();
    ui->goToReadingButton->show();
    ui->stackedWidget->removeWidget(quizWidget);
    ui->stackedWidget->insertWidget(5, startQuizWidget);
    if (!is_start) {
      ui->stackedWidget->setCurrentIndex(0);
    } else {
      ui->stackedWidget->setCurrentIndex(5);
    }
}


void MainWindow::changeToStartQuizBack()
{
    ui->goToGamesButton->show();
    ui->goToLibraryButton->show();
    ui->goToProfileButton->show();
    ui->goToQuizButton->show();
    ui->goToVideoButton->show();
    ui->goToReadingButton->show();
    ui->stackedWidget->removeWidget(quizWidget);
    ui->stackedWidget->insertWidget(5, startQuizWidget);
    ui->stackedWidget->setCurrentIndex(5);
}

void MainWindow::changeToResult(size_t cnt_correct, size_t cnt_all)
{
    ui->stackedWidget->removeWidget(quizWidget);
    resultQuizWidget->updateResults(cnt_correct, cnt_all);
    ui->stackedWidget->insertWidget(5, resultQuizWidget);
    ui->stackedWidget->setCurrentIndex(5);
    //ui->stackedWidget->tabBar()->hide();!!!
    qDebug() << cnt_correct;
}

void MainWindow::changeTabToRevision(bool flag)
{
    //revisionWidget->setUsername(this->removeSpecialCharsFromEmail(authHandler->getUsername()));
    if (wordUpdate) {
      delete revisionWidget;
      revisionWidget = new RevisionWidget(this->removeSpecialCharsFromEmail(authHandler->getUsername()));
      connect(revisionWidget, &RevisionWidget::endRevision, this, &MainWindow::endRevision);
      wordUpdate = false;
    }
    ui->stackedWidget->insertWidget(6, revisionWidget);
    revisionWidget->setQuizFlag(flag);
    ui->stackedWidget->setCurrentIndex(6);
    //ui->stackedWidget->tabBar()->hide();!!!
}

void MainWindow::changeTabToCollection()
{
    ui->stackedWidget->insertWidget(6, booksCollection);
    ui->stackedWidget->setCurrentIndex(6);
}

void MainWindow::connectButton()
{
    connect(profile, &Profile::goToCollection, this, &MainWindow::changeTabToCollection);
}

void MainWindow::endRevision(bool from_quiz)
{
    //qDebug() << "bug_here!!!";
    ui->goToGamesButton->show();
    ui->goToLibraryButton->show();
    ui->goToProfileButton->show();
    ui->goToQuizButton->show();
    ui->goToVideoButton->show();
    ui->goToReadingButton->show();
    ui->stackedWidget->removeWidget(revisionWidget);
    if (from_quiz) {
      ui->stackedWidget->removeWidget(resultQuizWidget);
      ui->stackedWidget->insertWidget(5, startQuizWidget);
    }
    ui->stackedWidget->setCurrentIndex(0);
    //ui->stackedWidget->tabBar()->show();
}

void MainWindow::on_goToGamesButton_clicked()
{
    ui->stackedWidget->setCurrentWidget(gamesWidget);
}


void MainWindow::on_goToLibraryButton_clicked()
{
    //ui->stackedWidget->setCurrentWidget(libraryWidget);
}


void MainWindow::on_goToProfileButton_clicked()
{
    ui->stackedWidget->setCurrentWidget(profile);
}


void MainWindow::on_goToQuizButton_clicked()
{
    ui->stackedWidget->setCurrentWidget(startQuizWidget);
}


void MainWindow::on_goToReadingButton_clicked()
{
    ui->stackedWidget->setCurrentWidget(readNowWidget);
}


void MainWindow::on_goToVideoButton_clicked()
{
    ui->stackedWidget->setCurrentWidget(videoWidget);
}

void MainWindow::updateRevisionWidget()
{
    wordUpdate = true;
}

void MainWindow::updateCollection()
{
    profile->blockCollection();
    delete booksCollection;
    booksCollection = new BooksCollection(this->removeSpecialCharsFromEmail(authHandler->getUsername()));
    connect(booksCollection, &BooksCollection::layoutReady, profile, &Profile::unblockCollection);
    connect(booksCollection, &BooksCollection::signalToReadNow, this, &MainWindow::changeTabToReadNow);
    connect(booksCollection, &BooksCollection::backToMain, this, &MainWindow::goToProfileFromCollection);
}

void MainWindow::goToProfileFromCollection()
{
    ui->stackedWidget->setCurrentWidget(profile);
}


