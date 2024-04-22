/********************************************************************************
** Form generated from reading UI file 'videowidget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDEOWIDGET_H
#define UI_VIDEOWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VideoWidget
{
public:
    QGroupBox *groupBox;
    QSlider *horizontalSlider;
    QPushButton *nextVideoButton;
    QPushButton *prevVideoButton;
    QTextEdit *textEdit;
    QLabel *currentTimeLabel;
    QLabel *totalTimeLabel;
    QTextEdit *translatedText;

    void setupUi(QWidget *VideoWidget)
    {
        if (VideoWidget->objectName().isEmpty())
            VideoWidget->setObjectName("VideoWidget");
        VideoWidget->resize(791, 598);
        groupBox = new QGroupBox(VideoWidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(120, 0, 551, 311));
        groupBox->setMouseTracking(true);
        horizontalSlider = new QSlider(VideoWidget);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setGeometry(QRect(180, 320, 431, 21));
        horizontalSlider->setOrientation(Qt::Horizontal);
        nextVideoButton = new QPushButton(VideoWidget);
        nextVideoButton->setObjectName("nextVideoButton");
        nextVideoButton->setGeometry(QRect(690, 20, 81, 291));
        prevVideoButton = new QPushButton(VideoWidget);
        prevVideoButton->setObjectName("prevVideoButton");
        prevVideoButton->setGeometry(QRect(20, 20, 81, 291));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(prevVideoButton->sizePolicy().hasHeightForWidth());
        prevVideoButton->setSizePolicy(sizePolicy);
        textEdit = new QTextEdit(VideoWidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(120, 370, 551, 61));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy1);
        textEdit->setStyleSheet(QString::fromUtf8("font: 20pt \"PT Mono\";\n"
""));
        currentTimeLabel = new QLabel(VideoWidget);
        currentTimeLabel->setObjectName("currentTimeLabel");
        currentTimeLabel->setGeometry(QRect(120, 320, 61, 21));
        currentTimeLabel->setStyleSheet(QString::fromUtf8("font: 14pt \"Helvetica\";"));
        totalTimeLabel = new QLabel(VideoWidget);
        totalTimeLabel->setObjectName("totalTimeLabel");
        totalTimeLabel->setGeometry(QRect(620, 320, 61, 21));
        totalTimeLabel->setStyleSheet(QString::fromUtf8("font: 14pt \"Helvetica\";"));
        translatedText = new QTextEdit(VideoWidget);
        translatedText->setObjectName("translatedText");
        translatedText->setGeometry(QRect(120, 440, 551, 61));
        sizePolicy1.setHeightForWidth(translatedText->sizePolicy().hasHeightForWidth());
        translatedText->setSizePolicy(sizePolicy1);
        translatedText->setStyleSheet(QString::fromUtf8("font: 20pt \"PT Mono\";"));

        retranslateUi(VideoWidget);

        QMetaObject::connectSlotsByName(VideoWidget);
    } // setupUi

    void retranslateUi(QWidget *VideoWidget)
    {
        VideoWidget->setWindowTitle(QCoreApplication::translate("VideoWidget", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("VideoWidget", "GroupBox", nullptr));
        nextVideoButton->setText(QString());
        prevVideoButton->setText(QString());
        currentTimeLabel->setText(QCoreApplication::translate("VideoWidget", "00:00:00", nullptr));
        totalTimeLabel->setText(QCoreApplication::translate("VideoWidget", "00:00:00", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VideoWidget: public Ui_VideoWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEOWIDGET_H
