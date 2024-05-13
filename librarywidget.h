#ifndef LIBRARYWIDGET_H
#define LIBRARYWIDGET_H

#include <QWidget>
#include <QListView>
#include <QPushButton>
#include <QLabel>
#include <QGridLayout>
#include <QScrollArea>
#include "databasehandler.h"


namespace Ui {
class Library;
}

class LibraryWidget : public QWidget
{
    Q_OBJECT

public:
    explicit LibraryWidget(QWidget *parent = nullptr);
    LibraryWidget(QList<Book> books, QWidget *parent = nullptr);
    ~LibraryWidget();
    void setEmail(QString email);

private slots:
    void updateLibrary();

signals:
    void signalToReadNow(int bookId);
    void signalToAddTocollection(int bookId);


private:
    Ui::Library *ui;
    DatabaseHandler *dbHandler;
    std::vector<QWidget *> bookWidgets;
    QString email;

signals:
    void layoutReady();
};

#endif // LIBRARYWIDGET_H

/* TO DO:
 * 1. Нормальный layout для библиотеки
 * 2. Добавить в бд книжки:названия, авторов, текст, картинки(хранить в Storage)
 * 3. Сделать так чтобы bookwidget подтягивал текст книги из бд
 * 4. Добавить connect между bookwidget и librarywidget
 * 5. Сделать так чтобы перевод делался не по нажатию на кнопку а как-то красивее(мб надо заменить qtextedit на что-то другое) - DONE!!
 * 6. Подумать какой функционал можем добавить чтобы не сказали что на 3 было мало работы: проигрывание видео с субтитрами, составление статистики,
 * несколько разных игровых форматов изучения слов(че то можно у дуолинго мб своровать), запоминать где пользователь остановился в книге,
 * система поощрения активности пользователя(страйки и тд),
 * в целом постараться сделать приложение визуально приятным
*/
