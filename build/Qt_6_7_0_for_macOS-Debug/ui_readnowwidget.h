/********************************************************************************
** Form generated from reading UI file 'readnowwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_READNOWWIDGET_H
#define UI_READNOWWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReadNow
{
public:
    QGridLayout *gridLayout;
    QTextEdit *currentBook;
    QTextEdit *translationWindow;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton;

    void setupUi(QWidget *ReadNow)
    {
        if (ReadNow->objectName().isEmpty())
            ReadNow->setObjectName("ReadNow");
        ReadNow->resize(400, 300);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ReadNow->sizePolicy().hasHeightForWidth());
        ReadNow->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(ReadNow);
        gridLayout->setObjectName("gridLayout");
        currentBook = new QTextEdit(ReadNow);
        currentBook->setObjectName("currentBook");

        gridLayout->addWidget(currentBook, 0, 0, 2, 1);

        translationWindow = new QTextEdit(ReadNow);
        translationWindow->setObjectName("translationWindow");

        gridLayout->addWidget(translationWindow, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 145, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 1, 2, 1);

        pushButton = new QPushButton(ReadNow);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 2, 0, 1, 1);


        retranslateUi(ReadNow);

        QMetaObject::connectSlotsByName(ReadNow);
    } // setupUi

    void retranslateUi(QWidget *ReadNow)
    {
        ReadNow->setWindowTitle(QCoreApplication::translate("ReadNow", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("ReadNow", "Next page", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReadNow: public Ui_ReadNow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_READNOWWIDGET_H
