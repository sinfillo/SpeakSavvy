#include "readnowwidget.h"
#include "ui_readnowwidget.h"



ReadNowWidget::ReadNowWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ReadNow)
{
    ui->setupUi(this);
    const char* text = "Я ненавижу свет\n"
                       "Однообразных звезд.\n"
                       "Здравствуй, мой давний бред, —\n"
                       "Башни стрельчатой рост!\n"
                       "\n"
                       "Кружевом камень будь\n"
                       "И паутиной стань:\n"
                       "Неба пустую грудь\n"
                       "Тонкой иглою рань.\n"
                       "\n"
                       "Будет и мой черед —\n"
                       "Чую размах крыла.\n"
                       "Так — но куда уйдет\n"
                       "Мысли живой стрела?\n"
                       "\n"
                       "Или свой путь и срок\n"
                       "Я, исчерпав, вернусь:\n"
                       "Там — я любить не мог,\n"
                       "Здесь — я любить боюсь…\n"
                       "Я ненавижу свет\n"
                       "Однообразных звезд.\n"
                       "Здравствуй, мой давний бред, —\n"
                       "Башни стрельчатой рост!\n"
                       "\n"
                       "Кружевом камень будь\n"
                       "И паутиной стань:\n"
                       "Неба пустую грудь\n"
                       "Тонкой иглою рань.\n"
                       "\n"
                       "Будет и мой черед —\n"
                       "Чую размах крыла.\n"
                       "Так — но куда уйдет\n"
                       "Мысли живой стрела?\n"
                       "\n"
                       "Или свой путь и срок\n"
                       "Я, исчерпав, вернусь:\n"
                       "Там — я любить не мог,\n"
                       "Здесь — я любить боюсь…";
    ui->currentBook->append("Nothing");
    ui->currentBook->setReadOnly(true);
    ui->translationWindow->setReadOnly(true);
    ui->currentBook->viewport()->installEventFilter(this);
    dbHandler = new DatabaseHandler;
    dbHandler->getBookInfoFromDB();
    //connect(dbHandler, &DatabaseHandler::booksRead, this, &ReadNowWidget::updateReadNowWidget);
    //connect(this, &BookWidget::doubleClicked, this, &BookWidget::translateSelectedText);
}

bool ReadNowWidget::eventFilter(QObject *watched, QEvent *event)
{
    if ((watched == ui->currentBook || watched == ui->currentBook->viewport()) &&
        event->type() == QEvent::MouseButtonDblClick)
    {
        QMouseEvent *mouseEvent = static_cast<QMouseEvent*>(event);
        ReadNowWidget::translateSelectedText(mouseEvent);
    }
}

void ReadNowWidget::setCurrentBookId(int bookId)
{
    currentBookId = bookId;
    updateReadNowWidget();
}

ReadNowWidget::~ReadNowWidget()
{
    delete ui;
}

void ReadNowWidget::updateReadNowWidget()
{
    ui->currentBook->clear();
    qDebug() << currentBookId;
    if (currentBookId >= 0 && currentBookId < dbHandler->getBooks().size()) {
        ui->currentBook->append(dbHandler->getBooks()[currentBookId].getBookText());
    } else {
        ui->currentBook->append("You haven't opened any books yet. Go to library and get started!");
    }
}

void ReadNowWidget::translateSelectedText(QMouseEvent *mouseEvent)
{
    QTextCursor textCursor = ui->currentBook->cursorForPosition(mouseEvent->pos());
    textCursor.select(QTextCursor::WordUnderCursor);
    ui->currentBook->setTextCursor(textCursor);
    QString word = textCursor.selectedText();

    QString YANDEX_FOLDER_ID = "b1gdvvrsofu7cdcuro7r";
    QString YANDEX_API_KEY = "AQVN1U-MaZdwjE0LDO33OkAYBC5-ntvdiIyhzzsg"; // сюда ключ
    QNetworkAccessManager manager;
    QNetworkRequest request;
    QUrl url("https://translate.api.cloud.yandex.net/translate/v2/translate");
    QJsonObject json;
    json["targetLanguageCode"] = "ru";
    json["format"] = "PLAIN_TEXT";
    json["texts"] = QJsonArray::fromStringList({word});
    json["folderId"] = YANDEX_FOLDER_ID;

    request.setUrl(url);
    request.setRawHeader("Authorization", QString("Api-Key %1").arg(YANDEX_API_KEY).toUtf8());
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    QNetworkReply* reply = manager.post(request, QJsonDocument(json).toJson());
    QEventLoop loop;
    QObject::connect(reply, SIGNAL(finished()), &loop, SLOT(quit()));
    loop.exec();

    QByteArray response_data = reply->readAll();
    //qDebug() << response_data;
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonObject json_obj = json_doc.object();
    QJsonArray translations = json_obj.value("translations").toArray();
    QJsonObject first_translation = translations.first().toObject();
    ui->translationWindow->setText(first_translation.value("text").toString());
    //QMessageBox msgBox;
    //msgBox.setText(first_translation.value("text").toString());
    //msgBox.exec();
}
