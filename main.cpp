#include <QMainWindow>
#include <QtNetwork>
#include <QtGui>
#include <QtCore>
#include <QToolBar>
#include <QMessageBox>
#include <QNetworkAccessManager>
#include <QMetaObject>
#include <QAction>
#include <QNetworkReply>
#include <QVBoxLayout>
#include <QLabel>
#include <QListWidget>
#include "librarywidget.h"
#include "collectionwidget.h"
#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include "readwidget.h"
#include <QMainWindow>
#include <QToolBar>
#include <QAction>
#include <QMessageBox>
#include "dbmap.h"
#include <QCoreApplication>



int main(int argc, char *argv[]){
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

    while (true){

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



        connectingWindow.stackWidgets_.setCurrentIndex(
            connectingWindow.widgetIndx_.library);


        a.setStyleSheet("QWidget{font-size:15px;}");

        connectingWindow.show();

        return a.exec();
    }

}
