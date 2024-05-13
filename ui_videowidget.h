/********************************************************************************
** Form generated from reading UI file 'videowidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDEOWIDGET_H
#define UI_VIDEOWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VideoWidget
{
public:
    QGridLayout *gridLayout_2;
    QPushButton *prevVideoButton;
    QGroupBox *groupBox;
    QPushButton *nextVideoButton;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout;
    QLabel *currentTimeLabel;
    QPushButton *translatedText;
    QLabel *totalTimeLabel;
    QSlider *horizontalSlider;
    QTextEdit *textEdit;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *VideoWidget)
    {
        if (VideoWidget->objectName().isEmpty())
            VideoWidget->setObjectName("VideoWidget");
        VideoWidget->resize(791, 598);
        gridLayout_2 = new QGridLayout(VideoWidget);
        gridLayout_2->setObjectName("gridLayout_2");
        prevVideoButton = new QPushButton(VideoWidget);
        prevVideoButton->setObjectName("prevVideoButton");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(prevVideoButton->sizePolicy().hasHeightForWidth());
        prevVideoButton->setSizePolicy(sizePolicy);
        prevVideoButton->setMinimumSize(QSize(0, 351));
        prevVideoButton->setMaximumSize(QSize(16777215, 351));
        prevVideoButton->setStyleSheet(QString::fromUtf8("border: 1px solid red;"));

        gridLayout_2->addWidget(prevVideoButton, 0, 0, 1, 1);

        groupBox = new QGroupBox(VideoWidget);
        groupBox->setObjectName("groupBox");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        groupBox->setMinimumSize(QSize(541, 351));
        groupBox->setMaximumSize(QSize(571, 351));

        gridLayout_2->addWidget(groupBox, 0, 1, 1, 1);

        nextVideoButton = new QPushButton(VideoWidget);
        nextVideoButton->setObjectName("nextVideoButton");
        nextVideoButton->setMinimumSize(QSize(0, 351));
        nextVideoButton->setMaximumSize(QSize(16777215, 351));
        nextVideoButton->setStyleSheet(QString::fromUtf8("border: 1px solid red;"));

        gridLayout_2->addWidget(nextVideoButton, 0, 2, 1, 1);

        verticalSpacer = new QSpacerItem(78, 201, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 1, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        gridLayout->setSizeConstraint(QLayout::SetFixedSize);
        gridLayout->setVerticalSpacing(-1);
        currentTimeLabel = new QLabel(VideoWidget);
        currentTimeLabel->setObjectName("currentTimeLabel");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(currentTimeLabel->sizePolicy().hasHeightForWidth());
        currentTimeLabel->setSizePolicy(sizePolicy2);
        currentTimeLabel->setStyleSheet(QString::fromUtf8("font: 14pt \"Helvetica\";\n"
"border: 1px solid red;"));

        gridLayout->addWidget(currentTimeLabel, 0, 0, 1, 1);

        translatedText = new QPushButton(VideoWidget);
        translatedText->setObjectName("translatedText");
        translatedText->setMinimumSize(QSize(0, 30));
        translatedText->setMaximumSize(QSize(16777215, 30));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 0));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(215, 215, 215, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(88, 88, 88, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(117, 117, 117, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        QBrush brush6(QColor(255, 255, 220, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush7(QColor(0, 0, 0, 127));
        brush7.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette.setBrush(QPalette::Active, QPalette::Accent, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::Accent, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        QBrush brush8(QColor(176, 176, 176, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        QBrush brush9(QColor(88, 88, 88, 127));
        brush9.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        QBrush brush10(QColor(228, 228, 228, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Accent, brush10);
        translatedText->setPalette(palette);
        translatedText->setAutoFillBackground(false);
        translatedText->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0)"));
        translatedText->setIconSize(QSize(40, 40));
        translatedText->setAutoDefault(false);
        translatedText->setFlat(true);

        gridLayout->addWidget(translatedText, 2, 1, 1, 1);

        totalTimeLabel = new QLabel(VideoWidget);
        totalTimeLabel->setObjectName("totalTimeLabel");
        totalTimeLabel->setStyleSheet(QString::fromUtf8("font: 14pt \"Helvetica\";\n"
"border: 1px solid red;"));

        gridLayout->addWidget(totalTimeLabel, 0, 2, 1, 1);

        horizontalSlider = new QSlider(VideoWidget);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider, 0, 1, 1, 1);

        textEdit = new QTextEdit(VideoWidget);
        textEdit->setObjectName("textEdit");
        sizePolicy1.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy1);
        textEdit->setMaximumSize(QSize(16777215, 70));
        textEdit->setStyleSheet(QString::fromUtf8("font: 20pt \"PT Mono\";"));

        gridLayout->addWidget(textEdit, 1, 0, 1, 3);


        gridLayout_2->addLayout(gridLayout, 1, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(78, 201, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 1, 2, 1, 1);


        retranslateUi(VideoWidget);

        QMetaObject::connectSlotsByName(VideoWidget);
    } // setupUi

    void retranslateUi(QWidget *VideoWidget)
    {
        VideoWidget->setWindowTitle(QCoreApplication::translate("VideoWidget", "Form", nullptr));
        prevVideoButton->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("VideoWidget", "GroupBox", nullptr));
        nextVideoButton->setText(QString());
        currentTimeLabel->setText(QCoreApplication::translate("VideoWidget", "00:00:00", nullptr));
        translatedText->setText(QString());
        totalTimeLabel->setText(QCoreApplication::translate("VideoWidget", "00:00:00", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VideoWidget: public Ui_VideoWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEOWIDGET_H
