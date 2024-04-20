#include "librarywidget.h"
#include "ui_librarywidget.h"
#include "bookwidget.h"
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QPixmap>
#include <QLabel>

LibraryWidget::LibraryWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Library)
{
    ui->setupUi(this);
    dbHandler = new DatabaseHandler;
    dbHandler->getBookInfoFromDB();
    //dbHandler->sendPostRequestWithAWord("jbkej", "jfkn;nk");
    connect(dbHandler, &DatabaseHandler::booksRead, this, &LibraryWidget::updateLibrary);
}

LibraryWidget::LibraryWidget(QList<Book> books, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Library)
{
    dbHandler = new DatabaseHandler;
    connect(dbHandler, &DatabaseHandler::booksRead, this, &LibraryWidget::updateLibrary);
}

void LibraryWidget::updateLibrary()
{
    QGridLayout *layout = new QGridLayout(this);
    ui->setupUi(this);
    QList<QGridLayout*> books_layout;
    //dbHandler.getBookInfoFromDB();
    QList<Book> books = dbHandler->getBooks();
    qDebug() << books.size();
    for (size_t i = 0; i < books.size(); ++i) {
        QVBoxLayout *bookLayout = new QVBoxLayout;
        QLabel *nameLabel = new QLabel(books[i].getName());
        books_layout.append(new QGridLayout(this));


        /*QNetworkAccessManager* networkManager = new QNetworkAccessManager(this);
        QNetworkRequest request(QUrl(books[i].getBookCover()));
        QNetworkReply* reply = networkManager->get(request);

        // Обработка ответа на запрос
        connect(reply, &QNetworkReply::finished, [=]() {
            if (reply->error() == QNetworkReply::NoError) {
                QByteArray imageData = reply->readAll();
                QPixmap pixmap;
                pixmap.loadFromData(imageData);
                //pixmap.scaledToHeight(this->height(), Qt::SmoothTransformation);
                //pixmap.scaledToWidth(this->width(), Qt::SmoothTransformation);
                // Отображение пиксмапа в QLabel
                QLabel* bookCoverLabel = new QLabel(this);
                bookCoverLabel->setPixmap(pixmap);
                //int labelWidth = pixmap.width();
                //int labelHeight = pixmap.height();
                //bookCoverLabel->setFixedSize(130, 150);
                bookCoverLabel->setScaledContents(true);
                books_layout.at(i)->addWidget(bookCoverLabel);
            } else {
                qDebug() << "Error while downloading image: " << reply->errorString();
            }

            reply->deleteLater(); // Очистка ресурсов после завершения обработки ответа
        });*/
        /*bookCoverLabel->setPixmap(books[i].getBookCover());
        int labelWidth = books[i].getBookCover().width();
        int labelHeight = books[i].getBookCover().height();
        bookCoverLabel->setFixedSize(labelWidth/3, labelHeight/3);
        books_layout.at(i)->addWidget(bookCoverLabel);*/
        books_layout.at(i)->addWidget(new QLabel("Title: " + books[i].getName(), this));
        QPushButton *readButton = new QPushButton("Read");
        books_layout.at(i)->addWidget(new QLabel("Author: " + books[i].getAuthor(), this));
        books_layout.at(i)->addWidget(new QLabel("Genre: " + books[i].getGenre(), this));
        books_layout.at(i)->addWidget(readButton);
        QObject::connect(readButton, &QPushButton::clicked, this, [=]() { emit signalToReadNow(i); });
        layout->addLayout(books_layout.at(i), i / 3, i % 3);
    }
    QWidget *my_widget = new QWidget;
    my_widget->setLayout(layout);
    QScrollArea* m_pQScrollArea = new QScrollArea;
    m_pQScrollArea->setWidget(my_widget);
    ui->verticalLayout->addWidget(m_pQScrollArea);
}



LibraryWidget::~LibraryWidget()
{
    delete ui;
}
