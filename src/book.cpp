#include "../inc/book.h"

#include <QString>

Book::Book() {
}

Book::Book(QString name, QString author, QString genre) : name(name), author(author), genre(genre)
{
}

Book::Book(QString name, QString author, QString genre, QString text) : name(name), author(author),
    genre(genre), text(text)
{
}

QString Book::getName()
{
    return name;
}

QString Book::getAuthor()
{
    return author;
}

QString Book::getGenre()
{
    return genre;
}

QString Book::getBookText()
{
    return text;
}

void Book::setName(QString name)
{
    this->name = name;
}

void Book::setAuthor(QString author)
{
    this->author = author;
}

void Book::setGenre(QString genre)
{
    this->genre = genre;
}

void Book::setBookText(QString text)
{
    this->text = text;
}
