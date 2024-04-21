#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFont defaultFont("Arial", 10);
    QApplication::setFont(defaultFont);
    srand(time(NULL));
    WordleWindow w;
    w.show();
    return a.exec();
}
