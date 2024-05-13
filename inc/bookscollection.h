#ifndef BOOKSCOLLECTION_H
#define BOOKSCOLLECTION_H

#include <QWidget>
#include <QListView>
#include <QPushButton>
#include <QLabel>
#include <QGridLayout>
#include <QScrollArea>
#include "databasehandler.h"

namespace Ui {
class BooksCollection;
}

class BooksCollection : public QWidget
{
    Q_OBJECT

public:
    explicit BooksCollection(QWidget *parent = nullptr);
    BooksCollection(QString email, QWidget *parent = nullptr);
    ~BooksCollection();
    void setEmail(QString email);


private slots:
    void updateCollection();
    void getCollection();


private:
    Ui::BooksCollection *ui;
    DatabaseHandler *dbHandlerBooks;
    DatabaseHandler *dbHandlerCollection;
    QString email;
    QList<Book> books;
    QList<QPair<QString, int>> collection;

signals:
    void layoutReady();
    void signalToReadNow(int bookId);
};

#endif // BOOKSCOLLECTION_H
