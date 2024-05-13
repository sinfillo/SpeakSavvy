/********************************************************************************
** Form generated from reading UI file 'bookwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKWIDGET_H
#define UI_BOOKWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BookWidget
{
public:
    QPushButton *readButton;
    QLabel *nameLabel;
    QLabel *authorLabel;
    QLabel *genreLabel;

    void setupUi(QWidget *BookWidget)
    {
        if (BookWidget->objectName().isEmpty())
            BookWidget->setObjectName("BookWidget");
        BookWidget->resize(400, 300);
        readButton = new QPushButton(BookWidget);
        readButton->setObjectName("readButton");
        readButton->setGeometry(QRect(40, 250, 271, 31));
        nameLabel = new QLabel(BookWidget);
        nameLabel->setObjectName("nameLabel");
        nameLabel->setGeometry(QRect(30, 130, 241, 21));
        authorLabel = new QLabel(BookWidget);
        authorLabel->setObjectName("authorLabel");
        authorLabel->setGeometry(QRect(30, 170, 211, 16));
        genreLabel = new QLabel(BookWidget);
        genreLabel->setObjectName("genreLabel");
        genreLabel->setGeometry(QRect(30, 210, 191, 16));

        retranslateUi(BookWidget);

        QMetaObject::connectSlotsByName(BookWidget);
    } // setupUi

    void retranslateUi(QWidget *BookWidget)
    {
        BookWidget->setWindowTitle(QCoreApplication::translate("BookWidget", "Form", nullptr));
        readButton->setText(QCoreApplication::translate("BookWidget", "Read", nullptr));
        nameLabel->setText(QCoreApplication::translate("BookWidget", "nameLabel", nullptr));
        authorLabel->setText(QCoreApplication::translate("BookWidget", "authorLabel", nullptr));
        genreLabel->setText(QCoreApplication::translate("BookWidget", "genreLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BookWidget: public Ui_BookWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKWIDGET_H
