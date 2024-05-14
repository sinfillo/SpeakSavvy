#ifndef LOGINWIDGET_H
#define LOGINWIDGET_H

#include <QWidget>

namespace Ui {
class LogInWidget;
}

class LogInWidget : public QWidget
{
    Q_OBJECT

public:
    explicit LogInWidget(QWidget *parent = nullptr);
    ~LogInWidget();
    void deleteText();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

signals:
    void logIntoAccount(QString email, QString password);
    void changeTabToSignUp();

private:
    Ui::LogInWidget *ui;
};

#endif // LOGINWIDGET_H
