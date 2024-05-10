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

    void on_learnButton_clicked();


signals:
    void doubleClicked();

private:
    Ui::ReadNow *ui;
    void checkSelectedText(QMouseEvent *mouseEvent);
    void updateContextTextEdit(QString text, bool need_translate = false);
    DatabaseHandler* dbHandler;
    int currentBookId = 0;
    QString email;
    QString currentWord;
    QString allBookText;
    bool detect_click_context = false;
    QString contextSentence;
    QString translateText(const QString& text);
    bool isDelimiter(QChar sym);
};

#endif // READNOWWIDGET_H
