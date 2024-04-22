#ifndef REVISIONWIDGET_H
#define REVISIONWIDGET_H

#include <QWidget>
#include <QString>
#include <QMessageBox>
#include <QPalette>
#include "word.h"
#include "databasehandler.h"

namespace Ui {
class RevisionWidget;
}

class RevisionWidget : public QWidget
{
    Q_OBJECT

public:
    DatabaseHandler *dbHandler;
    explicit RevisionWidget(QWidget *parent = nullptr);
    RevisionWidget(QString username, QWidget *parent = nullptr);
    QList<Word> words;
    int currentWordIndx;
    ~RevisionWidget();
    void setUsername(QString username);

private slots:

    void on_prevButton_clicked();

    void on_nextButton_clicked();

    void on_backToMainButton_clicked();

    void updateWords();

signals:
    void endRevision();

private:
    Ui::RevisionWidget *ui;
    QString username;
};

#endif // REVISIONWIDGET_H
