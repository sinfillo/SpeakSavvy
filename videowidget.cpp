#include "videowidget.h"
#include "ui_videowidget.h"

VideoWidget::VideoWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::VideoWidget)
{
    perm.resize(cnt_video);
    perm[0] = 0;
    perm[1] = 1;
    //auto rng = std::default_random_engine {};
    gen_permutatuon(perm);

    path_files_video.resize(cnt_video);
    path_files_subtitles.resize(cnt_video);
    path_files_video[0] = "lolvideo.mp4";
    path_files_subtitles[0] = "lolsubtitles.srt";
    path_files_video[1] = "example2.mp4";
    path_files_subtitles[1] = "example2.srt";
    prev_file_path = "";

    QShortcut *shortcut_space = new QShortcut(QKeySequence(Qt::Key_Space), this);
    QShortcut *shortcut_left = new QShortcut(QKeySequence(Qt::Key_Left), this);
    QShortcut *shortcut_right = new QShortcut(QKeySequence(Qt::Key_Right), this);


    ui->setupUi(this);
    player = new QMediaPlayer();
    ui->textEdit->setReadOnly(true);
    ui->textEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->textEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->translatedText->setReadOnly(true);
    ui->translatedText->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->translatedText->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->textEdit->viewport()->installEventFilter(this);
    ui->groupBox->installEventFilter(this);
    ui->groupBox->setFocus();
    ui->nextVideoButton->setIcon(style()->standardIcon(QStyle::SP_MediaSkipForward));
    ui->prevVideoButton->setIcon(style()->standardIcon(QStyle::SP_MediaSkipBackward));
    ui->prevVideoButton->setEnabled(false);
    connect(player, &QMediaPlayer::positionChanged, this, &VideoWidget::getSubtitleText);
    connect(player, &QMediaPlayer::durationChanged, this, &VideoWidget::durationChanged);
    connect(shortcut_space, &QShortcut::activated, this, &VideoWidget::stopOrPlayVideo);
    connect(shortcut_left, &QShortcut::activated, this, &VideoWidget::turnBackVideo);
    connect(shortcut_right, &QShortcut::activated, this, &VideoWidget::turnForwardVideo);

    video = new QVideoWidget();
    video->setGeometry(5, 5, ui->groupBox->width() - 10, ui->groupBox->height() - 10);
    audio = new QAudioOutput();
    readSubtitleFile(path_files_subtitles[perm[cur_index_perm]]);
    video->setParent(ui->groupBox);
    player->setVideoOutput(video);
    player->setAudioOutput(audio);
    player->setSource(QUrl(path_files_video[perm[cur_index_perm]]));
    video->setVisible(true);
    ui->horizontalSlider->setRange(0, player->duration());
    max_duration = player->duration() / 1000;
    video->show();

}

VideoWidget::~VideoWidget()
{
    delete ui;
}



void VideoWidget::stopOrPlayVideo()
{
    if (is_video_stop) {
        player->play();
    } else {
        player->pause();
    }
    is_video_stop = !is_video_stop;
}

void VideoWidget::updateDuration(qint64 durationTime)
{
    if (durationTime || max_duration) {
        QTime cur_time((durationTime / 3600)% 60, (durationTime / 60) % 60, durationTime % 60, (durationTime * 1000) % 1000);
        QTime total_time((max_duration / 3600)% 60, (max_duration / 60) % 60, max_duration % 60, (max_duration * 1000) % 1000);
        QString format = "mm:ss";
        if (max_duration > 3600) {
            format = "hh:mm:ss";
        }
        ui->currentTimeLabel->setText(cur_time.toString(format));
        ui->totalTimeLabel->setText(total_time.toString(format));
    }
}

void VideoWidget::turnBackVideo()
{
    ui->horizontalSlider->setValue(qMax(0, ui->horizontalSlider->value() - 10));
    player->setPosition(ui->horizontalSlider->value() * 1000);
}

void VideoWidget::turnForwardVideo()
{
    ui->horizontalSlider->setValue(qMin(max_duration, ui->horizontalSlider->value() + 10));
    player->setPosition(ui->horizontalSlider->value() * 1000);
}

void VideoWidget::updateVideoAndSlider()
{
    qDebug() << "ahahahah";
    ui->textEdit->clear();
    ui->translatedText->clear();
    if (is_last_video) {
        qDebug() << "last video";
        player->setPosition(0);
        player->pause();
    } else {
        if (prev_file_path != "") {
            qDebug() << prev_file_path;
            if (prev_file_path == path_files_video[perm[cur_index_perm]]) {
                player->setPosition(0);
                player->play();
            } else {
                qDebug() << "i am here";
                video = new QVideoWidget();
                video->setGeometry(5, 5, ui->groupBox->width() - 10, ui->groupBox->height() - 10);
                audio = new QAudioOutput();
                readSubtitleFile(path_files_subtitles[perm[cur_index_perm]]);
                video->setParent(ui->groupBox);
                player->setVideoOutput(video);
                player->setAudioOutput(audio);
                player->setSource(QUrl(path_files_video[perm[cur_index_perm]]));
                video->setVisible(true);
                ui->horizontalSlider->setRange(0, player->duration());
                max_duration = player->duration() / 1000;
                video->show();
                player->play();
            }
        } else {
            video = new QVideoWidget();
            video->setGeometry(5, 5, ui->groupBox->width() - 10, ui->groupBox->height() - 10);
            audio = new QAudioOutput();
            readSubtitleFile(path_files_subtitles[perm[cur_index_perm]]);
            video->setParent(ui->groupBox);
            player->setVideoOutput(video);
            player->setAudioOutput(audio);
            player->setSource(QUrl(path_files_video[perm[cur_index_perm]]));
            video->setVisible(true);
            ui->horizontalSlider->setRange(0, player->duration());
            max_duration = player->duration() / 1000;
            video->show();
            player->play();
        }
    }
}

void VideoWidget::gen_permutatuon(std::vector<size_t> &perm) {
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(perm.begin(), perm.end(), g);
}

void VideoWidget::getSubtitleText(qint64 playTime)
{
    //еще сюда заходим когда нужно поменять ползунок
    if (!ui->horizontalSlider->isSliderDown()) {
        ui->horizontalSlider->setValue(playTime / 1000);
    }
    updateDuration(playTime / 1000);
    for (SubtitleItem* element : sub) {
        double startTime = element->getStartTime();
        double endTime = element->getEndTime();
        if( (startTime <= playTime) && (playTime <= endTime)) {
            if (prev_start_time == -1 || prev_start_time != startTime) {
                ui->textEdit->setText(QString::fromStdString(element->getText()));
                prev_start_time = startTime;
            }
            return;
        }
    }
    ui->textEdit->append(QString::fromStdString(""));
    return;
}

void VideoWidget::readSubtitleFile(QString directory)
{
    if(!isFileExist(directory.toStdString())) {
        qDebug() << "file does not exist";
        return;
    }
    SubtitleParserFactory *subParserFactory = new SubtitleParserFactory(directory.toStdString());
    SubtitleParser *parser = subParserFactory->getParser();

    sub = parser->getSubtitles();
}

bool VideoWidget::isFileExist(const std::string &temp)
{
    if (FILE *file = fopen(temp.c_str(), "r")) {
        fclose(file);
        return true;
    } else {
        return false;
    }
}

bool VideoWidget::eventFilter(QObject *watched, QEvent *event)
{
    if ((watched == ui->textEdit || watched == ui->textEdit->viewport()) &&
        event->type() == QEvent::MouseButtonDblClick)
    {
        QMouseEvent *mouseEvent = static_cast<QMouseEvent*>(event);
        VideoWidget::translateSelectedText(mouseEvent);
        return true;
    }
    if (watched == ui->groupBox && event->type() == QEvent::MouseButtonPress)
    {
        VideoWidget::stopOrPlayVideo();
        return true;
    }
    return false;
}

void VideoWidget::translateSelectedText(QMouseEvent *mouseEvent)
{
    QTextCursor textCursor = ui->textEdit->cursorForPosition(mouseEvent->pos());
    textCursor.select(QTextCursor::WordUnderCursor);
    ui->textEdit->setTextCursor(textCursor);
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
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonObject json_obj = json_doc.object();
    QJsonArray translations = json_obj.value("translations").toArray();
    QJsonObject first_translation = translations.first().toObject();
    ui->translatedText->clear();
    ui->translatedText->append(first_translation.value("text").toString());
}



void VideoWidget::on_horizontalSlider_valueChanged(int value)
{
    player->setPosition(value * 1000);
}

void VideoWidget::durationChanged(qint64 durationTime)
{
    max_duration = durationTime / 1000;
    ui->horizontalSlider->setMaximum(max_duration);
    qDebug() << max_duration;
}


void VideoWidget::on_nextVideoButton_clicked() {
    ui->prevVideoButton->setEnabled(true);
    if (cur_index_perm + 1 == cnt_video) {
        is_last_video = true;
        updateVideoAndSlider();
        QMessageBox msgBox;
        msgBox.setText("На сегодня все!");
        msgBox.exec();
    } else {
        ++cur_index_perm;
        updateVideoAndSlider();
    }
}


void VideoWidget::on_prevVideoButton_clicked()
{
    is_last_video = false;
    if (cur_index_perm - 1 == 0) {
        ui->prevVideoButton->setEnabled(false);
    }
    --cur_index_perm;
    updateVideoAndSlider();
}

void VideoWidget::stopVideo(int kek)
{
    qDebug() << kek;
    player->setPosition(0);
    if (kek == 4) {
        prev_file_path = path_files_video[perm[cur_index_perm]];
        gen_permutatuon(perm);
        cur_index_perm = 0;
        ui->prevVideoButton->setEnabled(false);
        updateVideoAndSlider();
    } else {
        player->stop();
    }
    prev_file_path = "";
}

