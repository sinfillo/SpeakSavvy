#include "../inc/startquizwidget.h"
#include "../ui/inc/ui_startquizwidget.h"

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
    emit changeWidget(static_cast<size_t>(QString(ui->comboBox->currentText()).toInt()));
}
