#ifndef VIDEOWIDGET_H
#define VIDEOWIDGET_H


#include <QWidget>
#include <QFileDialog>
#include <QtMultimedia>
#include <QtMultimediaWidgets>
#include <QtCore>
#include <QtGui>
#include <QtWidgets>
#include <QVector>
#include <QString>
#include <algorithm>
#include <random>
#include "subtitlesparser.h"

namespace Ui {
class VideoWidget;
}

class VideoWidget : public QWidget
{
    Q_OBJECT

public:
    explicit VideoWidget(QWidget *parent = nullptr);
    ~VideoWidget();
    std::vector<SubtitleItem*> sub;
    void readSubtitleFile(QString directory);
    bool isFileExist(const std::string& temp);
    bool eventFilter(QObject *watched, QEvent *event);
    void translateSelectedText(QMouseEvent *mouseEvent);
private slots:
    void on_horizontalSlider_valueChanged(int value);
    void durationChanged(qint64 durationTime);
    void getSubtitleText(qint64 playTime);

    void on_nextVideoButton_clicked();

    void on_prevVideoButton_clicked();
public slots:
    void stopVideo(int kek);

private:
    size_t cnt_video = 2;
    Ui::VideoWidget *ui;
    QMediaPlayer *player;
    QVideoWidget *video;
    QAudioOutput *audio;
    double prev_start_time = -1;
    bool is_video_stop = false;
    void stopOrPlayVideo();
    qint64 max_duration;
    void updateDuration(qint64 durationTime);
    void turnBackVideo();
    void turnForwardVideo();
    std::vector<size_t> perm;
    std::vector<QString> path_files_video;
    std::vector<QString> path_files_subtitles;
    size_t cur_index_perm = 0;
    void updateVideoAndSlider();
    bool is_last_video = false;
    bool stop_video_another_widget = true;
    void gen_permutatuon(std::vector<size_t>& perm);
    QString prev_file_path = "";

};

#endif // VIDEOWIDGET_H
