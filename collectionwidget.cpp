#include "collectionwidget.h"
#include <iostream>

CollectionWidget::CollectionWidget(BaseWindow *parent, BooksMap *bookMap)
    : QWidget(parent), bookMap_(bookMap), parent_(parent) {
    updateWindow(false);
}

void CollectionWidget::updateWindow(bool first) {
    if (first) {
        for (int i = 0; i < books_.size(); i++) {
            QLayoutItem *item;
            while ((item = layout_->takeAt(0)) != nullptr) {
                delete item->widget();
                delete item->layout();
                delete item;
            }
        }
    }

    books_ = bookMap_->getAllBooks();

    box_ = new QWidget;
    layout_ = new QGridLayout;
    box_->setLayout(layout_);

    // Calculate the number of rows needed for the grid
    int rows = (books_.size() + 2) / 3;

    bookWidgets_.clear();
    bookWidgets_ = std::vector<QWidget *> (books_.size());

    int index = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < 3 && index < books_.size(); ++j) {
            bookWidgets_[index] = new QWidget;
            QVBoxLayout *bookLayout = new QVBoxLayout;

            QLabel *titleLabel = new QLabel(QString("Name: %1\nAuthor: %2")
                                                .arg(books_[index].getName().c_str(),
                                                     books_[index].getAuthor().c_str()));
            QPushButton *readButton = new QPushButton("Read");
            readButton->setFixedWidth(100);
            QPushButton *deleteButton = new QPushButton("Delete");
            deleteButton->setFixedWidth(100);
            // Increase the font size of the book information labels
            QFont font = titleLabel->font();
            font.setPointSize(12); // Adjust the font size as needed
            titleLabel->setFont(font);

            bookLayout->addWidget(titleLabel);
            bookLayout->addWidget(readButton);
            bookLayout->addWidget(deleteButton);

            bookWidgets_[index]->setLayout(bookLayout);

            layout_->addWidget(bookWidgets_[index], i, j);


            ++index;
        }
    }

    scrollArea_->setWidget(box_);
    auto screen_width = QGuiApplication::primaryScreen()->availableGeometry().width() - 1000;
    auto screen_height = QGuiApplication::primaryScreen()->availableGeometry().height() - 200;

    this->setStyleSheet("QLabel{margin: 1px;}");
    scrollArea_->setGeometry(10, 10, screen_width + 400, screen_height + 100);
}
