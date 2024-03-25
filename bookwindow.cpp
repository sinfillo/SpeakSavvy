#include "bookwindow.h"
#include "ui_bookwindow.h"

bookWindow::bookWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::bookWindow)
{
    ui->setupUi(this);
    ui->currentBook->append("Я ненавижу свет\n"
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
                         "Здесь — я любить боюсь…");
    ui->currentBook->setReadOnly(true);
    ui->translationWindow->setReadOnly(true);
}

void bookWindow::translateSelectedText() {
    ui->translationWindow->setText(ui->currentBook->textCursor().selectedText());
}


bookWindow::~bookWindow()
{
    delete ui;
}




void bookWindow::on_currentBook_selectionChanged()
{
    //qDebug() << "aboba";
    translateSelectedText();
}

