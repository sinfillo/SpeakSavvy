#ifndef AUTHHANDLER_H
#define AUTHHANDLER_H

#include <QObject>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QJsonDocument>



class AuthHandler : public QObject
{
    Q_OBJECT
public:
    explicit AuthHandler(QObject *parent = nullptr);
    ~AuthHandler();
    void setAPIKey(const QString& apiKey);
    void signUserUp(const QString& emailAddress, const QString &password);
public slots:
    void networkReplyReadyRead();

signals:
private:
    void performPOST(const QString& url, const QJsonDocument& payload);
    QString m_apiKey_;
    QNetworkAccessManager *m_networkAccessManager;
    QNetworkReply *m_networkReply;

};

#endif // AUTHHANDLER_H
