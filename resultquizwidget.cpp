#include "resultquizwidget.h"
#include "ui_resultquizwidget.h"

ResultQuizWidget::ResultQuizWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ResultQuizWidget)
{
    ui->setupUi(this);
}

ResultQuizWidget::~ResultQuizWidget()
{
    delete ui;
}

void ResultQuizWidget::updateResults(size_t cnt_correct, size_t cnt)
{
    QString result_text = "Ваш результат: ";
    result_text += QString::number(static_cast<int>(cnt_correct));
    result_text += " из ";
    result_text += QString::number(static_cast<int>(cnt));
    result_text += "!";
    ui->resultTextLabel->setText(result_text);
    if (cnt_correct > 0.7 * cnt) {
        ui->repeatButton->hide();
    } else {
        ui->repeatButton->show();
    }

}

void ResultQuizWidget::on_backToStartButton_clicked()
{
    emit backToStart();
}

void ResultQuizWidget::on_repeatButton_clicked()
{
    emit showRevision(true);
}
