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

private slots:
    //void translateSelectedText();
    void updateReadNowWidget();

signals:
    void doubleClicked();

private:
    Ui::ReadNow *ui;
    void translateSelectedText(QMouseEvent *mouseEvent);
    DatabaseHandler* dbHandler;
    int currentBookId = 0;
};

#endif // READNOWWIDGET_H
