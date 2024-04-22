/********************************************************************************
** Form generated from reading UI file 'profile.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILE_H
#define UI_PROFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Profile
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton_5;
    QLabel *label_2;
    QPushButton *pushButton_6;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton;
    QLabel *label_3;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *Profile)
    {
        if (Profile->objectName().isEmpty())
            Profile->setObjectName("Profile");
        Profile->resize(400, 300);
        gridLayout = new QGridLayout(Profile);
        gridLayout->setObjectName("gridLayout");
        pushButton_5 = new QPushButton(Profile);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 144, 106);\n"
"font: 13pt \"PT Mono\";"));

        gridLayout->addWidget(pushButton_5, 0, 4, 1, 1);

        label_2 = new QLabel(Profile);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("font: 20pt \"Monaco\";"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        pushButton_6 = new QPushButton(Profile);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setMinimumSize(QSize(0, 0));
        pushButton_6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 144, 106);\n"
"font: 20pt \"PT Mono\";"));

        gridLayout->addWidget(pushButton_6, 5, 0, 1, 4);

        label_4 = new QLabel(Profile);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 6, 0, 1, 1);

        pushButton = new QPushButton(Profile);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 144, 106);\n"
"font: 20pt \"PT Mono\";"));

        gridLayout->addWidget(pushButton, 7, 0, 1, 4);

        label_3 = new QLabel(Profile);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("font: 20pt \"PT Mono\";"));

        gridLayout->addWidget(label_3, 2, 0, 1, 4);

        verticalSpacer = new QSpacerItem(20, 5, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 3, 1, 1);


        retranslateUi(Profile);

        QMetaObject::connectSlotsByName(Profile);
    } // setupUi

    void retranslateUi(QWidget *Profile)
    {
        Profile->setWindowTitle(QCoreApplication::translate("Profile", "Form", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Profile", "Log out", nullptr));
        label_2->setText(QCoreApplication::translate("Profile", "Profile", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Profile", "My words", nullptr));
        label_4->setText(QCoreApplication::translate("Profile", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("Profile", "My books", nullptr));
        label_3->setText(QCoreApplication::translate("Profile", "Hi! Happy to see you! Time to learn something new!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Profile: public Ui_Profile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILE_H
