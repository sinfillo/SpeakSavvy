#include "basewindow.h"
#include <QMenuBar>
#include "collectionwidget.h"
#include "librarywidget.h"
#include "readwidget.h"

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


void BaseWindow::updateLibrary() const {
    dynamic_cast<LibraryWidget *>(stackWidgets_.widget(widgetIndx_.library))
        ->updateWindow();
}

void BaseWindow::updateReadNow(){
    auto readWidget =
        dynamic_cast<ReadWidget*>(stackWidgets_.widget(widgetIndx_.readNow));
    readWidget->displayBook("Я ненавижу свет\n"
                       "Однообразных звезд.\n"
                       "Здравствуй, мой давний бред, —\n"
                       "Башни стрельчатой рост!\n"
                       "\n"
                       "Кружевом камень будь\n"
                       "И паутиной стань:\n"
                       "Неба пустую грудь\n"
                       "Тонкой иглою рань.\n"
                       "\n"
                       "Будет и мой черед —\n"
                       "Чую размах крыла.\n"
                       "Так — но куда уйдет\n"
                       "Мысли живой стрела?\n"
                       "\n"
                       "Или свой путь и срок\n"
                       "Я, исчерпав, вернусь:\n"
                       "Там — я любить не мог,\n"
                       "Здесь — я любить боюсь…\n"
                       "Я ненавижу свет\n"
                       "Однообразных звезд.\n"
                       "Здравствуй, мой давний бред, —\n"
                       "Башни стрельчатой рост!\n"
                       "\n"
                       "Кружевом камень будь\n"
                       "И паутиной стань:\n"
                       "Неба пустую грудь\n"
                       "Тонкой иглою рань.\n"
                       "\n"
                       "Будет и мой черед —\n"
                       "Чую размах крыла.\n"
                       "Так — но куда уйдет\n"
                       "Мысли живой стрела?\n"
                       "\n"
                       "Или свой путь и срок\n"
                       "Я, исчерпав, вернусь:\n"
                       "Там — я любить не мог,\n"
                       "Здесь — я любить боюсь…", "Wtf", "Aboba");
    setWindowTitle(readWidget->getBookTitle());
    readWidget->cleanTranslationDisplay();
}


void BaseWindow::updateCollection() const {
    auto collection = dynamic_cast<CollectionWidget *>(
        stackWidgets_.widget(widgetIndx_.collection));
    collection->updateWindow();
}
