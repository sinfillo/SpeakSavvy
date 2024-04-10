#ifndef BASEWINDOW_H
#define BASEWINDOW_H

#include <QMainWindow>
#include <QStackedWidget>
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
#include "user.h"
#include <QListWidget>

class BaseWindow : public QMainWindow {
    Q_OBJECT

public:
    User *user_;
    QStackedWidget stackWidgets_;

    struct WindowIndexes {
        int library = -1, collection = -1, readNow = -1, auth = -1;
    } widgetIndx_;

    explicit BaseWindow(QWidget *parent = nullptr);

    void updateReadNow();
    void showReadNow();

    void showCollection();
    void showLibrary();
    void showAuth();

    void updateLibrary() const;
    void updateCollection() const;
    void setUser(User *u);
    \

private:
    QAction *collectionAction_;
    QAction *readNowAction_;
    QAction *libraryAction_;
    QAction *authAction_;

    void addMenu();
};

#endif  // BASEWINDOW_H
