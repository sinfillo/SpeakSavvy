/********************************************************************************
** Form generated from reading UI file 'startquizwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTQUIZWIDGET_H
#define UI_STARTQUIZWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StartQuizWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *instructionLabel;
    QLabel *label;
    QComboBox *comboBox;
    QPushButton *startQuizButton;

    void setupUi(QWidget *StartQuizWidget)
    {
        if (StartQuizWidget->objectName().isEmpty())
            StartQuizWidget->setObjectName("StartQuizWidget");
        StartQuizWidget->resize(648, 359);
        gridLayout = new QGridLayout(StartQuizWidget);
        gridLayout->setObjectName("gridLayout");
        instructionLabel = new QLabel(StartQuizWidget);
        instructionLabel->setObjectName("instructionLabel");
        instructionLabel->setStyleSheet(QString::fromUtf8("font: 24pt \"YuGothic\";"));
        instructionLabel->setAlignment(Qt::AlignCenter);
        instructionLabel->setWordWrap(true);

        gridLayout->addWidget(instructionLabel, 0, 0, 1, 2);

        label = new QLabel(StartQuizWidget);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("YuGothic")});
        font.setPointSize(20);
        font.setBold(false);
        font.setItalic(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("font: 20pt \"YuGothic\";"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        comboBox = new QComboBox(StartQuizWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("PT Mono")});
        font1.setPointSize(20);
        font1.setBold(false);
        font1.setItalic(false);
        comboBox->setFont(font1);
        comboBox->setStyleSheet(QString::fromUtf8("border: 1px solid pink;\n"
"background-color: pink;\n"
"font: 20pt;\n"
"border-radius: 10;\n"
""));

        gridLayout->addWidget(comboBox, 1, 1, 1, 1);

        startQuizButton = new QPushButton(StartQuizWidget);
        startQuizButton->setObjectName("startQuizButton");
        startQuizButton->setStyleSheet(QString::fromUtf8("font: 24pt \"YuGothic\";\n"
"border-radius: 10;\n"
"border: 1px solid pink;\n"
"background-color: pink;"));

        gridLayout->addWidget(startQuizButton, 2, 0, 1, 2);


        retranslateUi(StartQuizWidget);

        QMetaObject::connectSlotsByName(StartQuizWidget);
    } // setupUi

    void retranslateUi(QWidget *StartQuizWidget)
    {
        StartQuizWidget->setWindowTitle(QCoreApplication::translate("StartQuizWidget", "Form", nullptr));
#if QT_CONFIG(whatsthis)
        instructionLabel->setWhatsThis(QCoreApplication::translate("StartQuizWidget", "<html><head/><body><p>You will see a word in English and several translations.</p><p>Choose the correct one. </p><p>But hurry, time is limited!</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        instructionLabel->setText(QCoreApplication::translate("StartQuizWidget", "You will see a word in English and several translations. Choose the correct one. But hurry, time is limited! Good luck!", nullptr));
        label->setText(QCoreApplication::translate("StartQuizWidget", "Select word count:", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("StartQuizWidget", "7", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("StartQuizWidget", "10", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("StartQuizWidget", "15", nullptr));

        startQuizButton->setText(QCoreApplication::translate("StartQuizWidget", "Start quiz", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StartQuizWidget: public Ui_StartQuizWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTQUIZWIDGET_H
