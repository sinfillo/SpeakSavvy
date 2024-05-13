#ifndef BOOK_H
#define BOOK_H

#include <QString>
#include <QUrl>
#include <QPixmap>

class Book
{
public:
    Book();
    Book(QString name, QString author, QString genre);
    Book(QString name, QString author, QString genre, QString text);

    QString getName();
    QString getAuthor();
    QString getGenre();
    QString getBookText();

    void setName(QString name);
    void setAuthor(QString author);
    void setGenre(QString genre);
    void setBookText(QString text);

private:
    QString name;
    QString author;
    QString genre;
    QString text;
};

#endif // BOOK_H
