#ifndef DATABASEHANDLER_H
#define DATABASEHANDLER_H

#include <QObject>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QJsonDocument>
#include <QJsonValue>
#include <QJsonArray>
#include <QJsonObject>
#include <QVariant>
#include <QByteArray>
#include <QHttpMultiPart>
#include <QPair>
#include "book.h"
#include "word.h"

class DatabaseHandler : public QObject
{
    Q_OBJECT
public:
    QList<Book> getBooks();
    explicit DatabaseHandler(QObject *parent = nullptr);
    ~DatabaseHandler();
    void getBookInfoFromDB();
    void getWordsInfoFromDB(QString email);
    void getCollectionFromDB(QString email);
    void sendPostRequestWithAWord(QString m_idToken, QString word, QString translation);
    void sendPostRequestWithABook(QString m_idToken, QString title,  int bookId);
    QList<Word> extractPairsFromJsonDocument(const QJsonDocument &jsonDoc);
    QList<QPair<QString, int>> extractCollectionPairsFromJsonDocument(const QJsonDocument &jsonDoc);
    QList<Word> getWords();
    QList<QPair<QString, int>> getCollection();

public slots:
    void networkReplyReadyReadBooks();
    void postRequestDone();
    void networkReplyReadyReadWords();
    void networkReplyReadyReadCollection();
signals:
    void booksRead();
    void wordsRead();
    void collectionRead();

private:
    QNetworkAccessManager *m_networkManager;
    QNetworkReply *m_networkReply;
    QList<Book> books;
    QList<Word> words;
    QList<QPair<QString, int>> collection;
};

#endif // DATABASEHANDLER_H
