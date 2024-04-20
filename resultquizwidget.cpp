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

void ResultQuizWidget::updateResults(size_t cnt_correct)
{
    QString result_text = "Ваш результат: ";
    result_text += QString::number(static_cast<int>(cnt_correct));
    result_text += " из 10!";
    ui->resultTextLabel->setText(result_text);
    if (cnt_correct >= 8) {
        ui->repeatButton->hide();
    } else {
        ui->repeatButton->show();
    }

}

void ResultQuizWidget::on_backToStartButton_clicked()
{
    emit backToStart();
}
