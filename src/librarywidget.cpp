#include "../inc/librarywidget.h"
#include "../ui/inc/ui_librarywidget.h"
#include "../inc/bookwidget.h"
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QPixmap>
#include <QLabel>
#include <QFont>
#include <QMessageBox>

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
    QList<Book> books = dbHandler->getBooks();
    qDebug() << books.size();
    for (size_t i = 0; i < books.size(); ++i) {
        books_layout.append(new QGridLayout(this));
        QFont font("YuGothic", 20);
        QLabel *titleLabel = new QLabel("\"" + books[i].getName() + "\"", this);
        QString title = books[i].getName();
        titleLabel->setFont(font);
        books_layout.at(i)->addWidget(titleLabel);
        QPushButton *readButton = new QPushButton("Read");
        QPushButton *addButton = new QPushButton("Add");
        readButton->setFont(font);
        addButton->setFont(font);
        QLabel *authorLabel = new QLabel( books[i].getAuthor(), this);
        authorLabel->setFont(font);
        books_layout.at(i)->addWidget(authorLabel);
        QLabel *genreLabel = new QLabel( books[i].getGenre(), this);
        genreLabel->setFont(font);
        readButton->setStyleSheet("border-radius: 15; border: 1px solid pink;");
        addButton->setStyleSheet("border-radius: 15; border: 1px solid pink;");
        books_layout.at(i)->addWidget(genreLabel);
        books_layout.at(i)->addWidget(readButton);
        books_layout.at(i)->addWidget(addButton);
        QObject::connect(readButton, &QPushButton::clicked, this, [=]() { emit signalToReadNow(i); });
        QObject::connect(addButton, &QPushButton::clicked, this, [=]() {
            dbHandler->sendPostRequestWithABook(email,  title, i);
            QMessageBox msgBox;
            msgBox.setText("Book was added to collection");
            msgBox.exec();});
        layout->addLayout(books_layout.at(i), i / 3, i % 3);
    }
    QWidget *my_widget = new QWidget;
    my_widget->setLayout(layout);
    QScrollArea* m_pQScrollArea = new QScrollArea;
    m_pQScrollArea->setWidget(my_widget);
    //m_pQScrollArea->horizontalScrollBar()->setStyleSheet("background-color: yellow;");
    ui->verticalLayout->addWidget(m_pQScrollArea);


    this->setStyleSheet("QScrollBar { background-color: transparent; } QScrollBar::handle:horizontal {  background: pink; border-radius: 5px; } QScrollBar::left-arrow:horizontal, QScrollBar::right-arrow:horizontal { border: none; background: none; color: none;} QScrollBar::add-line:horizontal {border: none;background: none;} QScrollBar::sub-line:horizontal {border: none;background: none;}");
    layoutReady();
}



LibraryWidget::~LibraryWidget()
{
    delete ui;
}

void LibraryWidget::setEmail(QString email)
{
    this->email = email;
}
