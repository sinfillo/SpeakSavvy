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
        titles_.clear();
        buttonRead_.clear();
    }

    books_ = bookMap_->getAllBooks();

    box_ = new QWidget;
    layout_ = new QGridLayout;
    box_->setLayout(layout_);

    titles_ = std::vector<QLabel*>(books_.size());
    buttonRead_ = std::vector<QPushButton*>(books_.size());
    buttonDelete_ = std::vector<QPushButton*>(books_.size());

    for (int i = 0; i < books_.size(); i++) {
        titles_[i] = new QLabel(QString("Book Name: %1,   Author: %2")
                                         .arg(books_[i].getName().c_str(),
                                              books_[i].getAuthor().c_str()));
        layout_->addWidget(titles_[i], i, 0);

        buttonRead_[i] = new QPushButton(tr("Read"));
        layout_->addWidget(buttonRead_[i], i, 1);

        buttonDelete_[i] = new QPushButton(tr("Delete"));
        layout_->addWidget(buttonDelete_[i], i, 2);

        buttonRead_[i]->setFixedWidth(100);
        buttonRead_[i]->setFixedHeight(30);
        buttonDelete_[i]->setFixedWidth(100);
        buttonDelete_[i]->setFixedHeight(30);
    }

    scrollArea_->setWidget(box_);
    auto screen_width = QGuiApplication::primaryScreen()->availableGeometry().width() - 1000;
    auto screen_height = QGuiApplication::primaryScreen()->availableGeometry().height() - 200;

    this->setStyleSheet("QLabel{margin: 5px;}");
    box_->setFixedWidth(screen_width - 20);
    scrollArea_->setGeometry(100, 10, screen_width, screen_height - 3);
}
