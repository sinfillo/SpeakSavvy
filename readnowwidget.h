#ifndef READNOWWIDGET_H
#define READNOWWIDGET_H

#include <QWidget>
#include <QMainWindow>
#include <QtNetwork>
#include <QtGui>
#include <QtCore>
#include <QMessageBox>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QTextCursor>
#include <QPushButton>
#include "databasehandler.h"

namespace Ui {
class ReadNow;
}

class ReadNowWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ReadNowWidget(QWidget *parent = nullptr);
    bool eventFilter(QObject *watched, QEvent *event);
    void setCurrentBookId(int bookId);
    ~ReadNowWidget();
    void setEmail(QString email);

private slots:
    //void translateSelectedText();
    void updateReadNowWidget();

    void on_pushButton_2_clicked();

signals:
    void doubleClicked();

private:
    Ui::ReadNow *ui;
    void translateSelectedText(QMouseEvent *mouseEvent);
    DatabaseHandler* dbHandler;
    int currentBookId = 0;
    QString email;
    QString currentWord;
};

#endif // READNOWWIDGET_H
