#include "librarywidget.h"
#include <QApplication>
#include <QGridLayout>
#include <QString>

LibraryWidget::LibraryWidget(BaseWindow *parent, BooksMap* bookMap): parent_(parent), bookMap_(bookMap) {
    box_ = new QWidget;
    layout_ = new QGridLayout;
    box_->setLayout(layout_);

    auto screen_width = QGuiApplication::primaryScreen()->geometry().width() - 1000;
    auto screen_height = QGuiApplication::primaryScreen()->geometry().height() - 400;
    this->setStyleSheet("QLabel{margin: 1px;}");
    scrollArea_->setGeometry(10, 10, screen_width + 400, screen_height + 100);
}

void LibraryWidget::updateWindow() {
    std::vector<Book> old_books = bookMap_->getAllBooks();
    books_ = bookMap_->getAllBooks();

    // Clear the layout
    QLayoutItem *item;
    while ((item = layout_->takeAt(0)) != nullptr) {
        delete item->widget();
        delete item->layout();
        delete item;
    }

    // Calculate the number of rows needed for the grid
    int rows = (books_.size() + 3) / 4;

    bookWidgets_.clear();
    bookWidgets_ = std::vector<QWidget *> (books_.size());

    int index = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < 4 && index < books_.size(); ++j) {
            bookWidgets_[index] = new QWidget;
            QVBoxLayout *bookLayout = new QVBoxLayout;

            QLabel *titleLabel = new QLabel(QString("Name: %1\nAuthor: %2")
                                                .arg(books_[index].getName().c_str(),
                                                     books_[index].getAuthor().c_str()));
            QPushButton *addButton = new QPushButton("Add");
            addButton->setFixedWidth(100);
            // Increase the font size of the book information labels
            QFont font = titleLabel->font();
            font.setPointSize(12); // Adjust the font size as needed
            titleLabel->setFont(font);

            bookLayout->addWidget(titleLabel);
            bookLayout->addWidget(addButton);
            bookWidgets_[index]->setLayout(bookLayout);

            // Increase the size of the box
            bookWidgets_[index]->setFixedSize(300, 150); // Adjust the size as needed

            layout_->addWidget(bookWidgets_[index], i, j);

            QObject::connect(addButton, &QPushButton::clicked, this,
                             [=]() { addToCollection(books_[index].getId()); });

            ++index;
        }
    }

    scrollArea_->setWidget(box_);
}


void LibraryWidget::addToCollection(int bookId) {
    parent_->user_->addBookToCollection(bookId);
    parent_->updateCollection();
}
