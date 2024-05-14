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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BooksCollection
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QWidget *BooksCollection)
    {
        if (BooksCollection->objectName().isEmpty())
            BooksCollection->setObjectName("BooksCollection");
        BooksCollection->resize(617, 490);
        verticalLayoutWidget = new QWidget(BooksCollection);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(20, 100, 521, 351));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayoutWidget = new QWidget(BooksCollection);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(20, 10, 521, 71));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setMaximumSize(QSize(50, 16777215));
        pushButton->setFlat(true);

        horizontalLayout->addWidget(pushButton);

        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font: 30pt \"YuGothic\""));

        horizontalLayout->addWidget(label);


        retranslateUi(BooksCollection);

        QMetaObject::connectSlotsByName(BooksCollection);
    } // setupUi

    void retranslateUi(QWidget *BooksCollection)
    {
        BooksCollection->setWindowTitle(QCoreApplication::translate("BooksCollection", "Form", nullptr));
        pushButton->setText(QString());
        label->setText(QCoreApplication::translate("BooksCollection", "Book collection", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BooksCollection: public Ui_BooksCollection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKSCOLLECTION_H
