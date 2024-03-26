// #ifndef BOOKWINDOW_H
// #define BOOKWINDOW_H

// #include <QMainWindow>
// #include <QtNetwork>
// #include <QtGui>
// #include <QtCore>
// #include <QToolBar>
// #include <QMessageBox>
// #include <QNetworkAccessManager>
// #include <QMetaObject>
// #include <QAction>
// #include <QNetworkReply>
// #include <QVBoxLayout>
// #include <QLabel>
// #include <QListWidget>
// #include "librarywidget.h"
// #include "collectionwidget.h"

// QT_BEGIN_NAMESPACE
// namespace Ui { class bookWindow; }
// QT_END_NAMESPACE


// class CustomWidget : public QWidget
// {
// public:
//     explicit CustomWidget(const QString &title, QWidget *parent = nullptr)
//         : QWidget(parent)
//     {
//         QVBoxLayout *layout = new QVBoxLayout(this);
//         QLabel *label = new QLabel(title, this);
//         label->setAlignment(Qt::AlignCenter);
//         layout->addWidget(label);
//     }
// };


// class bookWindow : public QMainWindow
// {
//     Q_OBJECT

// public:
//     bookWindow(QWidget *parent = nullptr);
//     ~bookWindow();
// private slots:
//     void onLibraryClicked();

//     void onCollectionClicked();

//     void onReadingNowClicked();

//     void onDictionaryClicked();

//     void onFlashcardsClicked();

//     void onLoginClicked();

//     void onTranslateButtonClicked();



//     void showLibrary() {
//         // Clear the central widget and set LibraryWidget
//         libraryWidget = new LibraryWidget(this);
//         setCentralWidget(libraryWidget);
//         qDebug() << "Library Action triggered";
//     }

//     void showCollection() {
//         // Clear the central widget and set CollectionWidget
//         collectionWidget = new CollectionWidget(this);
//         setCentralWidget(collectionWidget);
//         qDebug() << "Collection Action triggered";
//     }


// private:
//     Ui::bookWindow *ui;

//     void addBookToCollection(const QString& bookTitle) {
//         // Add the book to the collection
//         qDebug() << "Added book to collection:" << bookTitle;
//         collectionWidget->addBook(bookTitle);
//     }

//     LibraryWidget *libraryWidget;
//     CollectionWidget *collectionWidget;

//     void createToolbar();
//     void translateSelectedText();
//     void clearCentralWidget()
//     {
//         QWidget *widget = centralWidget();
//         if (widget)
//             delete widget;
//     }
// };
// #endif // BOOKWINDOW_H
