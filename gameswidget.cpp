#include "gameswidget.h"
#include "ui_gameswidget.h"
#include <QDir>
#include <QFileDialog>
#include <QTextStream>
#include <QKeyEvent>
#include <QButtonGroup>

GamesWidget::GamesWidget(QWidget *parent)
    : QWidget(parent)
      , ui(new Ui::GamesWidget)
{
    ui->setupUi(this);

    connect(ui->Keyboard, &QButtonGroup::buttonClicked, this, &GamesWidget::keyClicked);

    gameStarted();
    notWindow = new NotificationWindow();

    this->installEventFilter(this);

    installEventFilter(this);
    setFocus();
}


void GamesWidget::on_howToPlayButton_clicked()
{
    ui->SynonymLabel->hide();
    ui->stackedWidget->setCurrentWidget(ui->HelpPage);
}


void GamesWidget::on_GameButton_clicked()
{
    ui->SynonymLabel->show();
    ui->stackedWidget->setCurrentWidget(ui->QuizPage);
}


void GamesWidget::on_StatsButton_clicked()
{
    ui->SynonymLabel->hide();
    ui->stackedWidget->setCurrentWidget(ui->StatsPage);
}

bool GamesWidget::eventFilter(QObject *obj, QEvent *event)
{
    if (event->type() == QEvent::KeyPress) {
      QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);
      if (!isEndOfGame && keyEvent->key() >= Qt::Key_A && keyEvent->key() <= Qt::Key_Z) {
        QString keyText = QKeySequence(keyEvent->key()).toString().toLower();
        foreach (QAbstractButton *button, ui->Keyboard->buttons()) {
          if (button->text().toLower() == keyText) {
            button->click();
            return true;
          }
        }
      } else if (keyEvent->key() == Qt::Key_Backspace) {
        on_BackespaceKey_clicked();
        return true;
      } else if (keyEvent->key() == Qt::Key_Enter || keyEvent->key() == Qt::Key_Return) {
        on_EnterKey_clicked();
        return true;
      }
    }
    return QObject::eventFilter(obj, event);
}

void GamesWidget::newGameStarted()
{
    std::vector<std::pair<QString, QString>> words = {
      {"apple", "fruit"},
      {"beach", "shore"},
      {"chair", "seat"},
      {"dance", "waltz"},
      {"eagle", "bird"},
      {"fiend", "demon"},
      {"ghost", "spirit"},
      {"horse", "steed"},
      {"ivory", "white"},
      {"joker", "clown"},
      {"knife", "blade"},
      {"light", "bright"},
      {"mouse", "rodent"},
      {"noise", "sound"},
      {"ocean", "sea"},
      {"pencil", "lead"},
      {"queen", "monarch"},
      {"river", "stream"},
      {"snake", "serpent"},
      {"tiger", "feline"},
      {"uncle", "relative"},
      {"voice", "sound"},
      {"water", "liquid"},
      {"xerox", "copy"},
      {"young", "juvenile"},
      {"zebra", "stripe"},
      {"adopt", "take"},
      {"blink", "wink"},
      {"cloud", "mist"},
      {"dream", "vision"},
      {"erase", "delete"},
      {"flirt", "woo"},
      {"grasp", "grip"},
      {"hasty", "quick"},
      {"image", "picture"},
      {"jolly", "merry"},
      {"kneel", "bow"},
      {"lasso", "rope"},
      {"medal", "award"},
      {"nasal", "nose"},
      {"optic", "eye"},
      {"plant", "flora"},
      {"quiet", "silent"},
      {"rapid", "fast"},
      {"scoop", "ladle"},
      {"toast", "bread"},
      {"unify", "merge"},
      {"valor", "bravery"},
      {"wrist", "arm"},
      {"yield", "give"}
    };
    std::pair<QString, QString> wordd =  words[rand() % words.size()];
    wordToGuess = wordd.first.toUpper();
    qDebug() << wordToGuess;
    ui->SynonymLabel->setText("Synonym to the word is: " + wordd.second);
}


void GamesWidget::getAllWords(QStringList &dictionary, QFile &file){
    file.open(QIODevice::ReadOnly);
    QByteArray words = file.readAll();
    dictionary = QString(words).split(" ");
    file.close();
}


void GamesWidget::formJson(QJsonObject &jsonObject, QFile &file){
    QString data;
    file.open(QIODevice::ReadOnly);
    data = file.readAll();
    file.close();
    QJsonDocument document = QJsonDocument::fromJson(data.toUtf8());
    jsonObject = document.object();
}


void GamesWidget::updJson(QFile &file, QJsonObject &jsonObject){
    file.open(QIODevice::WriteOnly | QIODevice::Truncate);
    file.write(QJsonDocument(jsonObject).toJson(QJsonDocument::Indented));
    file.close();
}

void GamesWidget::setProgressBar(QProgressBar *progressBar, int attempts, double winCount, const QString &bgColor, const QString &chunkColor) {
    if (attempts != 0 && winCount != 0) {
      int percentage = static_cast<int>((attempts / winCount) * 100);
      progressBar->setValue(percentage);
      progressBar->setFormat(QString("%1%").arg(static_cast<int>(percentage)));
    } else {
      progressBar->setValue(0);
      progressBar->setFormat("0%");
    }
    progressBar->setStyleSheet(QString("QProgressBar { background-color: %1; } QProgressBar::chunk { background-color: %2; }").arg(bgColor, chunkColor));
}


void GamesWidget::setStatistics(){
    int first = curNums["first"].toString().toInt();
    int second = curNums["second"].toString().toInt();
    int third = curNums["third"].toString().toInt();
    int fourth = curNums["fourth"].toString().toInt();
    int fifth = curNums["fifth"].toString().toInt();
    int sixth = curNums["sixth"].toString().toInt();
    int rounds = curNums["roundCnt"].toString().toInt();

    double winCount = curNums["winCnt"].toString().toDouble();
    int winRate = rounds ? curNums["winCnt"].toString().toDouble() / curNums["roundCnt"].toString().toDouble() * 100 : 0;

    ui->AllRoundsNum->setText(QString::number(rounds));
    ui->WinRoundsNum->setText(QString::number(winRate));

    setProgressBar(ui->firstPrBar, first, winCount, "#FFCC80", "#FF9800");
    setProgressBar(ui->secondPrBar, second, winCount, "#81D4FA", "#03A9F4");
    setProgressBar(ui->thirdPrBar, third, winCount, "#A5D6A7", "#388E3C");
    setProgressBar(ui->fourthPrBar, fourth, winCount, "#FFE082", "#FFB300");
    setProgressBar(ui->fifthPrBar, fifth, winCount, "#90CAF9", "#1976D2");
    setProgressBar(ui->sixthPrBar, sixth, winCount, "#F48FB1", "#D81B60");
}

QList<QLabel *> &GamesWidget::filterColoredLabels(QList<QLabel *> &labelList) {
    int index = 0;
    while (index < labelList.length()) {
      if (labelList[index]->styleSheet().indexOf("background-color") != -1) {
        labelList.remove(index);
        index = 0;
        continue;
      }
      index++;
    }
    return labelList;
}

int GamesWidget::findEmptyLabelIndex(QList<QLabel *> &labelList){
    int emptyIndex = 0;
    labelList = filterColoredLabels(labelList);

    for (auto& label : labelList) {
      if(label->text().isEmpty()) {
        break;
      }
      emptyIndex++;
    }

    if (emptyIndex >= labelList.size() || labelList.isEmpty()){
      return -1;
    }

    return emptyIndex;
}



void GamesWidget::gameStarted(){
    this->installEventFilter(this);

    setFocus();
    ui->stackedWidget->setCurrentWidget(ui->QuizPage);

    QFile alldict(":/txt/resources/Dictionary.txt");
    QFile toGuess(":/txt/resources/Dictionary.txt");
    QFile startJson(":/json/resources/statistics.json");
    QString pathRes("/tmp/");
    QDir tmpDir;
    if (!tmpDir.exists(pathRes)){
      tmpDir.mkpath(pathRes);
    }
    QFile statisticsFile = (pathRes + "statistics.json");
    if(!statisticsFile.exists()){
      QString zeroStats;
      startJson.open(QIODevice::ReadOnly);
      zeroStats = startJson.readAll();
      statisticsFile.open(QIODevice::WriteOnly);
      QTextStream out(&statisticsFile);
      out << zeroStats;
      statisticsFile.close();
    }

    getAllWords(allWords, alldict);
    getAllWords(randWords, toGuess);
    formJson(curNums, statisticsFile);

    setStatistics();
    newGameStarted();
}


void GamesWidget::gameEnded(){
    QFile statisticsFile("/tmp/statistics.json");
    isEndOfGame = true;

    QTimer::singleShot(3500, [this](){
      isEndOfGame = false;
      QList quizLabels(ui->LettersWidget->findChildren<QLabel *>());

      for (auto& label : quizLabels){
        label->clear();
        label->setStyleSheet("");
      }

      newGameStarted();
    });

    updJson(statisticsFile, curNums);
    setStatistics();
}


bool lambdaLess(const QLabel *one, const QLabel *other){
    return one->objectName() < other->objectName();
}


void GamesWidget::updatePlayerStats(int remainingGuesses) {
  // Update player statistics based on the number of remaining guesses
    QString statKey;
    switch (remainingGuesses) {
      case 25: statKey = "first"; break;
      case 20: statKey = "second"; break;
      case 15: statKey = "third"; break;
      case 10: statKey = "fourth"; break;
      case 5: statKey = "fifth"; break;
      case 0: statKey = "sixth"; break;
    }
    if (!statKey.isEmpty()) {
      curNums[statKey] = QString::number(curNums[statKey].toString().toInt() + 1);
    }
}

void GamesWidget::handleWinEvent() {
    QString winMessage = "You won! The word was " + wordToGuess;
    notWindow->setMessageText(winMessage);
    notWindow->show();

    QList<QLabel*> labels = ui->LettersWidget->findChildren<QLabel*>();
    std::sort(labels.begin(), labels.end(), lambdaLess);
    labels = filterColoredLabels(labels);


    int remainingGuesses = labels.length();
    updatePlayerStats(remainingGuesses);

    curNums["roundCnt"] = QString::number(curNums["roundCnt"].toString().toInt() + 1);
    curNums["winCnt"] = QString::number(curNums["winCnt"].toString().toInt() + 1);

    gameEnded();
}

void GamesWidget::handleLoseEvent(){
    notWindow->setMessageText("Ooops.. word was " + wordToGuess);
    notWindow->show();

    curNums["roundCnt"] = QString::number(curNums["roundCnt"].toString().toInt() + 1);


    gameEnded();
}


void GamesWidget::keyClicked(QAbstractButton *key){
    if(isEndOfGame){
      return;
    }

    QList labels(ui->LettersWidget->findChildren<QLabel *>());
    std::sort(labels.begin(), labels.end(), lambdaLess);
    int ind = findEmptyLabelIndex(labels);
    if(/*ind == -1 ||*/ ind % 5 == 0 && ind != 0) {
      return;
    }
    labels[ind == -1 ? labels.size() - 1 : ind]->setText(key->text());
    labels[ind == -1 ? labels.size() - 1 : ind]->setStyleSheet("border: 2px solid black;\n");
}


void GamesWidget::on_BackespaceKey_clicked(){
    if(isEndOfGame) {
      return;
    }
    qDebug() << "BACKSPACE";
    QList lab(ui->LettersWidget->findChildren<QLabel *>());
    std::sort(lab.begin(), lab.end(), lambdaLess);
    int ind = findEmptyLabelIndex(lab);
    if(ind == 0){
      return;
    }
    lab[(ind == -1 ? lab.size() : ind) - 1]->setText("");
    lab[(ind == -1 ? lab.size() : ind) - 1]->setStyleSheet("");
}


void GamesWidget::on_EnterKey_clicked()
{
    if(isEndOfGame) {
      return;
    }
    QString curGuess;
    QString answer = wordToGuess;
    QList labels(ui->LettersWidget->findChildren<QLabel *>());
    std::sort(labels.begin(), labels.end(), lambdaLess);

    labels = filterColoredLabels(labels);

    for (int i = 0; i < 5; i++) {
      curGuess += labels[i]->text();
    }

    if(allWords.indexOf(curGuess) == -1) {
      if(curGuess.length() == 5){
        notWindow->setMessageText("It's not a word");
        notWindow->show();
        return;
      }
      notWindow->setMessageText("Should be 5 letters");
      notWindow->show();
      return;
    }

    for (int i = 0; i < 5; i++) {
      if(labels[i]->text() == wordToGuess[i]) {
        labels[i]->setStyleSheet("background-color: #ff007f;\ncolor: white;\nborder-style:hidden;\n");
        answer[i] = '0';
      }
    }

    for (int i = 0; i < 5; i++) {
      if(!(labels[i]->styleSheet().indexOf("background-color") != -1)) {
        if(wordToGuess.indexOf(labels[i]->text()) != -1 && answer.indexOf(labels[i]->text()) != -1) {
          answer[wordToGuess.indexOf(labels[i]->text())] = '0';
          labels[i]->setStyleSheet("background-color: #98fb98;\ncolor: white;\nborder-style:hidden;\n");
        }
        else {
          labels[i]->setStyleSheet("background-color: #66ccff;\ncolor: white;\nborder-style:hidden;\n");
        }
      }
    }

    labels = filterColoredLabels(labels);

    if (curGuess == wordToGuess){
      handleWinEvent();
    } else if (labels.isEmpty()){
      handleLoseEvent();
    }
}


GamesWidget::~GamesWidget()
{
    delete ui;
}
