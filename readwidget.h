#ifndef READWIDGET_H
#define READWIDGET_H

#include <QTextEdit>
#include <QToolBar>
#include "basewindow.h"


class ReadWidget : public QMainWindow {
private:
    int screenWidth_;
    int screenHeight_;

    BaseWindow* parent_;

    QTextEdit *textWidget_;
    QTextEdit *translationWidget_;
    QPushButton *button_;

    QString author_;
    QString title_;

public:
    explicit ReadWidget(BaseWindow *parent);
    ~ReadWidget() override = default;

    void displayBook(const QString &book = nullptr,
                     const QString &author = nullptr,
                     const QString &title = nullptr);

    QString getBookTitle();

    void cleanTranslationDisplay();

private slots:
    void translateText();


};

#endif // READWIDGET_H
