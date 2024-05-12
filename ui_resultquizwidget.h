/********************************************************************************
** Form generated from reading UI file 'resultquizwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULTQUIZWIDGET_H
#define UI_RESULTQUIZWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ResultQuizWidget
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *resultTextLabel;
    QPushButton *repeatButton;
    QPushButton *backToStartButton;

    void setupUi(QWidget *ResultQuizWidget)
    {
        if (ResultQuizWidget->objectName().isEmpty())
            ResultQuizWidget->setObjectName("ResultQuizWidget");
        ResultQuizWidget->resize(809, 545);
        verticalLayout = new QVBoxLayout(ResultQuizWidget);
        verticalLayout->setObjectName("verticalLayout");
        resultTextLabel = new QLabel(ResultQuizWidget);
        resultTextLabel->setObjectName("resultTextLabel");
        resultTextLabel->setStyleSheet(QString::fromUtf8("font: 20pt \"YuGothic\";"));
        resultTextLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(resultTextLabel);

        repeatButton = new QPushButton(ResultQuizWidget);
        repeatButton->setObjectName("repeatButton");
        repeatButton->setMinimumSize(QSize(0, 40));
        repeatButton->setStyleSheet(QString::fromUtf8("border-radius: 15;\n"
"border: 1px solid pink;\n"
"font: 20pt \"YuGothic\";"));

        verticalLayout->addWidget(repeatButton);

        backToStartButton = new QPushButton(ResultQuizWidget);
        backToStartButton->setObjectName("backToStartButton");
        backToStartButton->setMinimumSize(QSize(0, 40));
        backToStartButton->setStyleSheet(QString::fromUtf8("border-radius: 15;\n"
"border: 1px solid pink;\n"
"font: 20pt \"YuGothic\";"));

        verticalLayout->addWidget(backToStartButton);


        retranslateUi(ResultQuizWidget);

        QMetaObject::connectSlotsByName(ResultQuizWidget);
    } // setupUi

    void retranslateUi(QWidget *ResultQuizWidget)
    {
        ResultQuizWidget->setWindowTitle(QCoreApplication::translate("ResultQuizWidget", "Form", nullptr));
        resultTextLabel->setText(QCoreApplication::translate("ResultQuizWidget", "TextLabel", nullptr));
        repeatButton->setText(QCoreApplication::translate("ResultQuizWidget", "Revise words", nullptr));
        backToStartButton->setText(QCoreApplication::translate("ResultQuizWidget", "Retake quiz", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ResultQuizWidget: public Ui_ResultQuizWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULTQUIZWIDGET_H
