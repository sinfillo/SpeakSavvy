/********************************************************************************
** Form generated from reading UI file 'profile.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Profile
{
public:
    QGridLayout *gridLayout;
    QLabel *label_5;
    QLabel *label;
    QPushButton *pushButton_4;
    QLabel *label_4;
    QLabel *label_3;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_2;

    void setupUi(QWidget *Profile)
    {
        if (Profile->objectName().isEmpty())
            Profile->setObjectName(QString::fromUtf8("Profile"));
        Profile->resize(400, 300);
        gridLayout = new QGridLayout(Profile);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_5 = new QLabel(Profile);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("font: 18pt \"Andale Mono\";"));

        gridLayout->addWidget(label_5, 4, 0, 1, 2);

        label = new QLabel(Profile);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font: 18pt \"Andale Mono\";"));

        gridLayout->addWidget(label, 1, 1, 1, 1);

        pushButton_4 = new QPushButton(Profile);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(233, 255, 161);"));

        gridLayout->addWidget(pushButton_4, 5, 2, 1, 2);

        label_4 = new QLabel(Profile);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        label_3 = new QLabel(Profile);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("font: 18pt \"Andale Mono\";"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        pushButton_3 = new QPushButton(Profile);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(168, 219, 255);"));

        gridLayout->addWidget(pushButton_3, 5, 0, 1, 2);

        pushButton_5 = new QPushButton(Profile);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color: rgb(182, 255, 229);"));

        gridLayout->addWidget(pushButton_5, 0, 3, 1, 1);

        pushButton = new QPushButton(Profile);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 208, 158);"));

        gridLayout->addWidget(pushButton, 3, 0, 1, 2);

        pushButton_2 = new QPushButton(Profile);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 187, 217);"));

        gridLayout->addWidget(pushButton_2, 3, 2, 1, 2);

        label_2 = new QLabel(Profile);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 20pt \"Monaco\";"));

        gridLayout->addWidget(label_2, 0, 1, 1, 2);


        retranslateUi(Profile);

        QMetaObject::connectSlotsByName(Profile);
    } // setupUi

    void retranslateUi(QWidget *Profile)
    {
        Profile->setWindowTitle(QCoreApplication::translate("Profile", "Form", nullptr));
        label_5->setText(QCoreApplication::translate("Profile", "Achievements", nullptr));
        label->setText(QCoreApplication::translate("Profile", "Nickname", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Profile", "Challenger", nullptr));
        label_4->setText(QCoreApplication::translate("Profile", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("Profile", "Statistics", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Profile", "Legendary", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Profile", "Log Out", nullptr));
        pushButton->setText(QCoreApplication::translate("Profile", "0 day steak", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Profile", "0 total XP", nullptr));
        label_2->setText(QCoreApplication::translate("Profile", "Profile", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Profile: public Ui_Profile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILE_H
