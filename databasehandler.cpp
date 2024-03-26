#include "databasehandler.h"
#include <QNetworkRequest>
#include <QDebug>


DatabaseHandler::DatabaseHandler(QObject *parent) : QObject{parent}
{
    m_networkManager = new QNetworkAccessManager(this);
    m_networkReply = m_networkManager->get(QNetworkRequest(QUrl("https://speaksavvydb-default-rtdb.firebaseio.com/books.json")));
}

DatabaseHandler::~DatabaseHandler()
{
    m_networkManager->deleteLater();
}

void DatabaseHandler::getBookInfoFromDB() {
    connect(m_networkReply, &QNetworkReply::readyRead, this, &DatabaseHandler::networkReplyReadyRead);
    networkReplyReadyRead();
}

void DatabaseHandler::networkReplyReadyRead()
{
    QJsonDocument json_doc = QJsonDocument::fromJson(m_networkReply->readAll());
    QJsonArray json_array = json_doc.array();
    for (int i = 0; i < json_array.size(); ++i) {
        QJsonObject book = json_array[i].toObject();
        array_names.append(book.value("name").toString() );
    }
}
