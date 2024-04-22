#ifndef GAMESWIDGET_H
#define GAMESWIDGET_H

#include "notificationwindow.h"
#include <QWidget>
#include <QAbstractButton>
#include <QLabel>
#include <QFile>
#include <QJsonObject>
#include <QJsonDocument>
#include <QTimer>
#include <QProgressBar>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>

namespace Ui
{
class GamesWidget;
}

class GamesWidget : public QWidget
{
    Q_OBJECT

public:
    GamesWidget(QWidget *parent = nullptr);
    ~GamesWidget();


public slots:
    void keyClicked(QAbstractButton *key);

private slots:
    bool eventFilter(QObject *obj, QEvent *event);

    void on_EnterKey_clicked();
    void on_howToPlayButton_clicked();
    void on_GameButton_clicked();
    void on_StatsButton_clicked();
    void on_BackespaceKey_clicked();

    void getAllWords(QStringList &dictionary, QFile &file);
    void newGameStarted();
    void formJson(QJsonObject &jsonObject, QFile &file);
    void setStatistics();
    void setProgressBar(QProgressBar *progressBar, int attempts, double winCount, const QString &bgColor, const QString &chunkColor);
    void updJson(QFile &file, QJsonObject &jsonObject);
    QList<QLabel *>& filterColoredLabels(QList<QLabel *> &labelList);
    void gameStarted();
    void gameEnded();
    void handleWinEvent();
    void handleLoseEvent();
    int findEmptyLabelIndex(QList<QLabel *> &labelList);
    void updatePlayerStats(int remainingGuesses);

private:
    //Ui::WordleWindow *ui;
    Ui::GamesWidget *ui;
    bool isEndOfGame = false;
    QJsonObject curNums;
    QString wordToGuess = "";
    QStringList randWords;
    QStringList allWords;
    NotificationWindow *notWindow;
};

#endif // GAMESWIDGET_H
