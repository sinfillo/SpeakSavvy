#ifndef BOOKWINDOW_H
#define BOOKWINDOW_H

#include <QMainWindow>
#include <QtNetwork>
#include <QtGui>
#include <QtCore>
#include <QNetworkAccessManager>
#include <QMetaObject>
#include <QAction>
#include <QNetworkReply>

QT_BEGIN_NAMESPACE
namespace Ui { class bookWindow; }
QT_END_NAMESPACE

class bookWindow : public QMainWindow
{
    Q_OBJECT

public:
    bookWindow(QWidget *parent = nullptr);
    ~bookWindow();

private slots:
    void on_translateButton_clicked();

private:
    Ui::bookWindow *ui;
    void translateSelectedText();
};
#endif // BOOKWINDOW_H
