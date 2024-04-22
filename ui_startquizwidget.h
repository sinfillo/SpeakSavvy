/********************************************************************************
** Form generated from reading UI file 'startquizwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTQUIZWIDGET_H
#define UI_STARTQUIZWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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
        instructionLabel->setStyleSheet(QString::fromUtf8("font: 20pt \"PT Mono\";"));
        instructionLabel->setAlignment(Qt::AlignCenter);
        instructionLabel->setWordWrap(true);

        gridLayout->addWidget(instructionLabel, 0, 0, 1, 1);

        startQuizButton = new QPushButton(StartQuizWidget);
        startQuizButton->setObjectName("startQuizButton");
        startQuizButton->setStyleSheet(QString::fromUtf8("font: 24pt \"PT Mono\";\n"
"background-color: rgb(255, 144, 106);"));

        gridLayout->addWidget(startQuizButton, 1, 0, 1, 1);


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
        startQuizButton->setText(QCoreApplication::translate("StartQuizWidget", "Start quiz", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StartQuizWidget: public Ui_StartQuizWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTQUIZWIDGET_H
