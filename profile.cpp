#include "profile.h"
#include "ui_profile.h"

Profile::Profile(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Profile)
{
    ui->setupUi(this);
    QPixmap pixmap("excited_4039076.png");
    pixmap.scaledToHeight(ui->label_4->height(), Qt::SmoothTransformation);
    pixmap.scaledToWidth(ui->label_4->width(), Qt::SmoothTransformation);
    ui->label_4->setPixmap(pixmap);
    int labelWidth = pixmap.width();
    int labelHeight = pixmap.height();
    ui->label_4->setFixedSize(labelWidth/3, labelHeight/3);
    ui->label_4->setScaledContents(true);
}

Profile::~Profile()
{
    delete ui;
}

void Profile::slot(QString nickname)
{
    ui->label->setText(nickname);
}

void Profile::on_pushButton_5_clicked()
{
    emit logOut();
}

