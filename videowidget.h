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
#include <QFile>
#include <QTextStream>
#include <QStringList>
#include <algorithm>
#include <random>
#include "subtitleitem.h"

namespace Ui {
class VideoWidget;
}

class VideoWidget : public QWidget
{
    Q_OBJECT

public:
    explicit VideoWidget(QWidget *parent = nullptr);
    ~VideoWidget();
    bool eventFilter(QObject *watched, QEvent *event);
private slots:
    void on_horizontalSlider_valueChanged(int value);
    void durationChanged(qint64 durationTime);
    void getSubtitleText(qint64 playTime);
    void on_nextVideoButton_clicked();
    void on_prevVideoButton_clicked();
public slots:
    void stopVideo(int kek);

private:
    Ui::VideoWidget *ui;
    QMediaPlayer *player;
    QVideoWidget *video;
    QAudioOutput *audio;

    size_t cnt_video = 2;
    double prev_start_time = -1;
    bool is_video_stop = false;
    qint64 max_duration;
    std::vector<size_t> perm;
    std::vector<QString> path_files_video;
    std::vector<QString> path_files_subtitles;
    QString prev_file_path = "";
    std::vector<SubtitleItem*> sub;
    size_t cur_index_perm = 0;
    bool is_last_video = false;
    bool stop_video_another_widget = true;

    void translateSelectedText(QMouseEvent *mouseEvent);
    void readSubtitleFile(QString directory);
    void gen_permutatuon(std::vector<size_t>& perm);
    void updateVideoAndSlider();
    void updateDuration(qint64 durationTime);
    void turnBackVideo();
    void turnForwardVideo();
    void stopOrPlayVideo();

};

#endif // VIDEOWIDGET_H
