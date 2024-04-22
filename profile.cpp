#include "profile.h"
#include "ui_profile.h"

Profile::Profile(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Profile)
{
    ui->setupUi(this);
    //ui->label->hide();
    /*QPixmap pixmap("excited_4039076.png");
    pixmap.scaledToHeight(ui->label_3->height(), Qt::SmoothTransformation);
    pixmap.scaledToWidth(ui->label_3->width(), Qt::SmoothTransformation);
    ui->label_3->setPixmap(pixmap);
    int labelWidth = pixmap.width();
    int labelHeight = pixmap.height();
    ui->label_3->setFixedSize(labelWidth/3, labelHeight/3);
    ui->label_3->setScaledContents(true);*/
    QPixmap pixmap("happy_flame.png");
    pixmap.scaledToHeight(ui->label_4->height(), Qt::SmoothTransformation);
    pixmap.scaledToWidth(ui->label_4->width(), Qt::SmoothTransformation);
    ui->label_4->setPixmap(pixmap);
    int labelWidth = pixmap.width();
    int labelHeight = pixmap.height();
    ui->label_4->setFixedSize(labelWidth, labelHeight);
    ui->label_4->setScaledContents(true);
}

Profile::~Profile()
{
    delete ui;
}

void Profile::slot(QString nickname)
{
    //ui->label->setText(nickname);
}

void Profile::on_pushButton_5_clicked()
{
    emit logOut();
}


void Profile::on_pushButton_6_clicked()
{
    emit goToRevision();
}

