/********************************************************************************
** Form generated from reading UI file 'revisionwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REVISIONWIDGET_H
#define UI_REVISIONWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RevisionWidget
{
public:
    QGridLayout *gridLayout;
    QPushButton *wordButton;
    QPushButton *backToMainButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *nextButton;
    QPushButton *translationButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *prevButton;

    void setupUi(QWidget *RevisionWidget)
    {
        if (RevisionWidget->objectName().isEmpty())
            RevisionWidget->setObjectName("RevisionWidget");
        RevisionWidget->resize(610, 354);
        gridLayout = new QGridLayout(RevisionWidget);
        gridLayout->setObjectName("gridLayout");
        wordButton = new QPushButton(RevisionWidget);
        wordButton->setObjectName("wordButton");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(wordButton->sizePolicy().hasHeightForWidth());
        wordButton->setSizePolicy(sizePolicy);
        wordButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 144, 106);\n"
"font: 40pt \"PT Mono\";\n"
"border-radius: 10px;"));

        gridLayout->addWidget(wordButton, 2, 2, 1, 1);

        backToMainButton = new QPushButton(RevisionWidget);
        backToMainButton->setObjectName("backToMainButton");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Ignored, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(backToMainButton->sizePolicy().hasHeightForWidth());
        backToMainButton->setSizePolicy(sizePolicy1);
        backToMainButton->setStyleSheet(QString::fromUtf8("font: 13pt \"PT Mono\";"));

        gridLayout->addWidget(backToMainButton, 0, 0, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 3, 2, 1);

        nextButton = new QPushButton(RevisionWidget);
        nextButton->setObjectName("nextButton");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(nextButton->sizePolicy().hasHeightForWidth());
        nextButton->setSizePolicy(sizePolicy2);
        nextButton->setStyleSheet(QString::fromUtf8("font: 20pt \"PT Mono\";"));

        gridLayout->addWidget(nextButton, 1, 4, 2, 1);

        translationButton = new QPushButton(RevisionWidget);
        translationButton->setObjectName("translationButton");
        sizePolicy.setHeightForWidth(translationButton->sizePolicy().hasHeightForWidth());
        translationButton->setSizePolicy(sizePolicy);
        translationButton->setMinimumSize(QSize(400, 91));
        translationButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 144, 106);\n"
"font: 40pt \"PT Mono\";\n"
"border-radius: 10px;\n"
"\n"
""));

        gridLayout->addWidget(translationButton, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 1, 2, 1);

        prevButton = new QPushButton(RevisionWidget);
        prevButton->setObjectName("prevButton");
        sizePolicy2.setHeightForWidth(prevButton->sizePolicy().hasHeightForWidth());
        prevButton->setSizePolicy(sizePolicy2);
        prevButton->setStyleSheet(QString::fromUtf8("font: 20pt \"PT Mono\";"));

        gridLayout->addWidget(prevButton, 1, 0, 2, 1);


        retranslateUi(RevisionWidget);

        QMetaObject::connectSlotsByName(RevisionWidget);
    } // setupUi

    void retranslateUi(QWidget *RevisionWidget)
    {
        RevisionWidget->setWindowTitle(QCoreApplication::translate("RevisionWidget", "Form", nullptr));
        wordButton->setText(QString());
        backToMainButton->setText(QCoreApplication::translate("RevisionWidget", "<\342\200\224\342\200\224\342\200\224\342\200\224", nullptr));
        nextButton->setText(QCoreApplication::translate("RevisionWidget", ">", nullptr));
        translationButton->setText(QString());
        prevButton->setText(QCoreApplication::translate("RevisionWidget", "<", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RevisionWidget: public Ui_RevisionWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REVISIONWIDGET_H
