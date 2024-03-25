#ifndef BOOKWINDOW_H
#define BOOKWINDOW_H

#include "QtWidgets/qpushbutton.h"
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

QT_BEGIN_NAMESPACE
namespace Ui { class bookWindow; }
QT_END_NAMESPACE


class LibraryWidget : public QWidget {
public:
    LibraryWidget(QWidget *parent = nullptr) : QWidget(parent) {
        QVBoxLayout *layout = new QVBoxLayout(this);
        QLabel *label = new QLabel("Library View", this);

        layout->addWidget(label);
        setLayout(layout);
    }
};


class CollectionWidget : public QWidget {

public:
    CollectionWidget(QWidget *parent = nullptr) : QWidget(parent) {
        QVBoxLayout *layout = new QVBoxLayout(this);
        QLabel *label = new QLabel("Collection View", this);
        layout->addWidget(label);
        setLayout(layout);
    }
};

class CustomWidget : public QWidget
{
public:
    explicit CustomWidget(const QString &title, QWidget *parent = nullptr)
        : QWidget(parent)
    {
        QVBoxLayout *layout = new QVBoxLayout(this);
        QLabel *label = new QLabel(title, this);
        label->setAlignment(Qt::AlignCenter);
        layout->addWidget(label);
    }
};


class bookWindow : public QMainWindow
{
    Q_OBJECT

public:
    bookWindow(QWidget *parent = nullptr);
    ~bookWindow();
    void createLibrary();
private slots:
    void onLibraryClicked();

    void onCollectionClicked();

    void onReadingNowClicked();

    void onDictionaryClicked();

    void onFlashcardsClicked();

    void onLoginClicked();

    void onTranslateButtonClicked();



    void showLibrary() {
        // Clear the central widget and set LibraryWidget
        setCentralWidget(new LibraryWidget(this));
        qDebug() << "Library Action triggered";
    }

    void showCollection() {
        // Clear the central widget and set CollectionWidget
        setCentralWidget(new CollectionWidget(this));
        qDebug() << "Collection Action triggered";
    }


private:
    Ui::bookWindow *ui;
    QListWidget *libraryWidget;
    QListWidget *collectionWidget;


    void createToolbar();
    void translateSelectedText();
    void clearCentralWidget()
    {
        QWidget *widget = centralWidget();
        if (widget)
            delete widget;
    }
};
#endif // BOOKWINDOW_H
