#ifndef DBHANDLER_H
#define DBHANDLER_H

#include "book.h"
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonValue>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QObject>

class DbHandler : public QObject {
  Q_OBJECT
public:
  std::vector<Book> books_;
  Book book_;
  // TODO: make networkManager_ and networkReply_ private
  QNetworkAccessManager *networkManager_;
  QNetworkReply *networkReply_;

  explicit DbHandler(QObject *parent = nullptr);

  ~DbHandler();

  void getBooks();
  // TODO: void getOneBook(int i);

public slots:
  void networkReplyReadyRead();

  void networkReadyReadOneBook(int i);
};

#endif // DBHANDLER_H
