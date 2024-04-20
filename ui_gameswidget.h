/********************************************************************************
** Form generated from reading UI file 'gameswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMESWIDGET_H
#define UI_GAMESWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GamesWidget
{
public:

    void setupUi(QWidget *GamesWidget)
    {
        if (GamesWidget->objectName().isEmpty())
            GamesWidget->setObjectName(QString::fromUtf8("GamesWidget"));
        GamesWidget->resize(400, 300);

        retranslateUi(GamesWidget);

        QMetaObject::connectSlotsByName(GamesWidget);
    } // setupUi

    void retranslateUi(QWidget *GamesWidget)
    {
        GamesWidget->setWindowTitle(QCoreApplication::translate("GamesWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GamesWidget: public Ui_GamesWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMESWIDGET_H
