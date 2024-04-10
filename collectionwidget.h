#ifndef COLLECTIONWIDGET_H
#define COLLECTIONWIDGET_H

#include "basewindow.h"
#include "booksmap.h"
#include <QApplication>
#include <QBoxLayout>
#include <QGridLayout>
#include <QGuiApplication>
#include <QLabel>
#include <QListWidget>
#include <QPushButton>
#include <QScreen>
#include <QScrollArea>
#include <QString>
#include <QWidget>

class CollectionWidget : public QWidget {
private:
  BaseWindow *parent_;
  BooksMap *bookMap_;
  std::vector<Book> books_;
  QWidget *box_;
  QGridLayout *layout_ = new QGridLayout();
  std::vector<QWidget *> bookWidgets_;
  QScrollArea *scrollArea_ = new QScrollArea(this);

public:
  CollectionWidget(BaseWindow *parent, BooksMap *bookMap);

  void updateWindow(bool first = true);
};

#endif // COLLECTIONWIDGET_H
