#ifndef DBHANDLER_H
#define DBHANDLER_H

#include <QObject>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QJsonDocument>
#include <QJsonValue>
#include <QJsonArray>
#include <QJsonObject>
#include "book.h"

class DbHandler : public QObject
{
    Q_OBJECT
public:
    explicit DbHandler(QObject *parent = nullptr);
    ~DbHandler();
    void getBooks();
    //void getOneBook(int i);
    std::vector<Book> books_;
    Book book_;

public slots:
    void networkReplyReadyRead();
    void networkReadyReadOneBook(int i);
public:
    QNetworkAccessManager *networkManager_;
    QNetworkReply *networkReply_;
};


#endif // DBHANDLER_H
