#ifndef AUTHWIDGET_H
#define AUTHWIDGET_H

#include "basewindow.h"
#include <QGridLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QWidget>

class AuthWidget : public QWidget {
private:
  BaseWindow *parent_;
  QLineEdit *loginText_ = nullptr;
  QLineEdit *passwordText_ = nullptr;
  QLabel *login;
  QLabel *password;
  QWidget *box_;
  QVBoxLayout *layout_;
  QPushButton *signInButton_ = nullptr;
  QPushButton *signOutButton_ = nullptr;

public:
  explicit AuthWidget(BaseWindow *parent = nullptr);

  void updateWindow();
};

#endif // AUTHWIDGET_H
