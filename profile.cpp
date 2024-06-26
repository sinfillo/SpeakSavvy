#include "profile.h"
#include "ui_profile.h"

Profile::Profile(QWidget *parent)
    : QWidget(parent)
      , ui(new Ui::Profile)
{
  ui->setupUi(this);
    QPixmap bearPixmap(":/png/bear-2.png");
    QIcon avatarButtonIcon(bearPixmap);
    ui->avatarButton->setIcon(avatarButtonIcon);

    /*QPixmap pixmap("happy_flame.png");
    pixmap.scaledToHeight(ui->label_4->height(), Qt::SmoothTransformation);
    pixmap.scaledToWidth(ui->label_4->width(), Qt::SmoothTransformation);
    ui->label_4->setPixmap(pixmap);
    int labelWidth = pixmap.width();
    int labelHeight = pixmap.height();
    ui->label_4->setFixedSize(labelWidth, labelHeight);
    ui->label_4->setScaledContents(true);*/
}

Profile::~Profile()
{
    delete ui;
}

void Profile::blockCollection()
{
    ui->GameButton_11->setEnabled(false);
}

void Profile::unblockCollection()
{
    ui->GameButton_11->setEnabled(true);
}

void Profile::slot(QString nickname)
{
    ui->label->setText(nickname);
}

void Profile::on_pushButton_5_clicked()
{
    emit logOut();
}


void Profile::on_pushButton_6_clicked()
{
    emit goToRevision(false);
}


void Profile::on_wordsButton_clicked()
{
    emit goToRevision(false);
}


void Profile::on_pushButton_clicked()
{
    emit logOut();
}


void Profile::on_GameButton_11_clicked()
{
    emit goToCollection();
}

