#include "dbhandler.h"

#include <QNetworkRequest>
#include <QDebug>


DbHandler::DbHandler(QObject *parent) : QObject{parent}
{
    networkManager_ = new QNetworkAccessManager(this);
    networkReply_ = networkManager_->get(QNetworkRequest(
        QUrl("https://speaksavvydb-default-rtdb.firebaseio.com/books.json")));
}

DbHandler::~DbHandler()
{
    networkManager_->deleteLater();
}

void DbHandler::getBooks() {
    connect(networkReply_, &QNetworkReply::readyRead, this, &DbHandler::networkReplyReadyRead);
    networkReplyReadyRead();
}

// void DbHandler::getOneBook(int i) {
//     connect(networkReply_, &QNetworkReply::readyRead, this, &DbHandler::networkReadyReadOneBook);
//     networkReadyReadOneBook(i);
// }

void DbHandler::networkReplyReadyRead() {
    QJsonDocument json_doc = QJsonDocument::fromJson(networkReply_->readAll());
    QJsonArray json_array = json_doc.array();
    for (int i = 0; i < json_array.size(); ++i) {
        QJsonObject book = json_array[i].toObject();
        books_.push_back(Book{i, book.value("name").toString().toStdString(),
                                   book.value("author").toString().toStdString(), "" });
    }
}


void DbHandler::networkReadyReadOneBook(int i) {
    QJsonDocument json_doc = QJsonDocument::fromJson(networkReply_->readAll());
    QJsonArray json_array = json_doc.array();
    book_ = Book{i, json_array[i].toObject().value("name").toString().toStdString(),
                 json_array[i].toObject().value("author").toString().toStdString(), "" };

}

