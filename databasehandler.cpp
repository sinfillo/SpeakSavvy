#include "databasehandler.h"
#include <QNetworkRequest>
#include <QDebug>


QList<Book> DatabaseHandler::getBooks()
{
    return books;
}

DatabaseHandler::DatabaseHandler(QObject *parent) : QObject{parent}
{
    m_networkManager = new QNetworkAccessManager(this);
    //m_networkReply = m_networkManager->get(QNetworkRequest(QUrl("https://speaksavvydb-default-rtdb.firebaseio.com/books.json")));
    //connect(m_networkReply, &QNetworkReply::readyRead, this, &DatabaseHandler::networkReplyReadyReadBooks);
}

DatabaseHandler::~DatabaseHandler()
{
    m_networkManager->deleteLater();
}

void DatabaseHandler::getBookInfoFromDB() {
    m_networkReply = m_networkManager->get(QNetworkRequest(QUrl("https://speaksavvydb-default-rtdb.firebaseio.com/books.json")));
    //m_networkReply = m_networkManager->post(QNetworkRequest(QUrl()), )
    connect(m_networkReply, &QNetworkReply::readyRead, this, &DatabaseHandler::networkReplyReadyReadBooks);
}

void DatabaseHandler::sendPostRequestWithAWord(QString m_idToken, QString word)
{
    //QHttpMultiPart *multiPart = new QHttpMultiPart(QHttpMultiPart::FormDataType);
    //form multipart somehow
    qDebug() << "I'm here";
    QJsonObject json_object;
    json_object.insert("users_id_Token", QJsonValue::fromVariant("cat dog blas"));
    QJsonDocument json_doc(json_object);
    m_networkReply = m_networkManager->post(QNetworkRequest(QUrl("https://speaksavvydb-default-rtdb.firebaseio.com/users.json")), json_doc.toJson());
    connect(m_networkReply, &QNetworkReply::finished, this, &DatabaseHandler::postRequestDone);
}

void DatabaseHandler::sendPostRequestWithABook(QString m_idToken, QString word)
{
    qDebug() << "I'm here";
    QJsonObject json_object;
    json_object.insert("users_id_Token", QJsonValue::fromVariant("cat dog blas"));
    QJsonDocument json_doc(json_object);
    m_networkReply = m_networkManager->post(QNetworkRequest(QUrl("https://speaksavvydb-default-rtdb.firebaseio.com/users.json")), json_doc.toJson());
    connect(m_networkReply, &QNetworkReply::finished, this, &DatabaseHandler::postRequestDone);
}

void DatabaseHandler::networkReplyReadyReadBooks()
{
    QJsonDocument json_doc = QJsonDocument::fromJson(m_networkReply->readAll());
    QJsonArray json_array = json_doc.array();
    //qDebug() << json_array.size();
    for (int i = 0; i < json_array.size(); ++i) {
        QJsonObject book_in_json = json_array[i].toObject();
        //qDebug() << book_in_json.value("text").toString();
        Book book(book_in_json.value("name").toString(), book_in_json.value("author").toString(),
                  book_in_json.value("genre").toString(), book_in_json.value("text").toString());
        books.append(book);
    }
    emit booksRead();
}

void DatabaseHandler::postRequestDone()
{
    qDebug() << "I'm here";
    qDebug() << m_networkReply->readAll();
}

