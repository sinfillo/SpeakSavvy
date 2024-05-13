#include "../inc/databasehandler.h"
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

void DatabaseHandler::getWordsInfoFromDB(QString email)
{
    m_networkReply = m_networkManager->get(QNetworkRequest(QUrl("https://speaksavvydb-default-rtdb.firebaseio.com/users/words/"+ email +".json")));
    connect(m_networkReply, &QNetworkReply::readyRead, this, &DatabaseHandler::networkReplyReadyReadWords);
}

void DatabaseHandler::getCollectionFromDB(QString email)
{
    m_networkReply = m_networkManager->get(QNetworkRequest(QUrl("https://speaksavvydb-default-rtdb.firebaseio.com/users/books/"+ email +".json")));
    connect(m_networkReply, &QNetworkReply::readyRead, this, &DatabaseHandler::networkReplyReadyReadCollection);
}

void DatabaseHandler::sendPostRequestWithAWord(QString email, QString word, QString translation)
{
    qDebug() << "I'm here id token";
    //qDebug() << m_idToken;
    QJsonObject json_object;
    json_object.insert(word, QJsonValue::fromVariant(translation));
    QJsonDocument json_doc(json_object);
    m_networkReply = m_networkManager->post(QNetworkRequest(QUrl("https://speaksavvydb-default-rtdb.firebaseio.com/users/words/" + email +".json")), json_doc.toJson());
    connect(m_networkReply, &QNetworkReply::finished, this, &DatabaseHandler::postRequestDone);
}

void DatabaseHandler::sendPostRequestWithABook(QString email, QString title, int bookId)
{
    QJsonObject json_object;
    json_object.insert(title, QJsonValue::fromVariant(bookId));
    QJsonDocument json_doc(json_object);
    m_networkReply = m_networkManager->post(QNetworkRequest(QUrl("https://speaksavvydb-default-rtdb.firebaseio.com/users/books/" + email +".json")), json_doc.toJson());
    connect(m_networkReply, &QNetworkReply::finished, this, &DatabaseHandler::postRequestDone);
}

QList<Word> DatabaseHandler::extractPairsFromJsonDocument(const QJsonDocument &jsonDoc)
{
    QList<Word> pairs;
    QJsonObject jsonObj = jsonDoc.object();

    for (auto it = jsonObj.begin(); it != jsonObj.end(); ++it) {
        QString key = it.key();
        QJsonObject innerObj = it.value().toObject();
        for (auto innerIt = innerObj.begin(); innerIt != innerObj.end(); ++innerIt) {
            Word word(innerIt.key(), innerIt.value().toString());
            qDebug() << innerIt.key() << ": " << innerIt.value().toString();
            pairs.append(word);
        }
    }

    return pairs;
}

QList<QPair<QString, int>> DatabaseHandler::extractCollectionPairsFromJsonDocument(const QJsonDocument &jsonDoc)
{
    QList<QPair<QString, int>> pairs;
    QJsonObject jsonObj = jsonDoc.object();

    for (auto it = jsonObj.begin(); it != jsonObj.end(); ++it) {
        QString key = it.key();
        QJsonObject innerObj = it.value().toObject();
        for (auto innerIt = innerObj.begin(); innerIt != innerObj.end(); ++innerIt) {
            qDebug() << innerIt.key() << ": " << innerIt.value().toInt();
            pairs.append(qMakePair(innerIt.key(), innerIt.value().toInt()));
        }
    }

    return pairs;
}


QList<Word> DatabaseHandler::getWords()
{
    return words;
}

QList<QPair<QString, int> > DatabaseHandler::getCollection()
{
    return collection;
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

void DatabaseHandler::networkReplyReadyReadWords()
{
    QJsonDocument jsonDoc = QJsonDocument::fromJson(m_networkReply->readAll());
    //qDebug() <<m_networkReply->readAll() << "RHG";
    words = extractPairsFromJsonDocument(jsonDoc);
    emit wordsRead();
}

void DatabaseHandler::networkReplyReadyReadCollection()
{
    QJsonDocument jsonDoc = QJsonDocument::fromJson(m_networkReply->readAll());
    //qDebug() << m_networkReply->readAll() << "REP";
    collection = extractCollectionPairsFromJsonDocument(jsonDoc);
    //for (int i = 0; i < collection.size(); ++i) {
      //  qDebug() << collection[i].first << " " << collection[i].second;
    //}
    qDebug() << "COLLECT";
    emit collectionRead();
}

