/********************************************************************************
** Form generated from reading UI file 'readnowwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
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
    QTextEdit *translationWindow;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_2;
    QTextEdit *currentBook;

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
        translationWindow = new QTextEdit(ReadNow);
        translationWindow->setObjectName("translationWindow");
        translationWindow->setStyleSheet(QString::fromUtf8("font: 20pt \"PT Mono\";"));

        gridLayout->addWidget(translationWindow, 0, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 126, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 2, 2, 1);

        pushButton_2 = new QPushButton(ReadNow);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 144, 106);\n"
"font: 20pt \"PT Mono\";"));

        gridLayout->addWidget(pushButton_2, 1, 2, 1, 1);

        currentBook = new QTextEdit(ReadNow);
        currentBook->setObjectName("currentBook");
        currentBook->setStyleSheet(QString::fromUtf8("font: 20pt \"PT Mono\";"));

        gridLayout->addWidget(currentBook, 0, 0, 4, 1);


        retranslateUi(ReadNow);

        QMetaObject::connectSlotsByName(ReadNow);
    } // setupUi

    void retranslateUi(QWidget *ReadNow)
    {
        ReadNow->setWindowTitle(QCoreApplication::translate("ReadNow", "Form", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ReadNow", "Learn", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReadNow: public Ui_ReadNow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_READNOWWIDGET_H
