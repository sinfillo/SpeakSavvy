#include "../inc/readnowwidget.h"
#include "../ui/inc/ui_readnowwidget.h"



ReadNowWidget::ReadNowWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ReadNow)
{
    ui->setupUi(this);
    allBookText = "You haven't opened any books yet. Go to library and get started!";
    ui->currentBook->append(allBookText);
    ReadNowWidget::updateContextTextEdit("Click here to see in context");
    ui->currentBook->setReadOnly(true);
    ui->contextTextEdit->setReadOnly(true);
    ui->currentBook->viewport()->installEventFilter(this);
    ui->contextTextEdit->viewport()->installEventFilter(this);
    dbHandler = new DatabaseHandler;
    dbHandler->getBookInfoFromDB();
    this->setStyleSheet("QScrollBar { background-color: transparent; } QScrollBar::handle:vertical {  background: pink; border-radius: 5px; } QScrollBar::left-arrow:vertical, QScrollBar::right-arrow:vertical { border: none; background: none; color: none;} QScrollBar::add-line:vertical {border: none;background: none;} QScrollBar::sub-line:vertical {border: none;background: none;}");

    //connect(dbHandler, &DatabaseHandler::booksRead, this, &ReadNowWidget::updateReadNowWidget);
    //connect(this, &BookWidget::doubleClicked, this, &BookWidget::translateSelectedText);
}

bool ReadNowWidget::eventFilter(QObject *watched, QEvent *event)
{
    if ((watched == ui->currentBook || watched == ui->currentBook->viewport()) &&
        event->type() == QEvent::MouseButtonDblClick)
    {
        QMouseEvent *mouseEvent = static_cast<QMouseEvent*>(event);
        ReadNowWidget::checkSelectedText(mouseEvent);
    } else if ((watched == ui->contextTextEdit || watched == ui->contextTextEdit->viewport()))
    {
        QTextCursor cursor = ui->contextTextEdit->textCursor();
        cursor.clearSelection();
        cursor.movePosition(QTextCursor::NoMove);
        ui->contextTextEdit->setTextCursor(cursor);
        if (event->type() == QEvent::MouseButtonPress && detect_click_context) {
            ReadNowWidget::updateContextTextEdit(contextSentence, true);
            detect_click_context = false;
        }
    }
}

void ReadNowWidget::setCurrentBookId(int bookId)
{
    currentBookId = bookId;
    qDebug() << bookId;
    updateReadNowWidget();
}

ReadNowWidget::~ReadNowWidget()
{
    delete ui;
}

void ReadNowWidget::setEmail(QString email)
{
    this->email = email;
}

void ReadNowWidget::updateReadNowWidget()
{
    ReadNowWidget::updateContextTextEdit("Click here to see in context");
    detect_click_context = false;
    ui->currentBook->clear();
    allBookText = "You haven't opened any books yet. Go to library and get started!";
    if (currentBookId >= 0 && currentBookId < dbHandler->getBooks().size()) {
      allBookText = dbHandler->getBooks()[currentBookId].getBookText();
    }
    ui->currentBook->append(allBookText);
    ui->currentBook->moveCursor (QTextCursor::Start) ;
    ui->currentBook->ensureCursorVisible() ;
}

void ReadNowWidget::checkSelectedText(QMouseEvent *mouseEvent)
{
    // берем предложение-контекст
    ReadNowWidget::updateContextTextEdit("Click here to see in context");
    detect_click_context = true;
    QTextCursor textCursor = ui->currentBook->cursorForPosition(mouseEvent->pos());
    int cur_pos = textCursor.positionInBlock();
    QString left_part_sent = "";
    qDebug() << allBookText;
    while (cur_pos >= 0 && !isDelimiter(allBookText[cur_pos])) {
      left_part_sent += allBookText[cur_pos];
      --cur_pos;
    }
    while (!left_part_sent.isEmpty() && left_part_sent.back() == ' ') {
      left_part_sent.chop(1);
    }
    std::reverse(left_part_sent.begin(), left_part_sent.end());
    cur_pos = textCursor.positionInBlock() + 1;
    QString right_part_sent = "";
    while (cur_pos < allBookText.size() && !isDelimiter(allBookText[cur_pos])) {
      right_part_sent += allBookText[cur_pos];
      ++cur_pos;
    }
    if (cur_pos < allBookText.size() && isDelimiter(allBookText[cur_pos])) {
      right_part_sent += allBookText[cur_pos];
    }
    contextSentence = left_part_sent + right_part_sent;

    // берем слово
    textCursor = ui->currentBook->cursorForPosition(mouseEvent->pos());
    textCursor.select(QTextCursor::WordUnderCursor);
    ui->currentBook->setTextCursor(textCursor);
    QString word = textCursor.selectedText();
    currentWord = word;

    QString translation = translateText(word);

    QPixmap yandexPixmap(":/png/Yandex_Translate_icon.png");
    QIcon yandexButtonIcon(yandexPixmap);
    ui->translationWindow->setIcon(yandexButtonIcon);

    ui->translationWindow->setText(word.toLower() + " — " + translation.toLower());
}

void ReadNowWidget::updateContextTextEdit(QString text, bool need_translate)
{
  if (need_translate) {
    text = translateText(text);
  }
  ui->contextTextEdit->setText(text);
}

QString ReadNowWidget::translateText(const QString& text)
{
    QString YANDEX_FOLDER_ID = "b1gdvvrsofu7cdcuro7r";
    QString YANDEX_API_KEY = "AQVN1U-MaZdwjE0LDO33OkAYBC5-ntvdiIyhzzsg"; // сюда ключ
    QNetworkAccessManager manager;
    QNetworkRequest request;
    QUrl url("https://translate.api.cloud.yandex.net/translate/v2/translate");
    QJsonObject json;
    json["targetLanguageCode"] = "ru";
    json["format"] = "PLAIN_TEXT";
    json["texts"] = QJsonArray::fromStringList({text});
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
    QJsonObject first_translation = translations.first().toObject();
    return first_translation.value("text").toString();
}

bool ReadNowWidget::isDelimiter(QChar sym)
{
    return (sym == '.' || sym == '!' || sym == '?' || sym == ';');
}

void ReadNowWidget::on_pushButton_2_clicked()
{
  if (ui->translationWindow->text() != "") {
        dbHandler->sendPostRequestWithAWord(email, currentWord.toLower(), ui->translationWindow->text());
  }
}

void ReadNowWidget::on_learnButton_clicked()
{
  if (ui->translationWindow->text() != "") {
    QString originalString = ui->translationWindow->text();

    int firstSpace = originalString.indexOf(" ");
    int secondSpace = originalString.indexOf(" ", firstSpace + 1);

    QString result = originalString.mid(secondSpace + 1).toLower();
    auto msgbox = new QMessageBox(this);
    msgbox->setGeometry(850, 450, 200, 50);
    msgbox->setWindowTitle("Notification");
    msgbox->setText("Added!");
    msgbox->setStandardButtons(QMessageBox::NoButton);
    msgbox->open();
    auto timer2 = new QTimer(msgbox);
    QObject::connect(timer2, &QTimer::timeout, msgbox, &QMessageBox::deleteLater);
    //QObject::connect(timer2, &QTimer::timeout, this, &QuizWidget::selectNewWordAndUpdTimer);
    timer2->start(1000);
    qDebug() <<"WQEHFGVJKHIOIOJKNKNLBJJK " << result;
    dbHandler->sendPostRequestWithAWord(email, currentWord.toLower(), result);
  }
}


