/********************************************************************************
** Form generated from reading UI file 'readnowwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_READNOWWIDGET_H
#define UI_READNOWWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReadNow
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *HeaderLayout;
    QPushButton *translationWindow;
    QPushButton *learnButton;
    QHBoxLayout *HeaderLayout_2;
    QTextEdit *contextTextEdit;
    QTextEdit *currentBook;

    void setupUi(QWidget *ReadNow)
    {
        if (ReadNow->objectName().isEmpty())
            ReadNow->setObjectName("ReadNow");
        ReadNow->resize(404, 300);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ReadNow->sizePolicy().hasHeightForWidth());
        ReadNow->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(ReadNow);
        verticalLayout->setObjectName("verticalLayout");
        HeaderLayout = new QHBoxLayout();
        HeaderLayout->setSpacing(0);
        HeaderLayout->setObjectName("HeaderLayout");
        HeaderLayout->setContentsMargins(5, -1, 5, -1);
        translationWindow = new QPushButton(ReadNow);
        translationWindow->setObjectName("translationWindow");
        translationWindow->setMinimumSize(QSize(200, 30));
        translationWindow->setMaximumSize(QSize(200, 30));
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
        translationWindow->setPalette(palette);
        translationWindow->setAutoFillBackground(false);
        translationWindow->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0)"));
        translationWindow->setIconSize(QSize(40, 40));
        translationWindow->setAutoDefault(false);
        translationWindow->setFlat(true);

        HeaderLayout->addWidget(translationWindow);

        learnButton = new QPushButton(ReadNow);
        learnButton->setObjectName("learnButton");
        learnButton->setMinimumSize(QSize(55, 30));
        learnButton->setMaximumSize(QSize(55, 30));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush11(QColor(255, 192, 203, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush11);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush12(QColor(217, 217, 217, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush12);
        QBrush brush13(QColor(90, 90, 90, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush13);
        QBrush brush14(QColor(119, 119, 119, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush14);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush11);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush11);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush12);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette1.setBrush(QPalette::Active, QPalette::Accent, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush13);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush14);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::Accent, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush14);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        QBrush brush15(QColor(179, 179, 179, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush15);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        QBrush brush16(QColor(90, 90, 90, 127));
        brush16.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush16);
#endif
        QBrush brush17(QColor(233, 233, 233, 255));
        brush17.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::Accent, brush17);
        learnButton->setPalette(palette1);
        QFont font;
        font.setStyleStrategy(QFont::PreferDefault);
        learnButton->setFont(font);
        learnButton->setCursor(QCursor(Qt::ArrowCursor));
        learnButton->setStyleSheet(QString::fromUtf8("border: 1px solid pink;\n"
"border-radius: 10;\n"
"background-color: pink;"));
        learnButton->setIconSize(QSize(40, 40));
        learnButton->setAutoDefault(false);
        learnButton->setFlat(false);

        HeaderLayout->addWidget(learnButton);


        verticalLayout->addLayout(HeaderLayout);

        HeaderLayout_2 = new QHBoxLayout();
        HeaderLayout_2->setSpacing(0);
        HeaderLayout_2->setObjectName("HeaderLayout_2");
        HeaderLayout_2->setContentsMargins(5, -1, 5, -1);
        contextTextEdit = new QTextEdit(ReadNow);
        contextTextEdit->setObjectName("contextTextEdit");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(contextTextEdit->sizePolicy().hasHeightForWidth());
        contextTextEdit->setSizePolicy(sizePolicy1);
        contextTextEdit->setMinimumSize(QSize(360, 50));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(20);
        font1.setBold(false);
        font1.setItalic(false);
        contextTextEdit->setFont(font1);
        contextTextEdit->setStyleSheet(QString::fromUtf8("font: 20pt \"Arial\";\n"
"border-radius: 15;\n"
"border: 5px solid pink;"));

        HeaderLayout_2->addWidget(contextTextEdit);


        verticalLayout->addLayout(HeaderLayout_2);

        currentBook = new QTextEdit(ReadNow);
        currentBook->setObjectName("currentBook");
        sizePolicy.setHeightForWidth(currentBook->sizePolicy().hasHeightForWidth());
        currentBook->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("YuGothic")});
        font2.setPointSize(20);
        font2.setBold(false);
        font2.setItalic(false);
        currentBook->setFont(font2);
        currentBook->setStyleSheet(QString::fromUtf8("font: 20pt \"YuGothic\""));

        verticalLayout->addWidget(currentBook);


        retranslateUi(ReadNow);

        learnButton->setDefault(true);


        QMetaObject::connectSlotsByName(ReadNow);
    } // setupUi

    void retranslateUi(QWidget *ReadNow)
    {
        ReadNow->setWindowTitle(QCoreApplication::translate("ReadNow", "Form", nullptr));
        translationWindow->setText(QString());
        learnButton->setText(QCoreApplication::translate("ReadNow", "Learn", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReadNow: public Ui_ReadNow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_READNOWWIDGET_H
