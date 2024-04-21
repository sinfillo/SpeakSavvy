#ifndef WORDLEWINDOW_H
#define WORDLEWINDOW_H

#include "notificationwindow.h"
#include <QMainWindow>
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

QT_BEGIN_NAMESPACE
namespace Ui { class WordleWindow; }
QT_END_NAMESPACE

class WordleWindow : public QMainWindow
{
    Q_OBJECT

public:
    WordleWindow(QWidget *parent = nullptr);
    ~WordleWindow();


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
    Ui::WordleWindow *ui;
    bool isEndOfGame = false;
    QJsonObject curNums;
    QString wordToGuess = "";
    QStringList randWords;
    QStringList allWords;
    NotificationWindow *notWindow;
};
#endif // WORDLEWINDOW_H
