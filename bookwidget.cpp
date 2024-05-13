#include "bookwidget.h"
#include "ui_bookwidget.h"

BookWidget::BookWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::BookWidget)
{
    ui->setupUi(this);
}

BookWidget::BookWidget(int bookId, QString name, QString author, QString genre, QWidget *parent) : bookId(bookId), name(name), author(author), genre(genre)
{
    ui->setupUi(this);
    ui->nameLabel->setText(name);
    ui->authorLabel->setText(author);
    ui->genreLabel->setText(genre);

}

BookWidget::~BookWidget()
{
    delete ui;
}

void BookWidget::on_readButton_clicked()
{
    emit openReadNow();
}

