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
    void sendPostRequestWithAWord(QString m_idToken, QString word, QString translation);
    void sendPostRequestWithABook(QString m_idToken, QString book);
    QList<Word> extractPairsFromJsonDocument(const QJsonDocument &jsonDoc);
    QList<Word> getWords();

public slots:
    void networkReplyReadyReadBooks();
    void postRequestDone();
    void networkReplyReadyReadWords();
signals:
    void booksRead();
    void wordsRead();

private:
    QNetworkAccessManager *m_networkManager;
    QNetworkReply *m_networkReply;
    QList<Book> books;
    QList<Word> words;
};

#endif // DATABASEHANDLER_H
