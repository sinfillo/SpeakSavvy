#ifndef BOOKWIDGET_H
#define BOOKWIDGET_H

#include <QWidget>

namespace Ui {
class BookWidget;
}

class BookWidget : public QWidget
{
    Q_OBJECT

public:
    explicit BookWidget(QWidget *parent = nullptr);
    BookWidget(int bookId, QString name, QString author, QString genre, QWidget *parent = nullptr);
    ~BookWidget();

private slots:
    void on_readButton_clicked();

signals:
    void openReadNow();

private:
    Ui::BookWidget *ui;
    int bookId;
    QString name;
    QString author;
    QString genre;
};

#endif // BOOKWIDGET_H
