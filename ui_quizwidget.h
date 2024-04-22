/********************************************************************************
** Form generated from reading UI file 'quizwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUIZWIDGET_H
#define UI_QUIZWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QuizWidget
{
public:
    QGridLayout *gridLayout;
    QPushButton *backButton;
    QLabel *cntCorrectLabel;
    QProgressBar *progressBar;
    QLabel *cntAllLabel;
    QLabel *timeLabel;
    QLabel *curWordLabel;
    QSpacerItem *horizontalSpacer;
    QPushButton *translationButton1;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *translationButton2;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *translationButton3;
    QSpacerItem *horizontalSpacer_6;
    QLabel *remainderLabel;

    void setupUi(QWidget *QuizWidget)
    {
        if (QuizWidget->objectName().isEmpty())
            QuizWidget->setObjectName("QuizWidget");
        QuizWidget->resize(796, 450);
        gridLayout = new QGridLayout(QuizWidget);
        gridLayout->setObjectName("gridLayout");
        backButton = new QPushButton(QuizWidget);
        backButton->setObjectName("backButton");
        backButton->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(backButton, 0, 0, 1, 1);

        cntCorrectLabel = new QLabel(QuizWidget);
        cntCorrectLabel->setObjectName("cntCorrectLabel");
        cntCorrectLabel->setStyleSheet(QString::fromUtf8("font: 24pt \"Academy Engraved LET\";"));

        gridLayout->addWidget(cntCorrectLabel, 0, 1, 1, 1);

        progressBar = new QProgressBar(QuizWidget);
        progressBar->setObjectName("progressBar");
        progressBar->setMaximum(10);
        progressBar->setValue(0);

        gridLayout->addWidget(progressBar, 0, 2, 1, 1);

        cntAllLabel = new QLabel(QuizWidget);
        cntAllLabel->setObjectName("cntAllLabel");
        cntAllLabel->setStyleSheet(QString::fromUtf8("font: 24pt \"Academy Engraved LET\";"));

        gridLayout->addWidget(cntAllLabel, 0, 4, 1, 1);

        timeLabel = new QLabel(QuizWidget);
        timeLabel->setObjectName("timeLabel");
        timeLabel->setStyleSheet(QString::fromUtf8("font: 18pt \"PT Mono\";"));
        timeLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(timeLabel, 1, 0, 1, 1);

        curWordLabel = new QLabel(QuizWidget);
        curWordLabel->setObjectName("curWordLabel");
        curWordLabel->setStyleSheet(QString::fromUtf8("font: 40pt \"PT Mono\";"));

        gridLayout->addWidget(curWordLabel, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(148, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 2);

        translationButton1 = new QPushButton(QuizWidget);
        translationButton1->setObjectName("translationButton1");
        translationButton1->setMinimumSize(QSize(400, 60));
        translationButton1->setStyleSheet(QString::fromUtf8("font: 20pt \"PT Mono\";"));

        gridLayout->addWidget(translationButton1, 2, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(170, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 2, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(148, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 0, 1, 2);

        translationButton2 = new QPushButton(QuizWidget);
        translationButton2->setObjectName("translationButton2");
        translationButton2->setMinimumSize(QSize(400, 60));
        translationButton2->setStyleSheet(QString::fromUtf8("font: 20pt \"PT Mono\";"));

        gridLayout->addWidget(translationButton2, 3, 2, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(170, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 3, 3, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(148, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 4, 0, 1, 2);

        translationButton3 = new QPushButton(QuizWidget);
        translationButton3->setObjectName("translationButton3");
        translationButton3->setMinimumSize(QSize(400, 60));
        translationButton3->setStyleSheet(QString::fromUtf8("font: 20pt \"PT Mono\";"));

        gridLayout->addWidget(translationButton3, 4, 2, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(170, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 4, 3, 1, 1);

        remainderLabel = new QLabel(QuizWidget);
        remainderLabel->setObjectName("remainderLabel");
        remainderLabel->setStyleSheet(QString::fromUtf8("font: 18pt \"PT Mono\";"));
        remainderLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(remainderLabel, 5, 2, 1, 1);


        retranslateUi(QuizWidget);

        QMetaObject::connectSlotsByName(QuizWidget);
    } // setupUi

    void retranslateUi(QWidget *QuizWidget)
    {
        QuizWidget->setWindowTitle(QCoreApplication::translate("QuizWidget", "Form", nullptr));
        backButton->setText(QString());
        cntCorrectLabel->setText(QCoreApplication::translate("QuizWidget", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        progressBar->setFormat(QString());
        cntAllLabel->setText(QString());
        timeLabel->setText(QCoreApplication::translate("QuizWidget", "TextLabel", nullptr));
#if QT_CONFIG(tooltip)
        curWordLabel->setToolTip(QCoreApplication::translate("QuizWidget", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        curWordLabel->setWhatsThis(QCoreApplication::translate("QuizWidget", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        curWordLabel->setText(QCoreApplication::translate("QuizWidget", "ABOBA", nullptr));
        translationButton1->setText(QCoreApplication::translate("QuizWidget", "\320\237\320\225\320\240\320\225\320\222\320\236\320\224 1", nullptr));
        translationButton2->setText(QCoreApplication::translate("QuizWidget", "\320\237\320\225\320\240\320\225\320\222\320\236\320\224 2", nullptr));
        translationButton3->setText(QCoreApplication::translate("QuizWidget", "\320\237\320\225\320\240\320\225\320\222\320\236\320\224 3", nullptr));
        remainderLabel->setText(QCoreApplication::translate("QuizWidget", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QuizWidget: public Ui_QuizWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUIZWIDGET_H
