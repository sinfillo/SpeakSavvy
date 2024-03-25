#ifndef BOOKWINDOW_H
#define BOOKWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class bookWindow; }
QT_END_NAMESPACE

class bookWindow : public QMainWindow
{
    Q_OBJECT

public:
    bookWindow(QWidget *parent = nullptr);
    ~bookWindow();
private slots:
    void on_currentBook_selectionChanged();

private:
    Ui::bookWindow *ui;
    void translateSelectedText();
};
#endif // BOOKWINDOW_H
