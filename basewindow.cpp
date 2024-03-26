#include "basewindow.h"
#include <QMenuBar>
#include "collectionwidget.h"
#include "librarywidget.h"

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
    readNowAction_ = new QAction("Чтение", this);

    menuBar()->addAction(libraryAction_);
    menuBar()->addAction(collectionAction_);
    menuBar()->addAction(readNowAction_);

    setCentralWidget(&stackWidgets_);

    QObject::connect(collectionAction_, &QAction::triggered, this, [=]() {
        showCollection();
    });

    QObject::connect(libraryAction_, &QAction::triggered, this, [=]() {
        updateLibrary();
        showLibrary();
    });

    QObject::connect(readNowAction_, &QAction::triggered, this, [=]() {
        showReadNow();
    });

}


void BaseWindow::showReadNow() {
    setWindowTitle("Книга");
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


void BaseWindow::updateLibrary() const {
    dynamic_cast<LibraryWidget *>(stackWidgets_.widget(widgetIndx_.library))
        ->updateWindow();
}


void BaseWindow::updateCollection() const {
    auto collection = dynamic_cast<CollectionWidget *>(
        stackWidgets_.widget(widgetIndx_.collection));
    collection->updateWindow();
}
