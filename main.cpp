#include "authwidget.h"
#include "collectionwidget.h"
#include "dbmap.h"
#include "librarywidget.h"
#include "readwidget.h"
#include <QAction>
#include <QApplication>
#include <QCoreApplication>
#include <QLabel>
#include <QListWidget>
#include <QLocale>
#include <QMainWindow>
#include <QMessageBox>
#include <QMetaObject>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QToolBar>
#include <QTranslator>
#include <QVBoxLayout>
#include <QtCore>
#include <QtGui>
#include <QtNetwork>

int main(int argc, char *argv[]) {
  QCoreApplication::setAttribute(Qt::AA_DontUseNativeMenuBar);

  QApplication a(argc, argv);
  dbMap dbmap;
  DbHandler dbhandler;

  // BooksMap bookRepCol(&dbmap, "collection");
  BooksMap bookRepLib(&dbmap, "library");
  dbmap.map_["library"] = &dbhandler;

  User user(&bookRepLib);

  BaseWindow connectingWindow;
  connectingWindow.setUser(&user);

  while (true) {

    auto libraryWindow = new LibraryWidget(&connectingWindow, &bookRepLib);
    connectingWindow.widgetIndx_.library =
        connectingWindow.stackWidgets_.addWidget(libraryWindow);

    auto readNowWindow = new ReadWidget(&connectingWindow);
    connectingWindow.widgetIndx_.readNow =
        connectingWindow.stackWidgets_.addWidget(readNowWindow);

    auto collectionWindow =
        new CollectionWidget(&connectingWindow, &bookRepLib);

    connectingWindow.widgetIndx_.collection =
        connectingWindow.stackWidgets_.addWidget(collectionWindow);

    auto authWidget = new AuthWidget(&connectingWindow);
    connectingWindow.widgetIndx_.auth =
        connectingWindow.stackWidgets_.addWidget(authWidget);

    connectingWindow.stackWidgets_.setCurrentIndex(
        connectingWindow.widgetIndx_.library);

    a.setStyleSheet("QWidget{font-size:15px;}");

    connectingWindow.show();

    return a.exec();
  }
}
