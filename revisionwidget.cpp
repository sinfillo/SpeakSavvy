#include "revisionwidget.h"
#include "ui_revisionwidget.h"

RevisionWidget::RevisionWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::RevisionWidget)
{
    ui->setupUi(this);
}

RevisionWidget::RevisionWidget(QString username, QWidget *parent) : username(username), QWidget(parent)
    , ui(new Ui::RevisionWidget)
{
    ui->setupUi(this);
    currentWordIndx = 0;
    dbHandler = new DatabaseHandler;
    dbHandler->getWordsInfoFromDB(username);
    connect(dbHandler, &DatabaseHandler::wordsRead, this, &RevisionWidget::updateWords);

    QPixmap backPixmap(":/png/left-arrow.png");
    QIcon backButtonIcon(backPixmap);
    ui->backToMainButton->setIcon(backButtonIcon);

    QPixmap leftPixmap(":/png/left-arrow-black.png");
    QIcon leftButtonIcon(leftPixmap);
    ui->prevButton->setIcon(leftButtonIcon);

    QPixmap rightPixmap(":/png/right-arrow-black.png");
    QIcon rightButtonIcon(rightPixmap.scaledToWidth(50));
    ui->nextButton->setIcon(rightButtonIcon);

}

RevisionWidget::~RevisionWidget()
{
    delete ui;
}

void RevisionWidget::setUsername(QString username)
{
    this->username = username;
}

void RevisionWidget::setQuizFlag(bool flag)
{
    from_quiz = flag;
}

void RevisionWidget::on_prevButton_clicked()
{
    if (currentWordIndx > 0) {
        currentWordIndx--;
        ui->wordButton->setText(words[currentWordIndx].getWord());
        ui->translationButton->setText(words[currentWordIndx].getTranslation());
    } else {
        QMessageBox msgBox;
        msgBox.setText("But this is the first word...");
        msgBox.exec();
    }
}


void RevisionWidget::on_nextButton_clicked()
{
    if (currentWordIndx < words.size() - 1) {
        currentWordIndx++;
        ui->wordButton->setText(words[currentWordIndx].getWord());
        ui->translationButton->setText(words[currentWordIndx].getTranslation());
    } else {
        QMessageBox msgBox;
        msgBox.setText("That's all for today. You can add new words later!");
        msgBox.exec();
    }
}


void RevisionWidget::on_backToMainButton_clicked()
{
    emit endRevision(from_quiz);
}

void RevisionWidget::updateWords()
{
    words = dbHandler->getWords();
    qDebug() << "Слов у нас" << words.size();
    if (words.size() == 0) {
        ui->wordButton->setText("You haven't added any words yet");
        ui->translationButton->hide();
        ui->prevButton->hide();
        ui->nextButton->hide();
    } else {
        ui->wordButton->setText(words[currentWordIndx].getWord());
        ui->translationButton->setText(words[currentWordIndx].getTranslation());
    }
}

