#ifndef LIBRARYWIDGET_H
#define LIBRARYWIDGET_H

#include <QWidget>
#include <QBoxLayout>
#include <QLabel>
#include <QListWidget>
#include <QPushButton>
#include <QGridLayout>
#include <QLabel>
#include <QPushButton>
#include <QScrollArea>
#include "book.h"
#include "basewindow.h"

class LibraryWidget : public QWidget {
private:
    BaseWindow *parent_;
    BooksMap *bookMap_;
    std::vector<Book> books_;

    QWidget *box_;
    QGridLayout *layout_ = new QGridLayout();
    std::vector<QWidget *> bookWidgets_;
    QScrollArea *scrollArea_ = new QScrollArea(this);

    void addToCollection(int bookId);

public:
    explicit LibraryWidget(BaseWindow *parent, BooksMap *bookMap);
    void updateWindow();
};

#endif // LIBRARYWIDGET_H
