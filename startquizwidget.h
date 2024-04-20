#ifndef STARTQUIZWIDGET_H
#define STARTQUIZWIDGET_H

#include <QWidget>
#include <QMenu>

namespace Ui {
class StartQuizWidget;
}

class StartQuizWidget : public QWidget
{
    Q_OBJECT

public:
    explicit StartQuizWidget(QWidget *parent = nullptr);
    ~StartQuizWidget();
private slots:
    void on_startQuizButton_clicked();
signals:
    void changeWidget();
private:
    Ui::StartQuizWidget *ui;
};

#endif // STARTQUIZWIDGET_H
