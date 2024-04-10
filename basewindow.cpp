#include "basewindow.h"
#include <QMenuBar>
#include "collectionwidget.h"
#include "librarywidget.h"
#include "readwidget.h"
#include "authwidget.h"

BaseWindow::BaseWindow(QWidget *parent)
    :stackWidgets_(new QStackedWidget), QMainWindow(parent) {
    addMenu();
}


void BaseWindow::setUser(User *u) {
    user_ = u;
}

void BaseWindow::addMenu() {
    collectionAction_ = new QAction("Коллекция", this);
    libraryAction_ = new QAction("Библиотека", this);
    readNowAction_ = new QAction("В процессе чтения", this);
    authAction_ = new QAction("Вход/выход", this);

    menuBar()->addAction(libraryAction_);
    menuBar()->addAction(collectionAction_);
    menuBar()->addAction(readNowAction_);
    menuBar()->addAction(authAction_);

    setCentralWidget(&stackWidgets_);

    QObject::connect(collectionAction_, &QAction::triggered, this, [=]() {
        showCollection();
    });

    QObject::connect(libraryAction_, &QAction::triggered, this, [=]() {
        updateLibrary();
        showLibrary();
    });

    QObject::connect(authAction_, &QAction::triggered, this, [=]() {
        showAuth();
    });

    QObject::connect(readNowAction_, &QAction::triggered, this, [=]() {
        updateReadNow();
        showReadNow();
    });

}


void BaseWindow::showReadNow() {
    auto readWidget =
    dynamic_cast<ReadWidget*>(stackWidgets_.widget(widgetIndx_.readNow));
    setWindowTitle(readWidget->getBookTitle());
    stackWidgets_.setCurrentIndex(widgetIndx_.readNow);
}


void BaseWindow::showLibrary() {
    setWindowTitle("Библиотека");
    stackWidgets_.setCurrentIndex(widgetIndx_.library);
}

void BaseWindow::showCollection() {
    setWindowTitle("Коллекция");
    stackWidgets_.setCurrentIndex(widgetIndx_.collection);
}

void BaseWindow::showAuth(){
    setWindowTitle("Авторизация");
    stackWidgets_.setCurrentIndex(widgetIndx_.auth);
}

void BaseWindow::updateLibrary() const {
    dynamic_cast<LibraryWidget *>(stackWidgets_.widget(widgetIndx_.library))
        ->updateWindow();
}

void BaseWindow::updateReadNow(){
    auto readWidget =
        dynamic_cast<ReadWidget*>(stackWidgets_.widget(widgetIndx_.readNow));
    const QString login_password = QString::fromStdString(user_->login_ + user_->password_);
    readWidget->displayBook(login_password, "Wtf", "Aboba");
    setWindowTitle(readWidget->getBookTitle());
    readWidget->cleanTranslationDisplay();
}


void BaseWindow::updateCollection() const {
    auto collection = dynamic_cast<CollectionWidget *>(
        stackWidgets_.widget(widgetIndx_.collection));
    collection->updateWindow();
}
