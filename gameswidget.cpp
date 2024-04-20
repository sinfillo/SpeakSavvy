#include "gameswidget.h"
#include "ui_gameswidget.h"

GamesWidget::GamesWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::GamesWidget)
{
    ui->setupUi(this);
}

GamesWidget::~GamesWidget()
{
    delete ui;
}
