/********************************************************************************
** Form generated from reading UI file 'bookscollection.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKSCOLLECTION_H
#define UI_BOOKSCOLLECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BooksCollection
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;

    void setupUi(QWidget *BooksCollection)
    {
        if (BooksCollection->objectName().isEmpty())
            BooksCollection->setObjectName("BooksCollection");
        BooksCollection->resize(617, 490);
        verticalLayoutWidget = new QWidget(BooksCollection);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(30, 20, 521, 371));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);

        retranslateUi(BooksCollection);

        QMetaObject::connectSlotsByName(BooksCollection);
    } // setupUi

    void retranslateUi(QWidget *BooksCollection)
    {
        BooksCollection->setWindowTitle(QCoreApplication::translate("BooksCollection", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BooksCollection: public Ui_BooksCollection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKSCOLLECTION_H
