#include "booknow.h"
#include <QAction>
#include <QMainWindow>
#include <QApplication>
#include <QGridLayout>
#include <QPushButton>
#include <QString>
#include <QTextEdit>
#include <iostream>
#include <QDesktopWidget>

void ReadNowWindow::makeConnectWithDict() {
    connect(button_, &QPushButton::clicked, dictionary, [=]() {
        if (translatedTextDisplay_ != nullptr) {
            assert(dictionary != nullptr);
            dictionary->executeRequestFromReadNow(
                selectedText_.toStdString(), translatedText_.toStdString(),
                authorName_.toStdString() + " " + title_.toStdString());
        }

    });
}

ReadNowWindow::ReadNowWindow(BaseWindow *parent) : QMainWindow(parent), parent_(parent) {
    auto *layout = new QHBoxLayout;

    screenWidth_ = QGuiApplication::primaryScreen()->geometry().width();
    screenHeight_ = QGuiApplication::primaryScreen()->geometry().height();

    printBook();  // выводим книгу на экран
    bookTextDisplay_->setLayout(layout);
    createWindowWithTranslate();
    translatedTextDisplay_->setLayout(layout);
    createButtonAddPhraseToDict();
    createActions();   // создаем Actions
    createToolBars();  // создаем панель
};


void ReadNowWindow::translateText() {
    if (translatedTextDisplay_) {
        translatedTextDisplay_->clear();
        selectedText_ = bookTextDisplay_->textCursor().selectedText();
        translatedText_ =
            QString::fromStdString(translate::translate(selectedText_.toStdString()));
        translatedTextDisplay_->append(translatedText_);
    }
}

void ReadNowWindow::createButtonAddPhraseToDict() {
    button_ = new QPushButton;
    button_->setParent(this);
    button_->setGeometry(screenWidth_ - 850, 660, 600, 50);
    button_->setText("Перевести");
    button_->show();
}

void ReadNowWindow::createWindowWithTranslate() {
    translatedTextDisplay_ = new QTextEdit(this);
    translatedTextDisplay_->setGeometry(screenWidth_ - 900, 120, 700, 500);

    auto font = translatedTextDisplay_->font();
    font.setPointSize(12);
    translatedTextDisplay_->setFont(font);
}

void ReadNowWindow::printBook(const QString &book, const QString &author, const QString &title) {
    bookTextDisplay_ = new QTextEdit(this);
    authorName_ = author;
    title_ = title;
    if (book == nullptr) {
        bookTextDisplay_->append("Select book");
    } else {
        bookTextDisplay_->append(book);
    }
    bookTextDisplay_->moveCursor(QTextCursor::Start);
    bookTextDisplay_->setReadOnly(true);
    bookTextDisplay_->setGeometry(40, 120, screenWidth_ - 1000, screenHeight_ - 350);

    auto font = bookTextDisplay_->font();
    font.setPointSize(20);
    bookTextDisplay_->setFont(font);
}

void ReadNowWindow::createActions() {
    translateSelectedTextAction_ = new QAction(tr("Translate"), this);
    translateSelectedTextAction_->setShortcut(tr("Ctrl+D"));
    translateSelectedTextAction_->setStatusTip(
        tr("Фраза будет переведена при нажатии"));
    connect(translateSelectedTextAction_, &QAction::triggered, this,
            &ReadNowWindow::translateText);

    translateSelectedTextAction_->setEnabled(false);
    connect(bookTextDisplay_, &QTextEdit::copyAvailable, translateSelectedTextAction_,
            &QAction::setEnabled);

}

void ReadNowWindow::createToolBars() {
    toolBar_ = addToolBar("main toolbar");
    toolBar_->addAction(translateSelectedTextAction_);
}

QString ReadNowWindow::getAuthorTitle() {
    return authorName_ + " " + title_;
}

bool ReadNowWindow::emptyTranslatedTextDisplay() {
    return (translatedTextDisplay_ == nullptr);
}

void ReadNowWindow::cleanTranslatedTextDisplay() {
    if (translatedTextDisplay_ != nullptr) {
        translatedTextDisplay_->clear();
    }
}

void ReadNowWindow::updateToolBar() {
    removeToolBar(toolBar_);
    toolBar_->clear();
    createActions();
    createToolBars();
}
