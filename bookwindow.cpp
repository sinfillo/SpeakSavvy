#include "bookwindow.h"
#include "ui_bookwindow.h"

bookWindow::bookWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::bookWindow)
{
    ui->setupUi(this);
    createToolbar();

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
    ui->currentBook->append(text);
    ui->currentBook->setReadOnly(true);
    ui->translationWindow->setReadOnly(true);
    /*QString YANDEX_FOLDER_ID = "b1gdvvrsofu7cdcuro7r";
    QString YANDEX_API_KEY = "AQVN1j_UcUitK4SOBOVcQTEBuyytKdDKhVEBoxY5"; // сюда ключ
    QNetworkAccessManager manager;
    QNetworkRequest request;
    QUrl url("https://translate.api.cloud.yandex.net/translate/v2/translate");
    QJsonObject json;
    json["targetLanguageCode"] = "ru";
    json["format"] = "PLAIN_TEXT";
    json["texts"] = QJsonArray::fromStringList({"Hello"});
    json["folderId"] = YANDEX_FOLDER_ID;

    request.setUrl(url);
    request.setRawHeader("Authorization", QString("Api-Key %1").arg(YANDEX_API_KEY).toUtf8());
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    QNetworkReply* reply = manager.post(request, QJsonDocument(json).toJson());
    QEventLoop loop;
    QObject::connect(reply, SIGNAL(finished()), &loop, SLOT(quit()));
    loop.exec();

    QByteArray response_data = reply->readAll();
    qDebug() << response_data;
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonObject json_obj = json_doc.object();
    QJsonArray translations = json_obj.value("translations").toArray();
    qDebug() << translations;
    QJsonObject first_translation = translations.first().toObject();
    qDebug() << first_translation.value("text").toString();*/
}

void bookWindow::translateSelectedText() {
    QString YANDEX_FOLDER_ID = "b1gdvvrsofu7cdcuro7r";
    QString YANDEX_API_KEY = "AQVN1j_UcUitK4SOBOVcQTEBuyytKdDKhVEBoxY5"; // сюда ключ
    QNetworkAccessManager manager;
    QNetworkRequest request;
    QUrl url("https://translate.api.cloud.yandex.net/translate/v2/translate");
    QJsonObject json;
    json["targetLanguageCode"] = "en";
    json["format"] = "PLAIN_TEXT";
    json["texts"] = QJsonArray::fromStringList({ui->currentBook->textCursor().selectedText()});
    json["folderId"] = YANDEX_FOLDER_ID;

    request.setUrl(url);
    request.setRawHeader("Authorization", QString("Api-Key %1").arg(YANDEX_API_KEY).toUtf8());
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    QNetworkReply* reply = manager.post(request, QJsonDocument(json).toJson());
    QEventLoop loop;
    QObject::connect(reply, SIGNAL(finished()), &loop, SLOT(quit()));
    loop.exec();

    QByteArray response_data = reply->readAll();
    qDebug() << response_data;
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonObject json_obj = json_doc.object();
    QJsonArray translations = json_obj.value("translations").toArray();
    //qDebug() << translations;
    QJsonObject first_translation = translations.first().toObject();
    //qDebug() << first_translation.value("text").toString();
    ui->translationWindow->setText(first_translation.value("text").toString());
}


bookWindow::~bookWindow()
{
    delete ui;
}

void bookWindow::createToolbar()
{
    QToolBar *toolbar = addToolBar("Tools");

    QAction *actionLibrary = toolbar->addAction("Библиотека");
    connect(actionLibrary, &QAction::triggered, this, &bookWindow::showLibrary);

    QAction *actionCollection = toolbar->addAction("Коллекция");
    connect(actionCollection, &QAction::triggered, this, &bookWindow::showCollection);

    QAction *actionReadingNow = toolbar->addAction("Читаю сейчас");
    connect(actionReadingNow, &QAction::triggered, this, &bookWindow::onReadingNowClicked);

    QAction *actionDictionary = toolbar->addAction("Словарь");
    connect(actionDictionary, &QAction::triggered, this, &bookWindow::onDictionaryClicked);

    QAction *actionFlashcards = toolbar->addAction("Карточки");
    connect(actionFlashcards, &QAction::triggered, this, &bookWindow::onFlashcardsClicked);

    QAction *actionLogin = toolbar->addAction("Войти");
    connect(actionLogin, &QAction::triggered, this, &bookWindow::onLoginClicked);

}


void bookWindow::onLibraryClicked()
{

    setCentralWidget(libraryWidget);
    setWindowTitle("Библиотека");
}

void bookWindow::onTranslateButtonClicked()
{
    bookWindow::translateSelectedText();
}

void bookWindow::onCollectionClicked()
{

    setCentralWidget(collectionWidget);
    setWindowTitle("Коллекция");
}

void bookWindow::onReadingNowClicked()
{
    setCentralWidget(new CustomWidget("Читаю сейчас"));
    setWindowTitle("Читаю сейчас");
}

void bookWindow::onDictionaryClicked()
{
   // clearCentralWidget();
    setCentralWidget(new CustomWidget("Словарь"));
    setWindowTitle("Словарь");
}

void bookWindow::onFlashcardsClicked()
{
    //clearCentralWidget();
    setCentralWidget(new CustomWidget("Карточки"));
    setWindowTitle("Карточки");
}

void bookWindow::onLoginClicked()
{
    //clearCentralWidget();
    setCentralWidget(new CustomWidget("Войти"));
    setWindowTitle("Войти");
}


