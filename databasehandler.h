#ifndef DATABASEHANDLER_H
#define DATABASEHANDLER_H

#include <QObject>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QJsonDocument>
#include <QJsonValue>
#include <QJsonArray>
#include <QJsonObject>

class DatabaseHandler : public QObject
{
    Q_OBJECT
public:
    explicit DatabaseHandler(QObject *parent = nullptr);
    ~DatabaseHandler();
    void getBookInfoFromDB();
    QList<QString> array_names;

public slots:
    void networkReplyReadyRead();
private:
    QNetworkAccessManager *m_networkManager;
    QNetworkReply *m_networkReply;
};

#endif // DATABASEHANDLER_H
