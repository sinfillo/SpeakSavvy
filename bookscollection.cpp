#include "bookscollection.h"
#include "ui_bookscollection.h"
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QPixmap>
#include <QLabel>
#include <QFont>
#include <QMessageBox>

BooksCollection::BooksCollection(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::BooksCollection)
{
    ui->setupUi(this);
    //dbHandler = new DatabaseHandler;
    //dbHandler->getBookInfoFromDB();
    //dbHandler->getCollectionFromDB(email);
    //connect(dbHandler, &DatabaseHandler::collectionRead, this, &BooksCollection::updateCollection);
}

BooksCollection::BooksCollection(QString email, QWidget *parent)
    : email(email), QWidget(parent)
    , ui(new Ui::BooksCollection)
{
    ui->setupUi(this);
    dbHandlerBooks = new DatabaseHandler;
    dbHandlerCollection = new DatabaseHandler;
    dbHandlerBooks->getBookInfoFromDB();
    connect(dbHandlerBooks, &DatabaseHandler::booksRead, this, &BooksCollection::getCollection);
    //connect(dbHandler, &DatabaseHandler::collectionRead, this, &BooksCollection::updateCollection);
}


BooksCollection::~BooksCollection()
{
    delete ui;
}

void BooksCollection::setEmail(QString email)
{
    this->email = email;
}

void BooksCollection::updateCollection()
{
    QGridLayout *layout = new QGridLayout(this);
    ui->setupUi(this);
    QList<QGridLayout*> books_layout;
    QList<Book> books = dbHandlerBooks->getBooks();
    QList<QPair<QString, int>> collection = dbHandlerCollection->getCollection();
    qDebug() << books.size();
    qDebug() << collection.size();
    for (int i = 0; i < collection.size(); i++) {
        int bookId = collection[i].second;
        qDebug() << collection[i].first;
        books_layout.append(new QGridLayout(this));
        QFont font("YuGothic", 20);
        QLabel *titleLabel = new QLabel("\"" + books[bookId].getName() + "\"", this);
        titleLabel->setFont(font);
        books_layout.at(i)->addWidget(titleLabel);
        QPushButton *readButton = new QPushButton("Read");
        readButton->setFont(font);
        QLabel *authorLabel = new QLabel( books[bookId].getAuthor(), this);
        authorLabel->setFont(font);
        books_layout.at(i)->addWidget(authorLabel);
        QLabel *genreLabel = new QLabel( books[bookId].getGenre(), this);
        genreLabel->setFont(font);
        readButton->setStyleSheet("border-radius: 15; border: 1px solid pink;");
        books_layout.at(i)->addWidget(genreLabel);
        books_layout.at(i)->addWidget(readButton);
        QObject::connect(readButton, &QPushButton::clicked, this, [=]() { emit signalToReadNow(i); });
        layout->addLayout(books_layout.at(i), i / 3, i % 3);
    }
    QWidget *my_widget = new QWidget;
    my_widget->setLayout(layout);
    QScrollArea* m_pQScrollArea = new QScrollArea;
    m_pQScrollArea->setWidget(my_widget);
    ui->verticalLayout->addWidget(m_pQScrollArea);

    this->setStyleSheet("QScrollBar { background-color: transparent; } QScrollBar::handle:horizontal {  background: pink; border-radius: 5px; } QScrollBar::left-arrow:horizontal, QScrollBar::right-arrow:horizontal { border: none; background: none; color: none;} QScrollBar::add-line:horizontal {border: none;background: none;} QScrollBar::sub-line:horizontal {border: none;background: none;}");
    emit layoutReady();

}

void BooksCollection::getCollection()
{
    dbHandlerCollection->getCollectionFromDB(email);
    connect(dbHandlerCollection, &DatabaseHandler::collectionRead, this, &BooksCollection::updateCollection);
}
