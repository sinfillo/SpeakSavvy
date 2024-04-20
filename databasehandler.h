#ifndef DATABASEHANDLER_H
#define DATABASEHANDLER_H

#include <QObject>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QJsonDocument>
#include <QJsonValue>
#include <QJsonArray>
#include <QJsonObject>
#include <QVariant>
#include <QByteArray>
#include <QHttpMultiPart>
#include "book.h"

class DatabaseHandler : public QObject
{
    Q_OBJECT
public:
    QList<Book> getBooks();
    explicit DatabaseHandler(QObject *parent = nullptr);
    ~DatabaseHandler();
    void getBookInfoFromDB();
    void sendPostRequestWithAWord(QString m_idToken, QString word);
    void sendPostRequestWithABook(QString m_idToken, QString word);

public slots:
    void networkReplyReadyReadBooks();
    void postRequestDone();
signals:
    void booksRead();

private:
    QNetworkAccessManager *m_networkManager;
    QNetworkReply *m_networkReply;
    QList<Book> books;
};

#endif // DATABASEHANDLER_H
