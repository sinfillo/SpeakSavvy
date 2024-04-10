#ifndef BASEWINDOW_H
#define BASEWINDOW_H

#include "user.h"
#include <QAction>
#include <QLabel>
#include <QListWidget>
#include <QMainWindow>
#include <QMessageBox>
#include <QMetaObject>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QStackedWidget>
#include <QToolBar>
#include <QVBoxLayout>
#include <QtCore>
#include <QtGui>
#include <QtNetwork>

class BaseWindow : public QMainWindow {
  Q_OBJECT
private:
  QAction *collectionAction_;
  QAction *readNowAction_;
  QAction *libraryAction_;
  QAction *authAction_;

  void addMenu();

public:
  // TODO: make user_ private
  User *user_;
  QStackedWidget stackWidgets_;

  struct WindowIndexes {
    int library = -1, collection = -1, readNow = -1, auth = -1;
  } widgetIndx_;

  explicit BaseWindow(QWidget *parent = nullptr);

  void showReadNow();

  void showCollection();

  void showLibrary();

  void showAuth();

  void updateLibrary() const;

  void updateReadNow();

  void updateCollection() const;

  void setUser(User *u);
};

#endif // BASEWINDOW_H
