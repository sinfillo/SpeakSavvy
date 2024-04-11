#include "databasehandler.h"
#include <QNetworkRequest>
#include <QDebug>


DatabaseHandler::DatabaseHandler(QObject *parent) : QObject{parent}
{
    m_networkManager = new QNetworkAccessManager(this);
    //m_networkReply = m_networkManager->get(QNetworkRequest(QUrl("https://speaksavvydb-default-rtdb.firebaseio.com/books.json")));
    //connect(m_networkReply, &QNetworkReply::readyRead, this, &DatabaseHandler::networkReplyReadyRead);
}

DatabaseHandler::~DatabaseHandler()
{
    m_networkManager->deleteLater();
}

void DatabaseHandler::getBookInfoFromDB() {
    qDebug() << "i am here";
    //array_names.clear();
    m_networkReply = m_networkManager->get(QNetworkRequest(QUrl("https://speaksavvydb-default-rtdb.firebaseio.com/books.json")));
    connect(m_networkReply, &QNetworkReply::readyRead, this, &DatabaseHandler::networkReplyReadyRead);
    //networkReplyReadyRead();
}

void DatabaseHandler::networkReplyReadyRead()
{
    qDebug() << "loool";
    QJsonDocument json_doc = QJsonDocument::fromJson(m_networkReply->readAll());
    QJsonArray json_array = json_doc.array();
    for (int i = 0; i < json_array.size(); ++i) {
        QJsonObject book = json_array[i].toObject();
        array_names.append(book.value("name").toString() );
    }
}
