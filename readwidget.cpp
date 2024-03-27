#include "readwidget.h"
#include "translate.cpp"
#include <QAction>
#include <QMainWindow>
#include <QApplication>
#include <QGridLayout>
#include <QPushButton>
#include <QString>
#include <QTextEdit>
#include <QGuiApplication>
#include "basewindow.h"

ReadWidget::ReadWidget(BaseWindow *parent) : QMainWindow(parent), parent_(parent) {
    auto *layout = new QHBoxLayout;

    screenWidth_ = QGuiApplication::primaryScreen()->geometry().width();
    screenHeight_ = QGuiApplication::primaryScreen()->geometry().height();

    displayBook();  // book output into window

    textWidget_->setLayout(layout);

    //translated text window
    translationWidget_ = new QTextEdit(this);
    translationWidget_->setGeometry(screenWidth_ - 900, 120, 700, 500);
    auto font = translationWidget_->font();
    font.setPointSize(12);
    translationWidget_->setFont(font);
    translationWidget_->setLayout(layout);

    // translation button display
    button_ = new QPushButton;
    button_->setParent(this);
    button_->setGeometry(screenWidth_ - 850, 660, 600, 50);
    button_->setText("Translate");
    button_->show();
    connect(button_, &QPushButton::clicked, this, &ReadWidget::translateText);
};



void ReadWidget::translateText() {
    ReadWidget::cleanTranslationDisplay();

    QString translatedText = translate::translateSelectedText(
        textWidget_->textCursor().selectedText());
    translationWidget_->append(translatedText);

}

void ReadWidget::displayBook(const QString &book, const QString &author, const QString &title) {
    textWidget_ = new QTextEdit(this);
    author_ = author;
    title_ = title;
    textWidget_->append(book);

    textWidget_->moveCursor(QTextCursor::Start);
    textWidget_->setReadOnly(true);
    textWidget_->setGeometry(40, 120, screenWidth_ - 1000, screenHeight_ - 350);

    auto font = textWidget_->font();
    font.setPointSize(20);
    textWidget_->setFont(font);
}


QString ReadWidget::getBookTitle() {
    return author_ + " " + title_;
}

void ReadWidget::cleanTranslationDisplay() {
    if (translationWidget_ != nullptr) {
        translationWidget_->clear();
    }
}

