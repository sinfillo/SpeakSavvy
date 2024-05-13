#include <QApplication>
#include <QLocale>
#include <QTranslator>

#include <QMainWindow>
#include <QToolBar>
#include <QAction>
#include <QMessageBox>
#include "../inc/databasehandler.h"
#include "../inc/mainwindow.h"


int main(int argc, char *argv[]){
    QApplication app(argc, argv);

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "SpeakSavvy_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            app.installTranslator(&translator);
            break;
        }
    }

    MainWindow w;
    w.setWindowTitle("SpeakSavvy");
    w.show();
    return app.exec();
}
