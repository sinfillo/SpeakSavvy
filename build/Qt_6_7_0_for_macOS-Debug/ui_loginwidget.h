/********************************************************************************
** Form generated from reading UI file 'loginwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWIDGET_H
#define UI_LOGINWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LogInWidget
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_2;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *LogInWidget)
    {
        if (LogInWidget->objectName().isEmpty())
            LogInWidget->setObjectName("LogInWidget");
        LogInWidget->resize(508, 367);
        gridLayout = new QGridLayout(LogInWidget);
        gridLayout->setObjectName("gridLayout");
        verticalSpacer = new QSpacerItem(404, 47, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 0, 1, 5);

        horizontalSpacer_2 = new QSpacerItem(84, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 5, 0, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(82, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 4, 4, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(84, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 6, 0, 1, 1);

        label = new QLabel(LogInWidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font: 18pt \"Monaco\";"));

        gridLayout->addWidget(label, 2, 1, 1, 3);

        horizontalSpacer_4 = new QSpacerItem(84, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 9, 0, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_10, 2, 4, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(86, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_9, 2, 0, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(82, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 5, 4, 1, 1);

        verticalSpacer_2 = new QSpacerItem(289, 37, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 3, 1, 1, 3);

        lineEdit = new QLineEdit(LogInWidget);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 4, 1, 1, 3);

        horizontalSpacer_5 = new QSpacerItem(82, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 9, 4, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(82, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_8, 6, 4, 1, 1);

        label_2 = new QLabel(LogInWidget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("font: 14pt \"Monaco\";"));

        gridLayout->addWidget(label_2, 9, 1, 1, 2);

        lineEdit_2 = new QLineEdit(LogInWidget);
        lineEdit_2->setObjectName("lineEdit_2");

        gridLayout->addWidget(lineEdit_2, 5, 1, 1, 3);

        horizontalSpacer = new QSpacerItem(84, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 4, 0, 1, 1);

        pushButton_2 = new QPushButton(LogInWidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(198, 232, 255);\n"
"font: 14pt \"Monaco\"; "));

        gridLayout->addWidget(pushButton_2, 9, 3, 1, 1);

        pushButton = new QPushButton(LogInWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("font: 13pt \"Monaco\";\n"
"background-color: rgb(198, 232, 255);"));

        gridLayout->addWidget(pushButton, 6, 1, 1, 3);

        verticalSpacer_3 = new QSpacerItem(20, 37, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 7, 2, 1, 1);


        retranslateUi(LogInWidget);

        QMetaObject::connectSlotsByName(LogInWidget);
    } // setupUi

    void retranslateUi(QWidget *LogInWidget)
    {
        LogInWidget->setWindowTitle(QCoreApplication::translate("LogInWidget", "Form", nullptr));
        label->setText(QCoreApplication::translate("LogInWidget", "  Log into your account", nullptr));
        label_2->setText(QCoreApplication::translate("LogInWidget", "New to SpeakSavvy?", nullptr));
        pushButton_2->setText(QCoreApplication::translate("LogInWidget", "Sign Up", nullptr));
        pushButton->setText(QCoreApplication::translate("LogInWidget", "Log In", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LogInWidget: public Ui_LogInWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWIDGET_H
