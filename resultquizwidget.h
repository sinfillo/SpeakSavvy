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
    void updateResults(size_t cnt_correct, size_t cnt);

private slots:
    void on_backToStartButton_clicked();
    void on_repeatButton_clicked();

signals:
    void backToStart();
    void showRevision(bool flag);

private:
    Ui::ResultQuizWidget *ui;
};

#endif // RESULTQUIZWIDGET_H
