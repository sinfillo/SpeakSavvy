/********************************************************************************
** Form generated from reading UI file 'gameswidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMESWIDGET_H
#define UI_GAMESWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GamesWidget
{
public:
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *HeaderLayout;
    QPushButton *howToPlayButton;
    QPushButton *GameButton;
    QPushButton *StatsButton;
    QLabel *SynonymLabel;
    QStackedWidget *stackedWidget;
    QWidget *HelpPage;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *howToPlay1_1;
    QTextEdit *howToPlaytext;
    QVBoxLayout *howToPlay2_2;
    QWidget *howToPlayEx1;
    QGridLayout *gridLayout_2;
    QLabel *fourth_let;
    QLabel *second_let;
    QLabel *first_let;
    QLabel *fifth_let;
    QLabel *third_let;
    QTextEdit *howToPlay1;
    QWidget *howToPlayEx2;
    QGridLayout *gridLayout_3;
    QLabel *howToPlaylet5;
    QLabel *howToPlaylet3;
    QLabel *howToPlaylet2;
    QLabel *howToPlaylet1;
    QLabel *howToPlaylet4;
    QTextEdit *howToPlay2;
    QWidget *howToPlayEx3;
    QGridLayout *gridLayout_4;
    QLabel *howToPlaylet10;
    QLabel *howToPlaylet9;
    QLabel *howToPlaylet8;
    QLabel *howToPlaylet6;
    QLabel *howToPlaylet7;
    QTextEdit *howToPlay3;
    QVBoxLayout *ContactLayout;
    QWidget *QuizPage;
    QVBoxLayout *verticalLayout_3;
    QWidget *LettersWidget;
    QGridLayout *gridLayout;
    QLabel *letter_44;
    QLabel *letter_41;
    QLabel *letter_52;
    QLabel *letter_32;
    QLabel *letter_23;
    QSpacerItem *verticalSpacer_2;
    QLabel *letter_43;
    QLabel *letter_62;
    QLabel *letter_64;
    QSpacerItem *horizontalSpacer_8;
    QLabel *letter_63;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_7;
    QLabel *letter_65;
    QLabel *letter_45;
    QLabel *letter_15;
    QLabel *letter_25;
    QLabel *letter_11;
    QLabel *letter_51;
    QLabel *letter_12;
    QLabel *letter_34;
    QLabel *letter_55;
    QLabel *letter_61;
    QLabel *letter_53;
    QLabel *letter_33;
    QLabel *letter_24;
    QLabel *letter_54;
    QLabel *letter_35;
    QLabel *letter_42;
    QLabel *letter_13;
    QLabel *letter_22;
    QLabel *letter_14;
    QLabel *letter_31;
    QLabel *letter_21;
    QWidget *KeyboardWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *KeyGroupLayout1;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *QKey;
    QPushButton *WKey;
    QPushButton *EKey;
    QPushButton *RKey;
    QPushButton *TKey;
    QPushButton *YKey;
    QPushButton *UKey;
    QPushButton *IKey;
    QPushButton *OKey;
    QPushButton *PKey;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *KeyGroupLayout2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *AKey;
    QPushButton *SKey;
    QPushButton *DKey;
    QPushButton *FKey;
    QPushButton *GKey;
    QPushButton *HKey;
    QPushButton *JKey;
    QPushButton *KKey;
    QPushButton *LKey;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *KeyGroupLayout3;
    QSpacerItem *horizontalSpacer;
    QPushButton *EnterKey;
    QPushButton *ZKey;
    QPushButton *XKey;
    QPushButton *CKey;
    QPushButton *VKey;
    QPushButton *BKey;
    QPushButton *NKey;
    QPushButton *MKey;
    QPushButton *BackespaceKey;
    QSpacerItem *horizontalSpacer_2;
    QWidget *StatsPage;
    QVBoxLayout *verticalLayout_4;
    QWidget *StatsWidgetNumRounds;
    QGridLayout *StatsLayout_1;
    QLabel *winsInPerc;
    QLabel *AllRoundsNum;
    QLabel *WinRoundsNum;
    QLabel *numOfRounds;
    QLabel *Statistics;
    QWidget *ProgressBarsAttempts;
    QGridLayout *StatsLayout_2;
    QLabel *sixthAttempt;
    QProgressBar *firstPrBar;
    QLabel *fifthAttempt;
    QLabel *firstAttempt;
    QLabel *thirdAttempt;
    QLabel *secondAttempt;
    QProgressBar *secondPrBar;
    QLabel *fourthAttempt;
    QProgressBar *thirdPrBar;
    QProgressBar *fourthPrBar;
    QProgressBar *fifthPrBar;
    QProgressBar *sixthPrBar;
    QButtonGroup *Keyboard;

    void setupUi(QWidget *GamesWidget)
    {
        if (GamesWidget->objectName().isEmpty())
            GamesWidget->setObjectName("GamesWidget");
        GamesWidget->resize(730, 809);
        verticalLayout_5 = new QVBoxLayout(GamesWidget);
        verticalLayout_5->setObjectName("verticalLayout_5");
        HeaderLayout = new QHBoxLayout();
        HeaderLayout->setSpacing(0);
        HeaderLayout->setObjectName("HeaderLayout");
        HeaderLayout->setContentsMargins(5, -1, 5, -1);
        howToPlayButton = new QPushButton(GamesWidget);
        howToPlayButton->setObjectName("howToPlayButton");
        howToPlayButton->setMinimumSize(QSize(55, 55));
        howToPlayButton->setMaximumSize(QSize(55, 55));
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
        howToPlayButton->setPalette(palette);
        QFont font;
        font.setFamilies({QString::fromUtf8("YuGothic")});
        howToPlayButton->setFont(font);
        howToPlayButton->setAutoFillBackground(false);
        howToPlayButton->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0)"));
        howToPlayButton->setIconSize(QSize(40, 40));
        howToPlayButton->setAutoDefault(false);
        howToPlayButton->setFlat(true);

        HeaderLayout->addWidget(howToPlayButton, 0, Qt::AlignVCenter);

        GameButton = new QPushButton(GamesWidget);
        GameButton->setObjectName("GameButton");
        GameButton->setMinimumSize(QSize(190, 63));
        GameButton->setMaximumSize(QSize(190, 63));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush11(QColor(245, 245, 245, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush11);
        QBrush brush12(QColor(204, 204, 204, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush12);
        QBrush brush13(QColor(82, 82, 82, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush13);
        QBrush brush14(QColor(109, 109, 109, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush14);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush15(QColor(209, 209, 209, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush15);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette1.setBrush(QPalette::Active, QPalette::Accent, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush13);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush14);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush15);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::Accent, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush14);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        QBrush brush16(QColor(163, 163, 163, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush16);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        QBrush brush17(QColor(82, 82, 82, 127));
        brush17.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush17);
#endif
        QBrush brush18(QColor(212, 212, 212, 255));
        brush18.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::Accent, brush18);
        GameButton->setPalette(palette1);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Yu Gothic UI Semibold")});
        font1.setPointSize(32);
        font1.setBold(true);
        GameButton->setFont(font1);
        GameButton->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0)"));
        GameButton->setFlat(true);

        HeaderLayout->addWidget(GameButton);

        StatsButton = new QPushButton(GamesWidget);
        StatsButton->setObjectName("StatsButton");
        StatsButton->setMinimumSize(QSize(55, 55));
        StatsButton->setMaximumSize(QSize(55, 55));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush19(QColor(217, 217, 217, 255));
        brush19.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush19);
        QBrush brush20(QColor(90, 90, 90, 255));
        brush20.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush20);
        QBrush brush21(QColor(119, 119, 119, 255));
        brush21.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush21);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush19);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette2.setBrush(QPalette::Active, QPalette::Accent, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush19);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush20);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush21);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush19);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::Accent, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush20);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush19);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush20);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush21);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush20);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush20);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        QBrush brush22(QColor(179, 179, 179, 255));
        brush22.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush22);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        QBrush brush23(QColor(90, 90, 90, 127));
        brush23.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush23);
#endif
        QBrush brush24(QColor(233, 233, 233, 255));
        brush24.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Disabled, QPalette::Accent, brush24);
        StatsButton->setPalette(palette2);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("YuGothic")});
        font2.setStyleStrategy(QFont::PreferDefault);
        StatsButton->setFont(font2);
        StatsButton->setCursor(QCursor(Qt::ArrowCursor));
        StatsButton->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0)"));
        StatsButton->setIconSize(QSize(40, 40));
        StatsButton->setAutoDefault(false);
        StatsButton->setFlat(true);

        HeaderLayout->addWidget(StatsButton, 0, Qt::AlignVCenter);


        verticalLayout_5->addLayout(HeaderLayout);

        SynonymLabel = new QLabel(GamesWidget);
        SynonymLabel->setObjectName("SynonymLabel");
        SynonymLabel->setFont(font);
        SynonymLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(SynonymLabel);

        stackedWidget = new QStackedWidget(GamesWidget);
        stackedWidget->setObjectName("stackedWidget");
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush25(QColor(220, 220, 220, 255));
        brush25.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush25);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush26(QColor(237, 237, 237, 255));
        brush26.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush26);
        QBrush brush27(QColor(110, 110, 110, 255));
        brush27.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush27);
        QBrush brush28(QColor(146, 146, 146, 255));
        brush28.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush28);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush25);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush26);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette3.setBrush(QPalette::Active, QPalette::Accent, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush25);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush26);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush27);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush28);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush25);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush26);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::Accent, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush27);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush25);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush26);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush27);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush28);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush27);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush27);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush25);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush25);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush25);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        QBrush brush29(QColor(110, 110, 110, 127));
        brush29.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush29);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::Accent, brush2);
        stackedWidget->setPalette(palette3);
        HelpPage = new QWidget();
        HelpPage->setObjectName("HelpPage");
        verticalLayout = new QVBoxLayout(HelpPage);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        howToPlay1_1 = new QVBoxLayout();
        howToPlay1_1->setObjectName("howToPlay1_1");
        howToPlay1_1->setContentsMargins(10, -1, 10, -1);
        howToPlaytext = new QTextEdit(HelpPage);
        howToPlaytext->setObjectName("howToPlaytext");
        howToPlaytext->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(howToPlaytext->sizePolicy().hasHeightForWidth());
        howToPlaytext->setSizePolicy(sizePolicy);
        howToPlaytext->setMinimumSize(QSize(0, 100));
        howToPlaytext->setMaximumSize(QSize(16777000, 100));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush30(QColor(212, 217, 221, 255));
        brush30.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush30);
        palette4.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush31(QColor(233, 236, 238, 255));
        brush31.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Midlight, brush31);
        QBrush brush32(QColor(106, 109, 110, 255));
        brush32.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush32);
        QBrush brush33(QColor(142, 145, 147, 255));
        brush33.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Mid, brush33);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush30);
        palette4.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Active, QPalette::AlternateBase, brush31);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette4.setBrush(QPalette::Active, QPalette::Accent, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush30);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Midlight, brush31);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush32);
        palette4.setBrush(QPalette::Inactive, QPalette::Mid, brush33);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush30);
        palette4.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush31);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::Accent, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush32);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush30);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Midlight, brush31);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush32);
        palette4.setBrush(QPalette::Disabled, QPalette::Mid, brush33);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush32);
        palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush32);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush30);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush30);
        palette4.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush30);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        QBrush brush34(QColor(106, 109, 110, 127));
        brush34.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush34);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::Accent, brush2);
        howToPlaytext->setPalette(palette4);
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial")});
        font3.setPointSize(12);
        howToPlaytext->setFont(font3);
        howToPlaytext->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        howToPlaytext->setMouseTracking(true);
        howToPlaytext->setAcceptDrops(true);
        howToPlaytext->setLayoutDirection(Qt::LeftToRight);
        howToPlaytext->setAutoFillBackground(false);
        howToPlaytext->setInputMethodHints(Qt::ImhMultiLine);
        howToPlaytext->setFrameShape(QFrame::NoFrame);
        howToPlaytext->setFrameShadow(QFrame::Sunken);
        howToPlaytext->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        howToPlaytext->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        howToPlaytext->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        howToPlaytext->setTabChangesFocus(false);
        howToPlaytext->setUndoRedoEnabled(false);
        howToPlaytext->setReadOnly(true);
        howToPlaytext->setAcceptRichText(false);
        howToPlaytext->setTextInteractionFlags(Qt::NoTextInteraction);

        howToPlay1_1->addWidget(howToPlaytext, 0, Qt::AlignVCenter);


        verticalLayout->addLayout(howToPlay1_1);

        howToPlay2_2 = new QVBoxLayout();
        howToPlay2_2->setSpacing(7);
        howToPlay2_2->setObjectName("howToPlay2_2");
        howToPlay2_2->setContentsMargins(10, 7, 10, 5);
        howToPlayEx1 = new QWidget(HelpPage);
        howToPlayEx1->setObjectName("howToPlayEx1");
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Arial")});
        howToPlayEx1->setFont(font4);
        howToPlayEx1->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font-family: Yu Ghotic UI Semibold;\n"
"	font-weight: bold;\n"
"	font-size: 18px;\n"
"	min-height: 55;\n"
"	min-width: 55;\n"
"	max-height: 55;\n"
"	max-width: 55;\n"
"	border: 2px solid gray;\n"
"	border-radius: 5px;\n"
"}"));
        gridLayout_2 = new QGridLayout(howToPlayEx1);
        gridLayout_2->setSpacing(7);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout_2->setContentsMargins(4, 0, 0, 0);
        fourth_let = new QLabel(howToPlayEx1);
        fourth_let->setObjectName("fourth_let");
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        fourth_let->setPalette(palette5);
        fourth_let->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(fourth_let, 2, 5, 1, 1);

        second_let = new QLabel(howToPlayEx1);
        second_let->setObjectName("second_let");
        QPalette palette6;
        QBrush brush35(QColor(3, 3, 3, 255));
        brush35.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush35);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush35);
        second_let->setPalette(palette6);
        second_let->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(second_let, 2, 2, 1, 1);

        first_let = new QLabel(howToPlayEx1);
        first_let->setObjectName("first_let");
        first_let->setEnabled(false);
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        QBrush brush36(QColor(255, 0, 127, 255));
        brush36.setStyle(Qt::SolidPattern);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush36);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush36);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush36);
        QBrush brush37(QColor(255, 255, 255, 128));
        brush37.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Active, QPalette::PlaceholderText, brush37);
#endif
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush36);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush36);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush36);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush37);
#endif
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush36);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush36);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush36);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush37);
#endif
        first_let->setPalette(palette7);
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Yu Ghotic UI Semibold")});
        font5.setBold(true);
        first_let->setFont(font5);
        first_let->setStyleSheet(QString::fromUtf8("background-color: #ff007f;\n"
"color: white;\n"
"border-style: hidden;"));
        first_let->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(first_let, 2, 1, 1, 1);

        fifth_let = new QLabel(howToPlayEx1);
        fifth_let->setObjectName("fifth_let");
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        fifth_let->setPalette(palette8);
        fifth_let->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(fifth_let, 2, 6, 1, 1);

        third_let = new QLabel(howToPlayEx1);
        third_let->setObjectName("third_let");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(third_let->sizePolicy().hasHeightForWidth());
        third_let->setSizePolicy(sizePolicy1);
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        third_let->setPalette(palette9);
        third_let->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(third_let, 2, 3, 1, 1);


        howToPlay2_2->addWidget(howToPlayEx1);

        howToPlay1 = new QTextEdit(HelpPage);
        howToPlay1->setObjectName("howToPlay1");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(howToPlay1->sizePolicy().hasHeightForWidth());
        howToPlay1->setSizePolicy(sizePolicy2);
        howToPlay1->setMinimumSize(QSize(0, 20));
        howToPlay1->setMaximumSize(QSize(16777215, 20));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush38(QColor(178, 181, 183, 255));
        brush38.setStyle(Qt::SolidPattern);
        palette10.setBrush(QPalette::Active, QPalette::Button, brush38);
        palette10.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush39(QColor(216, 218, 219, 255));
        brush39.setStyle(Qt::SolidPattern);
        palette10.setBrush(QPalette::Active, QPalette::Midlight, brush39);
        QBrush brush40(QColor(89, 90, 91, 255));
        brush40.setStyle(Qt::SolidPattern);
        palette10.setBrush(QPalette::Active, QPalette::Dark, brush40);
        QBrush brush41(QColor(119, 120, 122, 255));
        brush41.setStyle(Qt::SolidPattern);
        palette10.setBrush(QPalette::Active, QPalette::Mid, brush41);
        palette10.setBrush(QPalette::Active, QPalette::Text, brush);
        palette10.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush38);
        palette10.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette10.setBrush(QPalette::Active, QPalette::AlternateBase, brush39);
        palette10.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette10.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette10.setBrush(QPalette::Active, QPalette::Accent, brush2);
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush38);
        palette10.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette10.setBrush(QPalette::Inactive, QPalette::Midlight, brush39);
        palette10.setBrush(QPalette::Inactive, QPalette::Dark, brush40);
        palette10.setBrush(QPalette::Inactive, QPalette::Mid, brush41);
        palette10.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush38);
        palette10.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush39);
        palette10.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette10.setBrush(QPalette::Inactive, QPalette::Accent, brush2);
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush40);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush38);
        palette10.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette10.setBrush(QPalette::Disabled, QPalette::Midlight, brush39);
        palette10.setBrush(QPalette::Disabled, QPalette::Dark, brush40);
        palette10.setBrush(QPalette::Disabled, QPalette::Mid, brush41);
        palette10.setBrush(QPalette::Disabled, QPalette::Text, brush40);
        palette10.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush40);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush38);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush38);
        palette10.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush38);
        palette10.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        QBrush brush42(QColor(89, 90, 91, 127));
        brush42.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush42);
#endif
        QBrush brush43(QColor(232, 235, 237, 255));
        brush43.setStyle(Qt::SolidPattern);
        palette10.setBrush(QPalette::Disabled, QPalette::Accent, brush43);
        howToPlay1->setPalette(palette10);
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Yu Gothic UI")});
        font6.setPointSize(12);
        howToPlay1->setFont(font6);
        howToPlay1->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        howToPlay1->setFrameShape(QFrame::NoFrame);
        howToPlay1->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        howToPlay1->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        howToPlay1->setReadOnly(true);
        howToPlay1->setTextInteractionFlags(Qt::NoTextInteraction);

        howToPlay2_2->addWidget(howToPlay1);

        howToPlayEx2 = new QWidget(HelpPage);
        howToPlayEx2->setObjectName("howToPlayEx2");
        howToPlayEx2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font-family: Yu Ghotic UI Semibold;\n"
"	font-weight: bold;\n"
"	font-size: 18px;\n"
"	min-height: 55;\n"
"	min-width: 55;\n"
"	max-height: 55;\n"
"	max-width: 55;\n"
"	border: 2px solid gray;\n"
"	border-radius: 5px;\n"
"}"));
        gridLayout_3 = new QGridLayout(howToPlayEx2);
        gridLayout_3->setSpacing(7);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout_3->setContentsMargins(4, 0, 0, 0);
        howToPlaylet5 = new QLabel(howToPlayEx2);
        howToPlaylet5->setObjectName("howToPlaylet5");
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        howToPlaylet5->setPalette(palette11);
        howToPlaylet5->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(howToPlaylet5, 2, 6, 1, 1);

        howToPlaylet3 = new QLabel(howToPlayEx2);
        howToPlaylet3->setObjectName("howToPlaylet3");
        sizePolicy1.setHeightForWidth(howToPlaylet3->sizePolicy().hasHeightForWidth());
        howToPlaylet3->setSizePolicy(sizePolicy1);
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        howToPlaylet3->setPalette(palette12);
        howToPlaylet3->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(howToPlaylet3, 2, 3, 1, 1);

        howToPlaylet2 = new QLabel(howToPlayEx2);
        howToPlaylet2->setObjectName("howToPlaylet2");
        howToPlaylet2->setStyleSheet(QString::fromUtf8("background-color: #98fb98;\n"
"color: white;\n"
"border-style: hidden;"));
        howToPlaylet2->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(howToPlaylet2, 2, 2, 1, 1);

        howToPlaylet1 = new QLabel(howToPlayEx2);
        howToPlaylet1->setObjectName("howToPlaylet1");
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        howToPlaylet1->setPalette(palette13);
        howToPlaylet1->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(howToPlaylet1, 2, 1, 1, 1);

        howToPlaylet4 = new QLabel(howToPlayEx2);
        howToPlaylet4->setObjectName("howToPlaylet4");
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        howToPlaylet4->setPalette(palette14);
        howToPlaylet4->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(howToPlaylet4, 2, 5, 1, 1);


        howToPlay2_2->addWidget(howToPlayEx2);

        howToPlay2 = new QTextEdit(HelpPage);
        howToPlay2->setObjectName("howToPlay2");
        sizePolicy2.setHeightForWidth(howToPlay2->sizePolicy().hasHeightForWidth());
        howToPlay2->setSizePolicy(sizePolicy2);
        howToPlay2->setMinimumSize(QSize(0, 20));
        howToPlay2->setMaximumSize(QSize(16777215, 20));
        QPalette palette15;
        palette15.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush44(QColor(177, 179, 181, 255));
        brush44.setStyle(Qt::SolidPattern);
        palette15.setBrush(QPalette::Active, QPalette::Button, brush44);
        palette15.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush45(QColor(216, 217, 218, 255));
        brush45.setStyle(Qt::SolidPattern);
        palette15.setBrush(QPalette::Active, QPalette::Midlight, brush45);
        palette15.setBrush(QPalette::Active, QPalette::Dark, brush40);
        QBrush brush46(QColor(118, 120, 121, 255));
        brush46.setStyle(Qt::SolidPattern);
        palette15.setBrush(QPalette::Active, QPalette::Mid, brush46);
        palette15.setBrush(QPalette::Active, QPalette::Text, brush);
        palette15.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette15.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette15.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette15.setBrush(QPalette::Active, QPalette::Window, brush44);
        palette15.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette15.setBrush(QPalette::Active, QPalette::AlternateBase, brush45);
        palette15.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette15.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette15.setBrush(QPalette::Active, QPalette::Accent, brush2);
        palette15.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::Button, brush44);
        palette15.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette15.setBrush(QPalette::Inactive, QPalette::Midlight, brush45);
        palette15.setBrush(QPalette::Inactive, QPalette::Dark, brush40);
        palette15.setBrush(QPalette::Inactive, QPalette::Mid, brush46);
        palette15.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette15.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette15.setBrush(QPalette::Inactive, QPalette::Window, brush44);
        palette15.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush45);
        palette15.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette15.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette15.setBrush(QPalette::Inactive, QPalette::Accent, brush2);
        palette15.setBrush(QPalette::Disabled, QPalette::WindowText, brush40);
        palette15.setBrush(QPalette::Disabled, QPalette::Button, brush44);
        palette15.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette15.setBrush(QPalette::Disabled, QPalette::Midlight, brush45);
        palette15.setBrush(QPalette::Disabled, QPalette::Dark, brush40);
        palette15.setBrush(QPalette::Disabled, QPalette::Mid, brush46);
        palette15.setBrush(QPalette::Disabled, QPalette::Text, brush40);
        palette15.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette15.setBrush(QPalette::Disabled, QPalette::ButtonText, brush40);
        palette15.setBrush(QPalette::Disabled, QPalette::Base, brush44);
        palette15.setBrush(QPalette::Disabled, QPalette::Window, brush44);
        palette15.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette15.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush44);
        palette15.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette15.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush42);
#endif
        QBrush brush47(QColor(230, 233, 236, 255));
        brush47.setStyle(Qt::SolidPattern);
        palette15.setBrush(QPalette::Disabled, QPalette::Accent, brush47);
        howToPlay2->setPalette(palette15);
        howToPlay2->setFont(font6);
        howToPlay2->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        howToPlay2->setFrameShape(QFrame::NoFrame);
        howToPlay2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        howToPlay2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        howToPlay2->setReadOnly(true);
        howToPlay2->setTextInteractionFlags(Qt::NoTextInteraction);

        howToPlay2_2->addWidget(howToPlay2);

        howToPlayEx3 = new QWidget(HelpPage);
        howToPlayEx3->setObjectName("howToPlayEx3");
        howToPlayEx3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font-family: Yu Ghotic UI Semibold;\n"
"	font-weight: bold;\n"
"	font-size: 18px;\n"
"	min-height: 55;\n"
"	min-width: 55;\n"
"	max-height: 55;\n"
"	max-width: 55;\n"
"	border: 2px solid gray;\n"
"	border-radius: 5px;\n"
"}"));
        gridLayout_4 = new QGridLayout(howToPlayEx3);
        gridLayout_4->setSpacing(7);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout_4->setContentsMargins(4, 0, 0, 0);
        howToPlaylet10 = new QLabel(howToPlayEx3);
        howToPlaylet10->setObjectName("howToPlaylet10");
        QPalette palette16;
        palette16.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        howToPlaylet10->setPalette(palette16);
        howToPlaylet10->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(howToPlaylet10, 2, 6, 1, 1);

        howToPlaylet9 = new QLabel(howToPlayEx3);
        howToPlaylet9->setObjectName("howToPlaylet9");
        QPalette palette17;
        palette17.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        howToPlaylet9->setPalette(palette17);
        howToPlaylet9->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(howToPlaylet9, 2, 2, 1, 1);

        howToPlaylet8 = new QLabel(howToPlayEx3);
        howToPlaylet8->setObjectName("howToPlaylet8");
        sizePolicy1.setHeightForWidth(howToPlaylet8->sizePolicy().hasHeightForWidth());
        howToPlaylet8->setSizePolicy(sizePolicy1);
        QPalette palette18;
        palette18.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        howToPlaylet8->setPalette(palette18);
        howToPlaylet8->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(howToPlaylet8, 2, 3, 1, 1);

        howToPlaylet6 = new QLabel(howToPlayEx3);
        howToPlaylet6->setObjectName("howToPlaylet6");
        QPalette palette19;
        palette19.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        howToPlaylet6->setPalette(palette19);
        howToPlaylet6->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(howToPlaylet6, 2, 1, 1, 1);

        howToPlaylet7 = new QLabel(howToPlayEx3);
        howToPlaylet7->setObjectName("howToPlaylet7");
        howToPlaylet7->setStyleSheet(QString::fromUtf8("background-color: #66ccff;\n"
"color: white;\n"
"border-style: hidden;"));
        howToPlaylet7->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(howToPlaylet7, 2, 5, 1, 1);


        howToPlay2_2->addWidget(howToPlayEx3);

        howToPlay3 = new QTextEdit(HelpPage);
        howToPlay3->setObjectName("howToPlay3");
        sizePolicy2.setHeightForWidth(howToPlay3->sizePolicy().hasHeightForWidth());
        howToPlay3->setSizePolicy(sizePolicy2);
        howToPlay3->setMinimumSize(QSize(0, 20));
        howToPlay3->setMaximumSize(QSize(16777215, 20));
        QPalette palette20;
        palette20.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush48(QColor(175, 177, 179, 255));
        brush48.setStyle(Qt::SolidPattern);
        palette20.setBrush(QPalette::Active, QPalette::Button, brush48);
        palette20.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush49(QColor(215, 216, 217, 255));
        brush49.setStyle(Qt::SolidPattern);
        palette20.setBrush(QPalette::Active, QPalette::Midlight, brush49);
        QBrush brush50(QColor(87, 88, 89, 255));
        brush50.setStyle(Qt::SolidPattern);
        palette20.setBrush(QPalette::Active, QPalette::Dark, brush50);
        QBrush brush51(QColor(116, 118, 119, 255));
        brush51.setStyle(Qt::SolidPattern);
        palette20.setBrush(QPalette::Active, QPalette::Mid, brush51);
        palette20.setBrush(QPalette::Active, QPalette::Text, brush);
        palette20.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette20.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette20.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette20.setBrush(QPalette::Active, QPalette::Window, brush48);
        palette20.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette20.setBrush(QPalette::Active, QPalette::AlternateBase, brush49);
        palette20.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette20.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette20.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette20.setBrush(QPalette::Active, QPalette::Accent, brush2);
        palette20.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::Button, brush48);
        palette20.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette20.setBrush(QPalette::Inactive, QPalette::Midlight, brush49);
        palette20.setBrush(QPalette::Inactive, QPalette::Dark, brush50);
        palette20.setBrush(QPalette::Inactive, QPalette::Mid, brush51);
        palette20.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette20.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette20.setBrush(QPalette::Inactive, QPalette::Window, brush48);
        palette20.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush49);
        palette20.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette20.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette20.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette20.setBrush(QPalette::Inactive, QPalette::Accent, brush2);
        palette20.setBrush(QPalette::Disabled, QPalette::WindowText, brush50);
        palette20.setBrush(QPalette::Disabled, QPalette::Button, brush48);
        palette20.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette20.setBrush(QPalette::Disabled, QPalette::Midlight, brush49);
        palette20.setBrush(QPalette::Disabled, QPalette::Dark, brush50);
        palette20.setBrush(QPalette::Disabled, QPalette::Mid, brush51);
        palette20.setBrush(QPalette::Disabled, QPalette::Text, brush50);
        palette20.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette20.setBrush(QPalette::Disabled, QPalette::ButtonText, brush50);
        palette20.setBrush(QPalette::Disabled, QPalette::Base, brush48);
        palette20.setBrush(QPalette::Disabled, QPalette::Window, brush48);
        palette20.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette20.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush48);
        palette20.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette20.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        QBrush brush52(QColor(87, 88, 89, 127));
        brush52.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette20.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush52);
#endif
        QBrush brush53(QColor(227, 230, 232, 255));
        brush53.setStyle(Qt::SolidPattern);
        palette20.setBrush(QPalette::Disabled, QPalette::Accent, brush53);
        howToPlay3->setPalette(palette20);
        howToPlay3->setFont(font6);
        howToPlay3->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        howToPlay3->setFrameShape(QFrame::NoFrame);
        howToPlay3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        howToPlay3->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        howToPlay3->setReadOnly(true);
        howToPlay3->setTextInteractionFlags(Qt::NoTextInteraction);

        howToPlay2_2->addWidget(howToPlay3);


        verticalLayout->addLayout(howToPlay2_2);

        ContactLayout = new QVBoxLayout();
        ContactLayout->setObjectName("ContactLayout");
        ContactLayout->setContentsMargins(10, 2, 10, 0);

        verticalLayout->addLayout(ContactLayout);

        stackedWidget->addWidget(HelpPage);
        QuizPage = new QWidget();
        QuizPage->setObjectName("QuizPage");
        verticalLayout_3 = new QVBoxLayout(QuizPage);
        verticalLayout_3->setSpacing(10);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_3->setContentsMargins(0, 0, 0, 20);
        LettersWidget = new QWidget(QuizPage);
        LettersWidget->setObjectName("LettersWidget");
        LettersWidget->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font-family: Yu Ghotic UI Semibold;\n"
"	font-weight: bold;\n"
"	font-size: 18px;\n"
"	min-height: 55;\n"
"	min-width: 55;\n"
"	max-height: 55;\n"
"	max-width: 55;\n"
"	border: 2px solid gray;\n"
"	border-radius: 5px;\n"
"}"));
        gridLayout = new QGridLayout(LettersWidget);
        gridLayout->setSpacing(7);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        letter_44 = new QLabel(LettersWidget);
        letter_44->setObjectName("letter_44");
        QPalette palette21;
        palette21.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette21.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        letter_44->setPalette(palette21);
        letter_44->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(letter_44, 8, 5, 1, 1);

        letter_41 = new QLabel(LettersWidget);
        letter_41->setObjectName("letter_41");
        QPalette palette22;
        palette22.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette22.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        letter_41->setPalette(palette22);
        letter_41->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(letter_41, 8, 1, 1, 1);

        letter_52 = new QLabel(LettersWidget);
        letter_52->setObjectName("letter_52");
        QPalette palette23;
        palette23.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette23.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        letter_52->setPalette(palette23);
        letter_52->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(letter_52, 9, 2, 1, 1);

        letter_32 = new QLabel(LettersWidget);
        letter_32->setObjectName("letter_32");
        QPalette palette24;
        palette24.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette24.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        letter_32->setPalette(palette24);
        letter_32->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(letter_32, 7, 2, 1, 1);

        letter_23 = new QLabel(LettersWidget);
        letter_23->setObjectName("letter_23");
        QPalette palette25;
        palette25.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette25.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        letter_23->setPalette(palette25);
        letter_23->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(letter_23, 6, 3, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 11, 3, 1, 1);

        letter_43 = new QLabel(LettersWidget);
        letter_43->setObjectName("letter_43");
        QPalette palette26;
        QBrush brush54(QColor(1, 1, 1, 255));
        brush54.setStyle(Qt::SolidPattern);
        palette26.setBrush(QPalette::Active, QPalette::WindowText, brush54);
        palette26.setBrush(QPalette::Inactive, QPalette::WindowText, brush54);
        letter_43->setPalette(palette26);
        letter_43->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(letter_43, 8, 3, 1, 1);

        letter_62 = new QLabel(LettersWidget);
        letter_62->setObjectName("letter_62");
        QPalette palette27;
        palette27.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette27.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        letter_62->setPalette(palette27);
        letter_62->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(letter_62, 10, 2, 1, 1);

        letter_64 = new QLabel(LettersWidget);
        letter_64->setObjectName("letter_64");
        QPalette palette28;
        palette28.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette28.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        letter_64->setPalette(palette28);
        letter_64->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(letter_64, 10, 5, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_8, 7, 7, 1, 1);

        letter_63 = new QLabel(LettersWidget);
        letter_63->setObjectName("letter_63");
        QPalette palette29;
        palette29.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette29.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        letter_63->setPalette(palette29);
        letter_63->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(letter_63, 10, 3, 1, 1);

        verticalSpacer = new QSpacerItem(20, 56, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 3, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 7, 0, 1, 1);

        letter_65 = new QLabel(LettersWidget);
        letter_65->setObjectName("letter_65");
        QPalette palette30;
        palette30.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette30.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        letter_65->setPalette(palette30);
        letter_65->setFont(font5);
        letter_65->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(letter_65, 10, 6, 1, 1);

        letter_45 = new QLabel(LettersWidget);
        letter_45->setObjectName("letter_45");
        QPalette palette31;
        palette31.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette31.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        letter_45->setPalette(palette31);
        letter_45->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(letter_45, 8, 6, 1, 1);

        letter_15 = new QLabel(LettersWidget);
        letter_15->setObjectName("letter_15");
        QPalette palette32;
        palette32.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette32.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        letter_15->setPalette(palette32);
        letter_15->setFont(font5);
        letter_15->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(letter_15, 5, 6, 1, 1);

        letter_25 = new QLabel(LettersWidget);
        letter_25->setObjectName("letter_25");
        QPalette palette33;
        palette33.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette33.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        letter_25->setPalette(palette33);
        letter_25->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(letter_25, 6, 6, 1, 1);

        letter_11 = new QLabel(LettersWidget);
        letter_11->setObjectName("letter_11");
        QPalette palette34;
        palette34.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette34.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        letter_11->setPalette(palette34);
        QFont font7;
        font7.setFamilies({QString::fromUtf8("Arial")});
        font7.setPointSize(13);
        font7.setBold(false);
        font7.setItalic(false);
        font7.setKerning(false);
        letter_11->setFont(font7);
        letter_11->setStyleSheet(QString::fromUtf8("font: 13pt \"Arial\";"));
        letter_11->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(letter_11, 5, 1, 1, 1);

        letter_51 = new QLabel(LettersWidget);
        letter_51->setObjectName("letter_51");
        QPalette palette35;
        palette35.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette35.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        letter_51->setPalette(palette35);
        letter_51->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(letter_51, 9, 1, 1, 1);

        letter_12 = new QLabel(LettersWidget);
        letter_12->setObjectName("letter_12");
        QPalette palette36;
        palette36.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette36.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        letter_12->setPalette(palette36);
        letter_12->setStyleSheet(QString::fromUtf8("font: 13pt \"Arial\";"));
        letter_12->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(letter_12, 5, 2, 1, 1);

        letter_34 = new QLabel(LettersWidget);
        letter_34->setObjectName("letter_34");
        QPalette palette37;
        palette37.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette37.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        letter_34->setPalette(palette37);
        letter_34->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(letter_34, 7, 5, 1, 1);

        letter_55 = new QLabel(LettersWidget);
        letter_55->setObjectName("letter_55");
        QPalette palette38;
        palette38.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette38.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        letter_55->setPalette(palette38);
        letter_55->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(letter_55, 9, 6, 1, 1);

        letter_61 = new QLabel(LettersWidget);
        letter_61->setObjectName("letter_61");
        QPalette palette39;
        palette39.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette39.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        letter_61->setPalette(palette39);
        letter_61->setFont(font5);
        letter_61->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(letter_61, 10, 1, 1, 1);

        letter_53 = new QLabel(LettersWidget);
        letter_53->setObjectName("letter_53");
        QPalette palette40;
        palette40.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette40.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        letter_53->setPalette(palette40);
        letter_53->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(letter_53, 9, 3, 1, 1);

        letter_33 = new QLabel(LettersWidget);
        letter_33->setObjectName("letter_33");
        QPalette palette41;
        palette41.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette41.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        letter_33->setPalette(palette41);
        letter_33->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(letter_33, 7, 3, 1, 1);

        letter_24 = new QLabel(LettersWidget);
        letter_24->setObjectName("letter_24");
        QPalette palette42;
        palette42.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette42.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        letter_24->setPalette(palette42);
        letter_24->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(letter_24, 6, 5, 1, 1);

        letter_54 = new QLabel(LettersWidget);
        letter_54->setObjectName("letter_54");
        QPalette palette43;
        palette43.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette43.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        letter_54->setPalette(palette43);
        letter_54->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(letter_54, 9, 5, 1, 1);

        letter_35 = new QLabel(LettersWidget);
        letter_35->setObjectName("letter_35");
        QPalette palette44;
        palette44.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette44.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        letter_35->setPalette(palette44);
        letter_35->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(letter_35, 7, 6, 1, 1);

        letter_42 = new QLabel(LettersWidget);
        letter_42->setObjectName("letter_42");
        QPalette palette45;
        palette45.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette45.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        letter_42->setPalette(palette45);
        letter_42->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(letter_42, 8, 2, 1, 1);

        letter_13 = new QLabel(LettersWidget);
        letter_13->setObjectName("letter_13");
        sizePolicy1.setHeightForWidth(letter_13->sizePolicy().hasHeightForWidth());
        letter_13->setSizePolicy(sizePolicy1);
        QPalette palette46;
        palette46.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette46.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        letter_13->setPalette(palette46);
        letter_13->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(letter_13, 5, 3, 1, 1);

        letter_22 = new QLabel(LettersWidget);
        letter_22->setObjectName("letter_22");
        QPalette palette47;
        palette47.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette47.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        letter_22->setPalette(palette47);
        letter_22->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(letter_22, 6, 2, 1, 1);

        letter_14 = new QLabel(LettersWidget);
        letter_14->setObjectName("letter_14");
        QPalette palette48;
        palette48.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette48.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        letter_14->setPalette(palette48);
        letter_14->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(letter_14, 5, 5, 1, 1);

        letter_31 = new QLabel(LettersWidget);
        letter_31->setObjectName("letter_31");
        QPalette palette49;
        palette49.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette49.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        letter_31->setPalette(palette49);
        letter_31->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(letter_31, 7, 1, 1, 1);

        letter_21 = new QLabel(LettersWidget);
        letter_21->setObjectName("letter_21");
        QPalette palette50;
        palette50.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette50.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        letter_21->setPalette(palette50);
        letter_21->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(letter_21, 6, 1, 1, 1);


        verticalLayout_3->addWidget(LettersWidget);

        KeyboardWidget = new QWidget(QuizPage);
        KeyboardWidget->setObjectName("KeyboardWidget");
        KeyboardWidget->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font-size: 16px;\n"
"	font-family: Yu Ghotic UI Semibold;\n"
"	background-color: lightgray;\n"
"	border-radius: 5px;\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(KeyboardWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(1, -1, 1, -1);
        KeyGroupLayout1 = new QHBoxLayout();
        KeyGroupLayout1->setSpacing(5);
        KeyGroupLayout1->setObjectName("KeyGroupLayout1");
        KeyGroupLayout1->setContentsMargins(0, -1, 0, -1);
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        KeyGroupLayout1->addItem(horizontalSpacer_5);

        QKey = new QPushButton(KeyboardWidget);
        Keyboard = new QButtonGroup(GamesWidget);
        Keyboard->setObjectName("Keyboard");
        Keyboard->addButton(QKey);
        QKey->setObjectName("QKey");
        QKey->setMinimumSize(QSize(40, 55));
        QKey->setMaximumSize(QSize(40, 55));

        KeyGroupLayout1->addWidget(QKey);

        WKey = new QPushButton(KeyboardWidget);
        Keyboard->addButton(WKey);
        WKey->setObjectName("WKey");
        WKey->setMinimumSize(QSize(40, 55));
        WKey->setMaximumSize(QSize(40, 55));

        KeyGroupLayout1->addWidget(WKey);

        EKey = new QPushButton(KeyboardWidget);
        Keyboard->addButton(EKey);
        EKey->setObjectName("EKey");
        EKey->setMinimumSize(QSize(40, 55));
        EKey->setMaximumSize(QSize(40, 55));

        KeyGroupLayout1->addWidget(EKey);

        RKey = new QPushButton(KeyboardWidget);
        Keyboard->addButton(RKey);
        RKey->setObjectName("RKey");
        RKey->setMinimumSize(QSize(40, 55));
        RKey->setMaximumSize(QSize(40, 55));

        KeyGroupLayout1->addWidget(RKey);

        TKey = new QPushButton(KeyboardWidget);
        Keyboard->addButton(TKey);
        TKey->setObjectName("TKey");
        TKey->setMinimumSize(QSize(40, 55));
        TKey->setMaximumSize(QSize(40, 55));

        KeyGroupLayout1->addWidget(TKey);

        YKey = new QPushButton(KeyboardWidget);
        Keyboard->addButton(YKey);
        YKey->setObjectName("YKey");
        YKey->setMinimumSize(QSize(40, 55));
        YKey->setMaximumSize(QSize(40, 55));

        KeyGroupLayout1->addWidget(YKey);

        UKey = new QPushButton(KeyboardWidget);
        Keyboard->addButton(UKey);
        UKey->setObjectName("UKey");
        UKey->setMinimumSize(QSize(40, 55));
        UKey->setMaximumSize(QSize(40, 55));

        KeyGroupLayout1->addWidget(UKey);

        IKey = new QPushButton(KeyboardWidget);
        Keyboard->addButton(IKey);
        IKey->setObjectName("IKey");
        IKey->setMinimumSize(QSize(40, 55));
        IKey->setMaximumSize(QSize(40, 55));

        KeyGroupLayout1->addWidget(IKey);

        OKey = new QPushButton(KeyboardWidget);
        Keyboard->addButton(OKey);
        OKey->setObjectName("OKey");
        OKey->setMinimumSize(QSize(40, 55));
        OKey->setMaximumSize(QSize(40, 55));

        KeyGroupLayout1->addWidget(OKey);

        PKey = new QPushButton(KeyboardWidget);
        Keyboard->addButton(PKey);
        PKey->setObjectName("PKey");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(55);
        sizePolicy3.setVerticalStretch(65);
        sizePolicy3.setHeightForWidth(PKey->sizePolicy().hasHeightForWidth());
        PKey->setSizePolicy(sizePolicy3);
        PKey->setMinimumSize(QSize(40, 55));
        PKey->setMaximumSize(QSize(40, 55));

        KeyGroupLayout1->addWidget(PKey);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        KeyGroupLayout1->addItem(horizontalSpacer_6);


        verticalLayout_2->addLayout(KeyGroupLayout1);

        KeyGroupLayout2 = new QHBoxLayout();
        KeyGroupLayout2->setSpacing(5);
        KeyGroupLayout2->setObjectName("KeyGroupLayout2");
        KeyGroupLayout2->setContentsMargins(0, 0, 0, -1);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        KeyGroupLayout2->addItem(horizontalSpacer_3);

        AKey = new QPushButton(KeyboardWidget);
        Keyboard->addButton(AKey);
        AKey->setObjectName("AKey");
        AKey->setMinimumSize(QSize(40, 55));
        AKey->setMaximumSize(QSize(40, 55));

        KeyGroupLayout2->addWidget(AKey);

        SKey = new QPushButton(KeyboardWidget);
        Keyboard->addButton(SKey);
        SKey->setObjectName("SKey");
        SKey->setMinimumSize(QSize(40, 55));
        SKey->setMaximumSize(QSize(40, 55));

        KeyGroupLayout2->addWidget(SKey);

        DKey = new QPushButton(KeyboardWidget);
        Keyboard->addButton(DKey);
        DKey->setObjectName("DKey");
        DKey->setMinimumSize(QSize(40, 55));
        DKey->setMaximumSize(QSize(40, 55));

        KeyGroupLayout2->addWidget(DKey);

        FKey = new QPushButton(KeyboardWidget);
        Keyboard->addButton(FKey);
        FKey->setObjectName("FKey");
        FKey->setMinimumSize(QSize(40, 55));
        FKey->setMaximumSize(QSize(40, 55));

        KeyGroupLayout2->addWidget(FKey);

        GKey = new QPushButton(KeyboardWidget);
        Keyboard->addButton(GKey);
        GKey->setObjectName("GKey");
        GKey->setMinimumSize(QSize(40, 55));
        GKey->setMaximumSize(QSize(40, 55));

        KeyGroupLayout2->addWidget(GKey);

        HKey = new QPushButton(KeyboardWidget);
        Keyboard->addButton(HKey);
        HKey->setObjectName("HKey");
        HKey->setMinimumSize(QSize(40, 55));
        HKey->setMaximumSize(QSize(40, 55));

        KeyGroupLayout2->addWidget(HKey);

        JKey = new QPushButton(KeyboardWidget);
        Keyboard->addButton(JKey);
        JKey->setObjectName("JKey");
        JKey->setMinimumSize(QSize(40, 55));
        JKey->setMaximumSize(QSize(40, 55));

        KeyGroupLayout2->addWidget(JKey);

        KKey = new QPushButton(KeyboardWidget);
        Keyboard->addButton(KKey);
        KKey->setObjectName("KKey");
        KKey->setMinimumSize(QSize(40, 55));
        KKey->setMaximumSize(QSize(40, 55));
        KKey->setStyleSheet(QString::fromUtf8(""));

        KeyGroupLayout2->addWidget(KKey);

        LKey = new QPushButton(KeyboardWidget);
        Keyboard->addButton(LKey);
        LKey->setObjectName("LKey");
        LKey->setMinimumSize(QSize(40, 55));
        LKey->setMaximumSize(QSize(40, 55));

        KeyGroupLayout2->addWidget(LKey);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        KeyGroupLayout2->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(KeyGroupLayout2);

        KeyGroupLayout3 = new QHBoxLayout();
        KeyGroupLayout3->setSpacing(5);
        KeyGroupLayout3->setObjectName("KeyGroupLayout3");
        KeyGroupLayout3->setContentsMargins(0, -1, 0, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        KeyGroupLayout3->addItem(horizontalSpacer);

        EnterKey = new QPushButton(KeyboardWidget);
        EnterKey->setObjectName("EnterKey");
        EnterKey->setMinimumSize(QSize(62, 55));
        EnterKey->setMaximumSize(QSize(62, 55));
        QPalette palette51;
        QBrush brush55(QColor(211, 211, 211, 255));
        brush55.setStyle(Qt::SolidPattern);
        palette51.setBrush(QPalette::Active, QPalette::Button, brush55);
        palette51.setBrush(QPalette::Active, QPalette::Base, brush55);
        palette51.setBrush(QPalette::Active, QPalette::Window, brush55);
        palette51.setBrush(QPalette::Inactive, QPalette::Button, brush55);
        palette51.setBrush(QPalette::Inactive, QPalette::Base, brush55);
        palette51.setBrush(QPalette::Inactive, QPalette::Window, brush55);
        palette51.setBrush(QPalette::Disabled, QPalette::Button, brush55);
        palette51.setBrush(QPalette::Disabled, QPalette::Base, brush55);
        palette51.setBrush(QPalette::Disabled, QPalette::Window, brush55);
        EnterKey->setPalette(palette51);
        EnterKey->setIconSize(QSize(25, 25));

        KeyGroupLayout3->addWidget(EnterKey);

        ZKey = new QPushButton(KeyboardWidget);
        Keyboard->addButton(ZKey);
        ZKey->setObjectName("ZKey");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy4.setHorizontalStretch(45);
        sizePolicy4.setVerticalStretch(55);
        sizePolicy4.setHeightForWidth(ZKey->sizePolicy().hasHeightForWidth());
        ZKey->setSizePolicy(sizePolicy4);
        ZKey->setMinimumSize(QSize(40, 55));
        ZKey->setMaximumSize(QSize(40, 55));

        KeyGroupLayout3->addWidget(ZKey);

        XKey = new QPushButton(KeyboardWidget);
        Keyboard->addButton(XKey);
        XKey->setObjectName("XKey");
        XKey->setMinimumSize(QSize(40, 55));
        XKey->setMaximumSize(QSize(40, 55));

        KeyGroupLayout3->addWidget(XKey);

        CKey = new QPushButton(KeyboardWidget);
        Keyboard->addButton(CKey);
        CKey->setObjectName("CKey");
        CKey->setMinimumSize(QSize(40, 55));
        CKey->setMaximumSize(QSize(40, 55));

        KeyGroupLayout3->addWidget(CKey);

        VKey = new QPushButton(KeyboardWidget);
        Keyboard->addButton(VKey);
        VKey->setObjectName("VKey");
        VKey->setMinimumSize(QSize(40, 55));
        VKey->setMaximumSize(QSize(40, 55));

        KeyGroupLayout3->addWidget(VKey);

        BKey = new QPushButton(KeyboardWidget);
        Keyboard->addButton(BKey);
        BKey->setObjectName("BKey");
        BKey->setMinimumSize(QSize(40, 55));
        BKey->setMaximumSize(QSize(40, 55));

        KeyGroupLayout3->addWidget(BKey);

        NKey = new QPushButton(KeyboardWidget);
        Keyboard->addButton(NKey);
        NKey->setObjectName("NKey");
        NKey->setMinimumSize(QSize(40, 55));
        NKey->setMaximumSize(QSize(40, 55));

        KeyGroupLayout3->addWidget(NKey);

        MKey = new QPushButton(KeyboardWidget);
        Keyboard->addButton(MKey);
        MKey->setObjectName("MKey");
        MKey->setMinimumSize(QSize(40, 55));
        MKey->setMaximumSize(QSize(40, 55));

        KeyGroupLayout3->addWidget(MKey);

        BackespaceKey = new QPushButton(KeyboardWidget);
        BackespaceKey->setObjectName("BackespaceKey");
        BackespaceKey->setMinimumSize(QSize(62, 55));
        BackespaceKey->setMaximumSize(QSize(62, 55));
        QPalette palette52;
        palette52.setBrush(QPalette::Active, QPalette::Button, brush55);
        palette52.setBrush(QPalette::Active, QPalette::Base, brush55);
        palette52.setBrush(QPalette::Active, QPalette::Window, brush55);
        palette52.setBrush(QPalette::Inactive, QPalette::Button, brush55);
        palette52.setBrush(QPalette::Inactive, QPalette::Base, brush55);
        palette52.setBrush(QPalette::Inactive, QPalette::Window, brush55);
        palette52.setBrush(QPalette::Disabled, QPalette::Button, brush55);
        palette52.setBrush(QPalette::Disabled, QPalette::Base, brush55);
        palette52.setBrush(QPalette::Disabled, QPalette::Window, brush55);
        BackespaceKey->setPalette(palette52);
        BackespaceKey->setIconSize(QSize(25, 25));

        KeyGroupLayout3->addWidget(BackespaceKey);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        KeyGroupLayout3->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(KeyGroupLayout3);


        verticalLayout_3->addWidget(KeyboardWidget);

        stackedWidget->addWidget(QuizPage);
        StatsPage = new QWidget();
        StatsPage->setObjectName("StatsPage");
        verticalLayout_4 = new QVBoxLayout(StatsPage);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(-1, 4, -1, 10);
        StatsWidgetNumRounds = new QWidget(StatsPage);
        StatsWidgetNumRounds->setObjectName("StatsWidgetNumRounds");
        StatsWidgetNumRounds->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font-family: Yu Ghotic UI;\n"
"	font-weight: 600;\n"
"	font-size: 40px;\n"
"	min-height: 30;\n"
"	min-width: 100;\n"
"	max-height: 30;\n"
"	max-width: 100;\n"
"}"));
        StatsLayout_1 = new QGridLayout(StatsWidgetNumRounds);
        StatsLayout_1->setSpacing(11);
        StatsLayout_1->setObjectName("StatsLayout_1");
        StatsLayout_1->setContentsMargins(0, 40, 0, 30);
        winsInPerc = new QLabel(StatsWidgetNumRounds);
        winsInPerc->setObjectName("winsInPerc");
        QSizePolicy sizePolicy5(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(winsInPerc->sizePolicy().hasHeightForWidth());
        winsInPerc->setSizePolicy(sizePolicy5);
        winsInPerc->setMinimumSize(QSize(100, 40));
        winsInPerc->setMaximumSize(QSize(100, 40));
        QPalette palette53;
        palette53.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette53.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        winsInPerc->setPalette(palette53);
        winsInPerc->setStyleSheet(QString::fromUtf8("font-family: Yu Ghotic UI;\n"
"font-weight: 200;\n"
"font-size: 16px;\n"
"min-height: 40;\n"
"min-width: 100;\n"
"max-height: 40;\n"
"max-width: 100;"));
        winsInPerc->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        StatsLayout_1->addWidget(winsInPerc, 2, 1, 1, 1);

        AllRoundsNum = new QLabel(StatsWidgetNumRounds);
        AllRoundsNum->setObjectName("AllRoundsNum");
        QSizePolicy sizePolicy6(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Maximum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(AllRoundsNum->sizePolicy().hasHeightForWidth());
        AllRoundsNum->setSizePolicy(sizePolicy6);
        AllRoundsNum->setMinimumSize(QSize(100, 30));
        AllRoundsNum->setMaximumSize(QSize(100, 30));
        QPalette palette54;
        palette54.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette54.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        AllRoundsNum->setPalette(palette54);
        QFont font8;
        font8.setFamilies({QString::fromUtf8("Yu Ghotic UI")});
        font8.setWeight(QFont::DemiBold);
        AllRoundsNum->setFont(font8);
        AllRoundsNum->setAlignment(Qt::AlignCenter);

        StatsLayout_1->addWidget(AllRoundsNum, 0, 0, 1, 1);

        WinRoundsNum = new QLabel(StatsWidgetNumRounds);
        WinRoundsNum->setObjectName("WinRoundsNum");
        sizePolicy6.setHeightForWidth(WinRoundsNum->sizePolicy().hasHeightForWidth());
        WinRoundsNum->setSizePolicy(sizePolicy6);
        WinRoundsNum->setMinimumSize(QSize(100, 30));
        WinRoundsNum->setMaximumSize(QSize(100, 30));
        QPalette palette55;
        palette55.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette55.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        WinRoundsNum->setPalette(palette55);
        WinRoundsNum->setAlignment(Qt::AlignCenter);

        StatsLayout_1->addWidget(WinRoundsNum, 0, 1, 1, 1);

        numOfRounds = new QLabel(StatsWidgetNumRounds);
        numOfRounds->setObjectName("numOfRounds");
        sizePolicy5.setHeightForWidth(numOfRounds->sizePolicy().hasHeightForWidth());
        numOfRounds->setSizePolicy(sizePolicy5);
        numOfRounds->setMinimumSize(QSize(100, 40));
        numOfRounds->setMaximumSize(QSize(100, 40));
        QPalette palette56;
        palette56.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette56.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        numOfRounds->setPalette(palette56);
        numOfRounds->setStyleSheet(QString::fromUtf8("font-family: Yu Ghotic UI;\n"
"font-weight: 200;\n"
"font-size: 16px;\n"
"min-height: 40;\n"
"min-width: 100;\n"
"max-height: 40;\n"
"max-width: 100;\n"
""));
        numOfRounds->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        StatsLayout_1->addWidget(numOfRounds, 2, 0, 1, 1);


        verticalLayout_4->addWidget(StatsWidgetNumRounds);

        Statistics = new QLabel(StatsPage);
        Statistics->setObjectName("Statistics");
        sizePolicy2.setHeightForWidth(Statistics->sizePolicy().hasHeightForWidth());
        Statistics->setSizePolicy(sizePolicy2);
        QPalette palette57;
        palette57.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette57.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        Statistics->setPalette(palette57);
        QFont font9;
        font9.setFamilies({QString::fromUtf8("Yu Gothic UI")});
        font9.setPointSize(18);
        font9.setBold(true);
        Statistics->setFont(font9);
        Statistics->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(Statistics);

        ProgressBarsAttempts = new QWidget(StatsPage);
        ProgressBarsAttempts->setObjectName("ProgressBarsAttempts");
        ProgressBarsAttempts->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font-family: Yu Ghotic UI Semibold;\n"
"	font-weight: 200;\n"
"	font-size: 20px;\n"
"	min-height: 20;\n"
"	min-width: 20;\n"
"	max-height: 20;\n"
"	max-width: 20;\n"
"}\n"
"QProgressBar {\n"
"	font-family: Yu Ghotic UI Semibold;\n"
"	font-weight: 200;\n"
"	font-size: 20px;\n"
"	border-style: hidden;\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"}\n"
"\n"
"QProgressBar::chunk {\n"
"    background-color: lightgray;\n"
"	border-radius: 2px;\n"
"}"));
        StatsLayout_2 = new QGridLayout(ProgressBarsAttempts);
        StatsLayout_2->setObjectName("StatsLayout_2");
        StatsLayout_2->setVerticalSpacing(11);
        StatsLayout_2->setContentsMargins(0, 10, 24, 10);
        sixthAttempt = new QLabel(ProgressBarsAttempts);
        sixthAttempt->setObjectName("sixthAttempt");
        QPalette palette58;
        palette58.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette58.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        sixthAttempt->setPalette(palette58);
        sixthAttempt->setAlignment(Qt::AlignCenter);

        StatsLayout_2->addWidget(sixthAttempt, 5, 0, 1, 1);

        firstPrBar = new QProgressBar(ProgressBarsAttempts);
        firstPrBar->setObjectName("firstPrBar");
        QPalette palette59;
        QBrush brush56(QColor(255, 255, 255, 0));
        brush56.setStyle(Qt::SolidPattern);
        palette59.setBrush(QPalette::Active, QPalette::Button, brush56);
        palette59.setBrush(QPalette::Active, QPalette::Base, brush56);
        palette59.setBrush(QPalette::Active, QPalette::Window, brush56);
        palette59.setBrush(QPalette::Inactive, QPalette::Button, brush56);
        palette59.setBrush(QPalette::Inactive, QPalette::Base, brush56);
        palette59.setBrush(QPalette::Inactive, QPalette::Window, brush56);
        palette59.setBrush(QPalette::Disabled, QPalette::Button, brush56);
        palette59.setBrush(QPalette::Disabled, QPalette::Base, brush56);
        palette59.setBrush(QPalette::Disabled, QPalette::Window, brush56);
        firstPrBar->setPalette(palette59);
        firstPrBar->setMaximum(100);
        firstPrBar->setValue(5);
        firstPrBar->setAlignment(Qt::AlignCenter);
        firstPrBar->setTextVisible(true);
        firstPrBar->setOrientation(Qt::Horizontal);
        firstPrBar->setInvertedAppearance(false);
        firstPrBar->setTextDirection(QProgressBar::TopToBottom);

        StatsLayout_2->addWidget(firstPrBar, 0, 2, 1, 1);

        fifthAttempt = new QLabel(ProgressBarsAttempts);
        fifthAttempt->setObjectName("fifthAttempt");
        QPalette palette60;
        palette60.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette60.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        fifthAttempt->setPalette(palette60);
        fifthAttempt->setAlignment(Qt::AlignCenter);

        StatsLayout_2->addWidget(fifthAttempt, 4, 0, 1, 1);

        firstAttempt = new QLabel(ProgressBarsAttempts);
        firstAttempt->setObjectName("firstAttempt");
        QPalette palette61;
        palette61.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette61.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        firstAttempt->setPalette(palette61);
        firstAttempt->setAlignment(Qt::AlignCenter);

        StatsLayout_2->addWidget(firstAttempt, 0, 0, 1, 1);

        thirdAttempt = new QLabel(ProgressBarsAttempts);
        thirdAttempt->setObjectName("thirdAttempt");
        QPalette palette62;
        palette62.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette62.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        thirdAttempt->setPalette(palette62);
        thirdAttempt->setAlignment(Qt::AlignCenter);

        StatsLayout_2->addWidget(thirdAttempt, 2, 0, 1, 1);

        secondAttempt = new QLabel(ProgressBarsAttempts);
        secondAttempt->setObjectName("secondAttempt");
        QPalette palette63;
        palette63.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette63.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        secondAttempt->setPalette(palette63);
        secondAttempt->setAlignment(Qt::AlignCenter);

        StatsLayout_2->addWidget(secondAttempt, 1, 0, 1, 1);

        secondPrBar = new QProgressBar(ProgressBarsAttempts);
        secondPrBar->setObjectName("secondPrBar");
        QPalette palette64;
        palette64.setBrush(QPalette::Active, QPalette::Button, brush56);
        palette64.setBrush(QPalette::Active, QPalette::Base, brush56);
        palette64.setBrush(QPalette::Active, QPalette::Window, brush56);
        palette64.setBrush(QPalette::Inactive, QPalette::Button, brush56);
        palette64.setBrush(QPalette::Inactive, QPalette::Base, brush56);
        palette64.setBrush(QPalette::Inactive, QPalette::Window, brush56);
        palette64.setBrush(QPalette::Disabled, QPalette::Button, brush56);
        palette64.setBrush(QPalette::Disabled, QPalette::Base, brush56);
        palette64.setBrush(QPalette::Disabled, QPalette::Window, brush56);
        secondPrBar->setPalette(palette64);
        secondPrBar->setValue(5);
        secondPrBar->setAlignment(Qt::AlignCenter);

        StatsLayout_2->addWidget(secondPrBar, 1, 2, 1, 1);

        fourthAttempt = new QLabel(ProgressBarsAttempts);
        fourthAttempt->setObjectName("fourthAttempt");
        QPalette palette65;
        palette65.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette65.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        fourthAttempt->setPalette(palette65);
        fourthAttempt->setAlignment(Qt::AlignCenter);

        StatsLayout_2->addWidget(fourthAttempt, 3, 0, 1, 1);

        thirdPrBar = new QProgressBar(ProgressBarsAttempts);
        thirdPrBar->setObjectName("thirdPrBar");
        QPalette palette66;
        palette66.setBrush(QPalette::Active, QPalette::Button, brush56);
        palette66.setBrush(QPalette::Active, QPalette::Base, brush56);
        palette66.setBrush(QPalette::Active, QPalette::Window, brush56);
        palette66.setBrush(QPalette::Inactive, QPalette::Button, brush56);
        palette66.setBrush(QPalette::Inactive, QPalette::Base, brush56);
        palette66.setBrush(QPalette::Inactive, QPalette::Window, brush56);
        palette66.setBrush(QPalette::Disabled, QPalette::Button, brush56);
        palette66.setBrush(QPalette::Disabled, QPalette::Base, brush56);
        palette66.setBrush(QPalette::Disabled, QPalette::Window, brush56);
        thirdPrBar->setPalette(palette66);
        thirdPrBar->setValue(5);
        thirdPrBar->setAlignment(Qt::AlignCenter);

        StatsLayout_2->addWidget(thirdPrBar, 2, 2, 1, 1);

        fourthPrBar = new QProgressBar(ProgressBarsAttempts);
        fourthPrBar->setObjectName("fourthPrBar");
        QPalette palette67;
        palette67.setBrush(QPalette::Active, QPalette::Button, brush56);
        palette67.setBrush(QPalette::Active, QPalette::Base, brush56);
        palette67.setBrush(QPalette::Active, QPalette::Window, brush56);
        palette67.setBrush(QPalette::Inactive, QPalette::Button, brush56);
        palette67.setBrush(QPalette::Inactive, QPalette::Base, brush56);
        palette67.setBrush(QPalette::Inactive, QPalette::Window, brush56);
        palette67.setBrush(QPalette::Disabled, QPalette::Button, brush56);
        palette67.setBrush(QPalette::Disabled, QPalette::Base, brush56);
        palette67.setBrush(QPalette::Disabled, QPalette::Window, brush56);
        fourthPrBar->setPalette(palette67);
        fourthPrBar->setValue(5);
        fourthPrBar->setAlignment(Qt::AlignCenter);

        StatsLayout_2->addWidget(fourthPrBar, 3, 2, 1, 1);

        fifthPrBar = new QProgressBar(ProgressBarsAttempts);
        fifthPrBar->setObjectName("fifthPrBar");
        QPalette palette68;
        palette68.setBrush(QPalette::Active, QPalette::Button, brush56);
        palette68.setBrush(QPalette::Active, QPalette::Base, brush56);
        palette68.setBrush(QPalette::Active, QPalette::Window, brush56);
        palette68.setBrush(QPalette::Inactive, QPalette::Button, brush56);
        palette68.setBrush(QPalette::Inactive, QPalette::Base, brush56);
        palette68.setBrush(QPalette::Inactive, QPalette::Window, brush56);
        palette68.setBrush(QPalette::Disabled, QPalette::Button, brush56);
        palette68.setBrush(QPalette::Disabled, QPalette::Base, brush56);
        palette68.setBrush(QPalette::Disabled, QPalette::Window, brush56);
        fifthPrBar->setPalette(palette68);
        fifthPrBar->setValue(5);
        fifthPrBar->setAlignment(Qt::AlignCenter);

        StatsLayout_2->addWidget(fifthPrBar, 4, 2, 1, 1);

        sixthPrBar = new QProgressBar(ProgressBarsAttempts);
        sixthPrBar->setObjectName("sixthPrBar");
        QPalette palette69;
        palette69.setBrush(QPalette::Active, QPalette::Button, brush56);
        palette69.setBrush(QPalette::Active, QPalette::Base, brush56);
        palette69.setBrush(QPalette::Active, QPalette::Window, brush56);
        palette69.setBrush(QPalette::Inactive, QPalette::Button, brush56);
        palette69.setBrush(QPalette::Inactive, QPalette::Base, brush56);
        palette69.setBrush(QPalette::Inactive, QPalette::Window, brush56);
        palette69.setBrush(QPalette::Disabled, QPalette::Button, brush56);
        palette69.setBrush(QPalette::Disabled, QPalette::Base, brush56);
        palette69.setBrush(QPalette::Disabled, QPalette::Window, brush56);
        sixthPrBar->setPalette(palette69);
        sixthPrBar->setValue(5);
        sixthPrBar->setAlignment(Qt::AlignCenter);
        sixthPrBar->setOrientation(Qt::Horizontal);
        sixthPrBar->setInvertedAppearance(false);
        sixthPrBar->setTextDirection(QProgressBar::TopToBottom);

        StatsLayout_2->addWidget(sixthPrBar, 5, 2, 1, 1);


        verticalLayout_4->addWidget(ProgressBarsAttempts);

        stackedWidget->addWidget(StatsPage);

        verticalLayout_5->addWidget(stackedWidget);


        retranslateUi(GamesWidget);

        StatsButton->setDefault(false);
        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(GamesWidget);
    } // setupUi

    void retranslateUi(QWidget *GamesWidget)
    {
        GamesWidget->setWindowTitle(QCoreApplication::translate("GamesWidget", "Form", nullptr));
        howToPlayButton->setText(QCoreApplication::translate("GamesWidget", "Help", nullptr));
        GameButton->setText(QCoreApplication::translate("GamesWidget", "Game", nullptr));
        StatsButton->setText(QCoreApplication::translate("GamesWidget", "Stats", nullptr));
        SynonymLabel->setText(QString());
        howToPlaytext->setMarkdown(QCoreApplication::translate("GamesWidget", "**HOW TO PLAY**  \n"
"\n"
"Word consists of 5 letters, you have 6 attempts to guess it\n"
"\n"
"", nullptr));
        howToPlaytext->setHtml(QCoreApplication::translate("GamesWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:8px; margin-bottom:8px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700;\">HOW TO PLAY</span>  </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Word consists of 5 letters, you have 6 attempts to guess it</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></"
                        "p></body></html>", nullptr));
        fourth_let->setText(QCoreApplication::translate("GamesWidget", "E", nullptr));
        second_let->setText(QCoreApplication::translate("GamesWidget", "A", nullptr));
        first_let->setText(QCoreApplication::translate("GamesWidget", "G", nullptr));
        fifth_let->setText(QCoreApplication::translate("GamesWidget", "R", nullptr));
        third_let->setText(QCoreApplication::translate("GamesWidget", "M", nullptr));
        howToPlay1->setHtml(QCoreApplication::translate("GamesWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Yu Gothic UI'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">G is in its place</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        howToPlaylet5->setText(QCoreApplication::translate("GamesWidget", "A", nullptr));
        howToPlaylet3->setText(QCoreApplication::translate("GamesWidget", "S", nullptr));
        howToPlaylet2->setText(QCoreApplication::translate("GamesWidget", "A", nullptr));
        howToPlaylet1->setText(QCoreApplication::translate("GamesWidget", "D", nullptr));
        howToPlaylet4->setText(QCoreApplication::translate("GamesWidget", "H", nullptr));
        howToPlay2->setHtml(QCoreApplication::translate("GamesWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Yu Gothic UI'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">A is in the word, but not in this place</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        howToPlaylet10->setText(QCoreApplication::translate("GamesWidget", "I", nullptr));
        howToPlaylet9->setText(QCoreApplication::translate("GamesWidget", "L", nullptr));
        howToPlaylet8->setText(QCoreApplication::translate("GamesWidget", "I", nullptr));
        howToPlaylet6->setText(QCoreApplication::translate("GamesWidget", "A", nullptr));
        howToPlaylet7->setText(QCoreApplication::translate("GamesWidget", "B", nullptr));
        howToPlay3->setHtml(QCoreApplication::translate("GamesWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Yu Gothic UI'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">B is not in the word</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        letter_44->setText(QString());
        letter_41->setText(QString());
        letter_52->setText(QString());
        letter_32->setText(QString());
        letter_23->setText(QString());
        letter_43->setText(QString());
        letter_62->setText(QString());
        letter_64->setText(QString());
        letter_63->setText(QString());
        letter_65->setText(QString());
        letter_45->setText(QString());
        letter_15->setText(QString());
        letter_25->setText(QString());
        letter_11->setText(QString());
        letter_51->setText(QString());
        letter_12->setText(QString());
        letter_34->setText(QString());
        letter_55->setText(QString());
        letter_61->setText(QString());
        letter_53->setText(QString());
        letter_33->setText(QString());
        letter_24->setText(QString());
        letter_54->setText(QString());
        letter_35->setText(QString());
        letter_42->setText(QString());
        letter_13->setText(QString());
        letter_22->setText(QString());
        letter_14->setText(QString());
        letter_31->setText(QString());
        letter_21->setText(QString());
        QKey->setText(QCoreApplication::translate("GamesWidget", "Q", nullptr));
        WKey->setText(QCoreApplication::translate("GamesWidget", "W", nullptr));
        EKey->setText(QCoreApplication::translate("GamesWidget", "E", nullptr));
        RKey->setText(QCoreApplication::translate("GamesWidget", "R", nullptr));
        TKey->setText(QCoreApplication::translate("GamesWidget", "T", nullptr));
        YKey->setText(QCoreApplication::translate("GamesWidget", "Y", nullptr));
        UKey->setText(QCoreApplication::translate("GamesWidget", "U", nullptr));
        IKey->setText(QCoreApplication::translate("GamesWidget", "I", nullptr));
        OKey->setText(QCoreApplication::translate("GamesWidget", "O", nullptr));
        PKey->setText(QCoreApplication::translate("GamesWidget", "P", nullptr));
        AKey->setText(QCoreApplication::translate("GamesWidget", "A", nullptr));
        SKey->setText(QCoreApplication::translate("GamesWidget", "S", nullptr));
        DKey->setText(QCoreApplication::translate("GamesWidget", "D", nullptr));
        FKey->setText(QCoreApplication::translate("GamesWidget", "F", nullptr));
        GKey->setText(QCoreApplication::translate("GamesWidget", "G", nullptr));
        HKey->setText(QCoreApplication::translate("GamesWidget", "H", nullptr));
        JKey->setText(QCoreApplication::translate("GamesWidget", "J", nullptr));
        KKey->setText(QCoreApplication::translate("GamesWidget", "K", nullptr));
        LKey->setText(QCoreApplication::translate("GamesWidget", "L", nullptr));
        EnterKey->setText(QCoreApplication::translate("GamesWidget", "Enter", nullptr));
        ZKey->setText(QCoreApplication::translate("GamesWidget", "Z", nullptr));
        XKey->setText(QCoreApplication::translate("GamesWidget", "X", nullptr));
        CKey->setText(QCoreApplication::translate("GamesWidget", "C", nullptr));
        VKey->setText(QCoreApplication::translate("GamesWidget", "V", nullptr));
        BKey->setText(QCoreApplication::translate("GamesWidget", "B", nullptr));
        NKey->setText(QCoreApplication::translate("GamesWidget", "N", nullptr));
        MKey->setText(QCoreApplication::translate("GamesWidget", "M", nullptr));
        BackespaceKey->setText(QCoreApplication::translate("GamesWidget", "Delete", nullptr));
        winsInPerc->setText(QCoreApplication::translate("GamesWidget", "Wins in %", nullptr));
        AllRoundsNum->setText(QCoreApplication::translate("GamesWidget", "0", nullptr));
        WinRoundsNum->setText(QCoreApplication::translate("GamesWidget", "0", nullptr));
        numOfRounds->setText(QCoreApplication::translate("GamesWidget", "Num of rounds", nullptr));
        Statistics->setText(QCoreApplication::translate("GamesWidget", "Win on attempts", nullptr));
        sixthAttempt->setText(QCoreApplication::translate("GamesWidget", "6", nullptr));
        firstPrBar->setFormat(QString());
        fifthAttempt->setText(QCoreApplication::translate("GamesWidget", "5", nullptr));
        firstAttempt->setText(QCoreApplication::translate("GamesWidget", "1", nullptr));
        thirdAttempt->setText(QCoreApplication::translate("GamesWidget", "3", nullptr));
        secondAttempt->setText(QCoreApplication::translate("GamesWidget", "2", nullptr));
        secondPrBar->setFormat(QString());
        fourthAttempt->setText(QCoreApplication::translate("GamesWidget", "4", nullptr));
        thirdPrBar->setFormat(QString());
        fourthPrBar->setFormat(QString());
        fifthPrBar->setFormat(QString());
        sixthPrBar->setFormat(QString());
    } // retranslateUi

};

namespace Ui {
    class GamesWidget: public Ui_GamesWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMESWIDGET_H
