/********************************************************************************
** Form generated from reading UI file 'revisionwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
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
    QSpacerItem *horizontalSpacer;
    QPushButton *nextButton;
    QPushButton *prevButton;
    QPushButton *backToMainButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *translationButton;
    QPushButton *wordButton;

    void setupUi(QWidget *RevisionWidget)
    {
        if (RevisionWidget->objectName().isEmpty())
            RevisionWidget->setObjectName("RevisionWidget");
        RevisionWidget->resize(618, 354);
        gridLayout = new QGridLayout(RevisionWidget);
        gridLayout->setObjectName("gridLayout");
        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 1, 2, 1);

        nextButton = new QPushButton(RevisionWidget);
        nextButton->setObjectName("nextButton");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(nextButton->sizePolicy().hasHeightForWidth());
        nextButton->setSizePolicy(sizePolicy);
        nextButton->setStyleSheet(QString::fromUtf8("font: 20pt \"PT Mono\";"));
        nextButton->setFlat(true);

        gridLayout->addWidget(nextButton, 1, 5, 2, 1);

        prevButton = new QPushButton(RevisionWidget);
        prevButton->setObjectName("prevButton");
        sizePolicy.setHeightForWidth(prevButton->sizePolicy().hasHeightForWidth());
        prevButton->setSizePolicy(sizePolicy);
        prevButton->setStyleSheet(QString::fromUtf8("font: 20pt \"PT Mono\";"));
        prevButton->setFlat(true);

        gridLayout->addWidget(prevButton, 1, 0, 2, 1);

        backToMainButton = new QPushButton(RevisionWidget);
        backToMainButton->setObjectName("backToMainButton");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Ignored, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(backToMainButton->sizePolicy().hasHeightForWidth());
        backToMainButton->setSizePolicy(sizePolicy1);
        backToMainButton->setMaximumSize(QSize(40, 16777215));
        backToMainButton->setStyleSheet(QString::fromUtf8("font: 13pt \"PT Mono\";"));
        backToMainButton->setFlat(true);

        gridLayout->addWidget(backToMainButton, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 4, 2, 1);

        translationButton = new QPushButton(RevisionWidget);
        translationButton->setObjectName("translationButton");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(translationButton->sizePolicy().hasHeightForWidth());
        translationButton->setSizePolicy(sizePolicy2);
        translationButton->setMinimumSize(QSize(400, 91));
        translationButton->setStyleSheet(QString::fromUtf8("font: 24pt \"Arial\";\n"
"border-radius: 15;\n"
"border: 5px solid pink;\n"
"background-color: pink;\n"
""));

        gridLayout->addWidget(translationButton, 2, 3, 1, 1);

        wordButton = new QPushButton(RevisionWidget);
        wordButton->setObjectName("wordButton");
        sizePolicy2.setHeightForWidth(wordButton->sizePolicy().hasHeightForWidth());
        wordButton->setSizePolicy(sizePolicy2);
        wordButton->setStyleSheet(QString::fromUtf8("font: 24pt \"YuGothic\";\n"
"border-radius: 15;\n"
"border: 5px solid pink;\n"
"background-color: pink;\n"
""));

        gridLayout->addWidget(wordButton, 1, 3, 1, 1);


        retranslateUi(RevisionWidget);

        QMetaObject::connectSlotsByName(RevisionWidget);
    } // setupUi

    void retranslateUi(QWidget *RevisionWidget)
    {
        RevisionWidget->setWindowTitle(QCoreApplication::translate("RevisionWidget", "Form", nullptr));
        nextButton->setText(QString());
        prevButton->setText(QString());
        backToMainButton->setText(QString());
        translationButton->setText(QString());
        wordButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class RevisionWidget: public Ui_RevisionWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REVISIONWIDGET_H
