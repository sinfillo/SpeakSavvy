/********************************************************************************
** Form generated from reading UI file 'librarywidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
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
            Library->setObjectName(QString::fromUtf8("Library"));
        Library->resize(906, 861);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Library->sizePolicy().hasHeightForWidth());
        Library->setSizePolicy(sizePolicy);
        verticalLayoutWidget = new QWidget(Library);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 1021, 821));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
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
