#ifndef GAMESWIDGET_H
#define GAMESWIDGET_H

#include <QWidget>

namespace Ui {
class GamesWidget;
}

class GamesWidget : public QWidget
{
    Q_OBJECT

public:
    explicit GamesWidget(QWidget *parent = nullptr);
    ~GamesWidget();

private:
    Ui::GamesWidget *ui;
};

#endif // GAMESWIDGET_H
