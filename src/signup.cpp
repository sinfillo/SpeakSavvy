#include "../inc/signup.h"
#include "../ui/inc/ui_signup.h"

SignUp::SignUp(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::SignUp)
{
    ui->setupUi(this);
    ui->lineEdit->setPlaceholderText("email");
    ui->lineEdit_2->setPlaceholderText("password");
    ui->lineEdit_2->setEchoMode(QLineEdit::Password);
}

SignUp::~SignUp()
{
    delete ui;
}

void SignUp::on_pushButton_clicked()
{
    emit createAccount(ui->lineEdit->text(), ui->lineEdit_2->text());
}


void SignUp::on_pushButton_2_clicked()
{
    emit changeTabToLogIn();
}

