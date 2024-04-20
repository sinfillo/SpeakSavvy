/********************************************************************************
** Form generated from reading UI file 'librarywidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIBRARYWIDGET_H
#define UI_LIBRARYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Library
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;

    void setupUi(QWidget *Library)
    {
        if (Library->objectName().isEmpty())
            Library->setObjectName("Library");
        Library->resize(906, 861);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Library->sizePolicy().hasHeightForWidth());
        Library->setSizePolicy(sizePolicy);
        verticalLayoutWidget = new QWidget(Library);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 0, 1021, 821));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);

        retranslateUi(Library);

        QMetaObject::connectSlotsByName(Library);
    } // setupUi

    void retranslateUi(QWidget *Library)
    {
        Library->setWindowTitle(QCoreApplication::translate("Library", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Library: public Ui_Library {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIBRARYWIDGET_H
