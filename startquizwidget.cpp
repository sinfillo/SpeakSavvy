#include "startquizwidget.h"
#include "ui_startquizwidget.h"

StartQuizWidget::StartQuizWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::StartQuizWidget)
{
    ui->setupUi(this);
}

StartQuizWidget::~StartQuizWidget()
{
    delete ui;
}

void StartQuizWidget::on_startQuizButton_clicked()
{
    emit changeWidget();
}
