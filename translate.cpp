#include <QAction>
#include <QApplication>
#include <QLabel>
#include <QListView>
#include <QListWidget>
#include <QMainWindow>
#include <QMessageBox>
#include <QMetaObject>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QScrollArea>
#include <QTableView>
#include <QToolBar>
#include <QVBoxLayout>
#include <QtCore>
#include <QtGui>
#include <QtNetwork>

namespace translate {
QString translateSelectedText(QString text) {
  QFile file("secret_api.txt"); // Open the file with api

  if (!file.open(QIODevice::ReadOnly)) {
    qWarning() << "Failed to open file!";
  }

  QTextStream in(&file);

  QString YANDEX_FOLDER_ID = "ajel9u66j5rghh6gm37d";
  QString YANDEX_API_KEY = in.readAll(); // сюда ключ

  QNetworkAccessManager manager;
  QNetworkRequest request;
  QUrl url("https://translate.api.cloud.yandex.net/translate/v2/translate");
  QJsonObject json;
  json["targetLanguageCode"] = "en";
  json["format"] = "PLAIN_TEXT";
  json["texts"] = QJsonArray::fromStringList({text});
  json["folderId"] = YANDEX_FOLDER_ID;

  request.setUrl(url);
  request.setRawHeader("Authorization",
                       QString("Api-Key %1").arg(YANDEX_API_KEY).toUtf8());
  request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

  QNetworkReply *reply = manager.post(request, QJsonDocument(json).toJson());
  QEventLoop loop;
  QObject::connect(reply, SIGNAL(finished()), &loop, SLOT(quit()));
  loop.exec();

  QByteArray response_data = reply->readAll();
  qDebug() << response_data;
  QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
  QJsonObject json_obj = json_doc.object();
  QJsonArray translations = json_obj.value("translations").toArray();
  QJsonObject first_translation = translations.first().toObject();
  return first_translation.value("text").toString();
}
} // namespace translate
