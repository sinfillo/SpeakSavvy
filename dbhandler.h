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
    void getBookInfoFromDB();
    std::vector<Book> array_names;

public slots:
    void networkReplyReadyRead();
private:
    QNetworkAccessManager *m_networkManager;
    QNetworkReply *m_networkReply;
};


#endif // DBHANDLER_H
