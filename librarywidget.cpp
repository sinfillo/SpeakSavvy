#include "librarywidget.h"
#include <QApplication>
#include <QGridLayout>
#include <QString>

LibraryWidget::LibraryWidget(BaseWindow *parent, BooksMap* bookMap) :parent_(parent), bookMap_(bookMap) {
    box_ = new QWidget;
    layout_ = new QGridLayout;
    box_->setLayout(layout_);
    updateWindow();

    auto *button = new QPushButton(tr("Update"));
    button->setParent(this);
    button->setGeometry(30, 1370, 300, 70);
    button->show();
    connect(button, &QPushButton::clicked, this, &LibraryWidget::updateWindow);

    auto screen_width = QGuiApplication::primaryScreen()->geometry().width() - 1000;
    auto screen_height = QGuiApplication::primaryScreen()->geometry().height() - 200;
    this->setStyleSheet("QLabel{margin: 5px;}");
    box_->setFixedWidth(screen_width - 20);
    scrollArea_->setGeometry(100, 10, screen_width, screen_height - 3);
}


void LibraryWidget::updateWindow() {
    std::vector<Book> old_books = bookMap_->getAllBooks();
    books_ = bookMap_->getAllBooks();

    for (int i = 0; i < old_books.size(); i++) {
        QLayoutItem *item;
        while ((item = layout_->takeAt(0)) != nullptr) {
            delete item->widget();
            delete item->layout();
            delete item;
        }
    }

    titles_.clear();
    buttonAdd_.clear();

    titles_ = std::vector<QLabel *>(books_.size());
    buttonAdd_ = std::vector<QPushButton *>(books_.size());

    for (int i = 0; i < books_.size(); i++) {
        titles_[i] = new QLabel(QString("Book Name: %1,   Author: %2")
                                        .arg(books_[i].getName().c_str(),
                                            books_[i].getAuthor().c_str()));
        layout_->addWidget(titles_[i], i, 0);

        buttonAdd_[i] = new QPushButton(tr("Add"));
        layout_->addWidget(buttonAdd_[i], i, 1);

        buttonAdd_[i]->setFixedWidth(100);
        buttonAdd_[i]->setFixedHeight(50);
    }

    scrollArea_->setWidget(box_);

    for (int i = 0; i < books_.size(); i++) {
        QObject::connect(buttonAdd_[i], &QPushButton::clicked, this,
                         [=]() { addToCollection(books_[i].getId()); });
    }
}

void LibraryWidget::addToCollection(int bookId) {
    parent_->user_->addBookToCollection(bookId);
    parent_->updateCollection();
}
