#include "dbhandler.h"

#include <QNetworkRequest>
#include <QDebug>


DbHandler::DbHandler(QObject *parent) : QObject{parent}
{
    m_networkManager = new QNetworkAccessManager(this);
    m_networkReply = m_networkManager->get(QNetworkRequest(
        QUrl("https://speaksavvydb-default-rtdb.firebaseio.com/books.json")));
}

DbHandler::~DbHandler()
{
    m_networkManager->deleteLater();
}

void DbHandler::getBookInfoFromDB() {
    connect(m_networkReply, &QNetworkReply::readyRead, this, &DbHandler::networkReplyReadyRead);
    networkReplyReadyRead();
}

void DbHandler::networkReplyReadyRead() {
    QJsonDocument json_doc = QJsonDocument::fromJson(m_networkReply->readAll());
    QJsonArray json_array = json_doc.array();
    for (int i = 0; i < json_array.size(); ++i) {
        QJsonObject book = json_array[i].toObject();
        array_names.push_back(Book{i, book.value("name").toString().toStdString(),
                                   book.value("name").toString().toStdString(), "" });
    }
}
