/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignUp
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label;

    void setupUi(QWidget *SignUp)
    {
        if (SignUp->objectName().isEmpty())
            SignUp->setObjectName("SignUp");
        SignUp->resize(510, 384);
        gridLayout = new QGridLayout(SignUp);
        gridLayout->setObjectName("gridLayout");
        pushButton = new QPushButton(SignUp);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("border-radius: 10;\n"
"border: 1px solid pink;\n"
"background-color: pink;\n"
"font: 15pt "));

        gridLayout->addWidget(pushButton, 6, 2, 1, 2);

        horizontalSpacer_5 = new QSpacerItem(96, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 3, 0, 1, 2);

        horizontalSpacer_3 = new QSpacerItem(96, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 6, 0, 1, 2);

        horizontalSpacer_10 = new QSpacerItem(67, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_10, 1, 5, 1, 1);

        pushButton_2 = new QPushButton(SignUp);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setStyleSheet(QString::fromUtf8("border-radius: 7;\n"
"border: 1px solid pink;\n"
"background-color: pink;\n"
"font: 13pt"));
        pushButton_2->setFlat(true);

        gridLayout->addWidget(pushButton_2, 11, 3, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 53, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 7, 2, 1, 2);

        horizontalSpacer_6 = new QSpacerItem(77, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 3, 4, 1, 2);

        verticalSpacer = new QSpacerItem(276, 53, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 2, 1, 2);

        horizontalSpacer = new QSpacerItem(86, 18, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 11, 0, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(77, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 4, 4, 1, 2);

        label_2 = new QLabel(SignUp);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("font: 13pt \"Monaco\";"));

        gridLayout->addWidget(label_2, 11, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(276, 54, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 2, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(77, 17, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 11, 4, 1, 2);

        lineEdit = new QLineEdit(SignUp);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 3, 2, 1, 2);

        lineEdit_2 = new QLineEdit(SignUp);
        lineEdit_2->setObjectName("lineEdit_2");

        gridLayout->addWidget(lineEdit_2, 4, 2, 1, 2);

        horizontalSpacer_8 = new QSpacerItem(77, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_8, 6, 4, 1, 2);

        horizontalSpacer_9 = new QSpacerItem(86, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_9, 1, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(96, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 4, 0, 1, 2);

        label = new QLabel(SignUp);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font: 16pt \"Monaco\";"));

        gridLayout->addWidget(label, 1, 2, 1, 2);


        retranslateUi(SignUp);

        QMetaObject::connectSlotsByName(SignUp);
    } // setupUi

    void retranslateUi(QWidget *SignUp)
    {
        SignUp->setWindowTitle(QCoreApplication::translate("SignUp", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("SignUp", "Create account", nullptr));
        pushButton_2->setText(QCoreApplication::translate("SignUp", "Log In", nullptr));
        label_2->setText(QCoreApplication::translate("SignUp", "Already have an account?", nullptr));
        label->setText(QCoreApplication::translate("SignUp", "Create a SpeakSavvy account", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignUp: public Ui_SignUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
