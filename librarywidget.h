#ifndef LIBRARYWIDGET_H
#define LIBRARYWIDGET_H

#include "basewindow.h"
#include "book.h"
#include <QBoxLayout>
#include <QGridLayout>
#include <QLabel>
#include <QListWidget>
#include <QPushButton>
#include <QScrollArea>
#include <QWidget>

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
