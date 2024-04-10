#include "authwidget.h"
#include <QApplication>
#include <QLabel>

AuthWidget::AuthWidget(BaseWindow *parent)
    : QWidget(parent), parent_(parent), box_(new QWidget),
      layout_(new QVBoxLayout) {
  box_->setLayout(layout_);
  box_->setParent(this);
  updateWindow();
}

void AuthWidget::updateWindow() {
  if (!parent_->user_->isAuthorized()) {
    if (signOutButton_ != nullptr) {
      layout_->removeWidget(signOutButton_);
      delete signOutButton_;
    }

    signInButton_ = new QPushButton(tr("Вход"));
    loginText_ = new QLineEdit;
    passwordText_ = new QLineEdit;
    login = new QLabel;
    password = new QLabel;

    login->setText("Login:");
    password->setText("Password:");
    layout_->insertWidget(0, login);
    layout_->insertWidget(1, loginText_);
    layout_->insertWidget(2, password);
    layout_->insertWidget(3, passwordText_);
    layout_->insertWidget(4, signInButton_);

    QObject::connect(signInButton_, &QPushButton::clicked, this, [=]() {
      auto username = loginText_->text().toStdString();
      auto password = passwordText_->text().toStdString();
      parent_->user_->init(username, password);

      parent_->updateCollection();

      this->updateWindow();
    });

  } else {
    if (loginText_ != nullptr) {
      layout_->removeWidget(login);
      layout_->removeWidget(loginText_);
      layout_->removeWidget(password);
      layout_->removeWidget(passwordText_);
      layout_->removeWidget(signInButton_);
      delete login;
      delete signInButton_;
      delete password;
      delete loginText_;
      delete passwordText_;
    }

    signOutButton_ = new QPushButton(tr("Выход"));
    layout_->addWidget(signOutButton_);
    QObject::connect(signOutButton_, &QPushButton::clicked, this, [=]() {
      parent_->user_->exit();
      this->updateWindow();
      parent_->updateReadNow();
    });
  }
}
