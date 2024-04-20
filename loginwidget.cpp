#include "loginwidget.h"
#include "ui_loginwidget.h"

LogInWidget::LogInWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::LogInWidget)
{
    ui->setupUi(this);

    ui->lineEdit->setPlaceholderText("email");
    ui->lineEdit_2->setPlaceholderText("password");
    ui->lineEdit_2->setEchoMode(QLineEdit::Password);
}

LogInWidget::~LogInWidget()
{
    delete ui;
}

void LogInWidget::on_pushButton_clicked()
{
    emit logIntoAccount(ui->lineEdit->text(), ui->lineEdit_2->text());
}


void LogInWidget::on_pushButton_2_clicked()
{
    emit changeTabToSignUp();
}

