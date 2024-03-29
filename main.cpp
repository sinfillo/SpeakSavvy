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

    // bookRepLib.addAndSaveBook(1, "hello", "world", "boba aboba");
    // bookRepLib.addAndSaveBook(2, "hello2", "world2", "botva");
    // bookRepLib.addAndSaveBook(3, "wtf", "aboba", "botva");
    // bookRepLib.addAndSaveBook(4, "botva", "fuf", "aboba");
    // bookRepLib.addAndSaveBook(5, "hello", "world", "boba aboba");
    // bookRepLib.addAndSaveBook(6, "hello2", "world2", "botva");
    // bookRepLib.addAndSaveBook(7, "wtf", "aboba", "botva");
    // bookRepLib.addAndSaveBook(8, "botva", "fuf", "aboba");
    // bookRepLib.addAndSaveBook(9, "hello", "world", "boba aboba");
    // bookRepLib.addAndSaveBook(10, "hello2", "world2", "botva");
    // bookRepLib.addAndSaveBook(11, "wtf", "aboba", "botva");
    // bookRepLib.addAndSaveBook(12, "botva", "fuf", "aboba");
    // bookRepLib.addAndSaveBook(13, "hello", "world", "boba aboba");
    // bookRepLib.addAndSaveBook(14, "hello2", "world2", "botva");
    // bookRepLib.addAndSaveBook(15, "wtf", "aboba", "botva");
    // bookRepLib.addAndSaveBook(16, "botva", "fuf", "aboba");
    // bookRepLib.addAndSaveBook(17, "botva", "fuf", "aboba");
    // bookRepLib.addAndSaveBook(18, "botva", "fuf", "aboba");

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
