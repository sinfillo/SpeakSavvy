#ifndef BOOKWINDOW_H
#define BOOKWINDOW_H

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

QT_BEGIN_NAMESPACE
namespace Ui { class bookWindow; }
QT_END_NAMESPACE

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

    void createToolbar();

private slots:
    void onLibraryClicked();

    void onCollectionClicked();

    void onReadingNowClicked();

    void onDictionaryClicked();

    void onFlashcardsClicked();

    void onLoginClicked();

    void onTranslateButtonClicked();

private:
    Ui::bookWindow *ui;
    void translateSelectedText();
    void clearCentralWidget()
    {
        QWidget *widget = centralWidget();
        if (widget)
            delete widget;
    }
};
#endif // BOOKWINDOW_H
