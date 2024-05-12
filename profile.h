#ifndef PROFILE_H
#define PROFILE_H

#include <QWidget>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QPixmap>
//#include<authhandler.h>

namespace Ui {
class Profile;
}

class Profile : public QWidget
{
    Q_OBJECT

public:
    explicit Profile(QWidget *parent = nullptr);
    ~Profile();

public slots:
    void slot(QString nickname);

private slots:
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();

    void on_wordsButton_clicked();

    void on_pushButton_clicked();

signals:
    void logOut();
    void goToRevision(bool flag = false);

private:
    Ui::Profile *ui;
};

#endif // PROFILE_H
