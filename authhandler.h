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
    void signUserIn(const QString& emailAddress, const QString &password);
    bool getIsSignedIn();

public slots:
    void networkReplyReadyRead();
    void performAuthenticatedDatabaseCall(QString m_idToken);

signals:
    void userSignedIn(QString m_idToken, QString username);
    void userSignInError(QString error);
private:
    void performPOST(const QString& url, const QJsonDocument& payload);
    void parseResponse(const QByteArray &response);
    QString m_apiKey_;
    QNetworkAccessManager *m_networkAccessManager;
    QNetworkReply *m_networkReply;
    QString m_idToken;
    QString username;
    bool user_is_signed_in;
};

#endif // AUTHHANDLER_H
