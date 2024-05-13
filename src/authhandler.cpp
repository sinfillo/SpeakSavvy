#include "../inc/authhandler.h"
#include <QDebug>
#include <QVariantMap>
#include <QNetworkRequest>
#include <QJsonObject>

AuthHandler::AuthHandler(QObject *parent) : QObject(parent), m_apiKey_(QString()){
    user_is_signed_in = false;
    m_networkAccessManager = new QNetworkAccessManager(this);
    //connect(this, &AuthHandler::userSignedIn, this, &AuthHandler::performAuthenticatedDatabaseCall);
}

AuthHandler::~AuthHandler()
{
    m_networkAccessManager->deleteLater();
}

void AuthHandler::setAPIKey(const QString &apiKey) {
    m_apiKey_ = apiKey;

}

void AuthHandler::signUserUp(const QString &emailAddress, const QString &password)
{
    QString signUpEndpoint = "https://identitytoolkit.googleapis.com/v1/accounts:signUp?key=" + m_apiKey_;

    QVariantMap variantPayload;
    variantPayload["email"] = emailAddress;
    variantPayload["password"] = password;
    variantPayload["returnSecureToken"] = true;

    QJsonDocument jsonPayload = QJsonDocument::fromVariant(variantPayload);
    performPOST(signUpEndpoint, jsonPayload);
}

void AuthHandler::signUserIn(const QString &emailAddress, const QString &password)
{
    QString signInEndpoint = "https://identitytoolkit.googleapis.com/v1/accounts:signInWithPassword?key=" + m_apiKey_;

    username = emailAddress;

    QVariantMap variantPayload;
    variantPayload["email"] = emailAddress;
    variantPayload["password"] = password;
    variantPayload["returnSecureToken"] = true;

    QJsonDocument jsonPayload = QJsonDocument::fromVariant(variantPayload);
    performPOST(signInEndpoint, jsonPayload);
}

bool AuthHandler::getIsSignedIn()
{
    return user_is_signed_in;
}

QString AuthHandler::getUsername()
{
    return username;
}

void AuthHandler::networkReplyReadyRead()
{
    QByteArray response = m_networkReply->readAll();
    m_networkReply->deleteLater();

    parseResponse(response);

}

void AuthHandler::performAuthenticatedDatabaseCall(QString m_idToken)
{
    QString endPoint = "https://authattempt-de8b5-default-rtdb.firebaseio.com/Words.json?auth=" + m_idToken;
    m_networkReply = m_networkAccessManager->get(QNetworkRequest(QUrl(endPoint)));
    connect (m_networkReply, &QNetworkReply::readyRead, this, &AuthHandler::networkReplyReadyRead) ;
}

void AuthHandler::performPOST(const QString &url, const QJsonDocument &payload)
{
    QNetworkRequest newRequest((QUrl(url)));
    newRequest.setHeader(QNetworkRequest::ContentTypeHeader, QString("application/json"));
    m_networkReply = m_networkAccessManager->post(newRequest, payload.toJson());
    connect(m_networkReply, &QNetworkReply::readyRead, this, &AuthHandler::networkReplyReadyRead);

}

void AuthHandler::parseResponse(const QByteArray &response)
{
    QJsonDocument jsonDocument = QJsonDocument::fromJson(response);
    if (jsonDocument.object().contains("error")) {
        qDebug() << "Error occured: " << response;

        QJsonDocument json_doc = QJsonDocument::fromJson(response);
        QJsonObject json_obj = json_doc.object();
        QJsonObject info = json_obj.value("error").toObject();
        QString error_message = info.value("message").toString();

        //QString error_message = "An error occured";
        emit userSignInError(error_message);
    } else if (jsonDocument.object().contains("kind")) {
        QString idToken = jsonDocument.object().value("idToken").toString();
        m_idToken = idToken;
        user_is_signed_in = true;
        emit userSignedIn(m_idToken, username);
    } else {
        qDebug() << "The response was: " << response;
    }

}
