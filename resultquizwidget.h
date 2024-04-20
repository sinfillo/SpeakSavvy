#ifndef RESULTQUIZWIDGET_H
#define RESULTQUIZWIDGET_H

#include <QWidget>

namespace Ui {
class ResultQuizWidget;
}

class ResultQuizWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ResultQuizWidget(QWidget *parent = nullptr);
    ~ResultQuizWidget();
    void updateResults(size_t cnt_correct);

private slots:
    void on_backToStartButton_clicked();
signals:
    void backToStart();

private:
    Ui::ResultQuizWidget *ui;
};

#endif // RESULTQUIZWIDGET_H
