/********************************************************************************
** Form generated from reading UI file 'plotconf.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLOTCONF_H
#define UI_PLOTCONF_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PlotConf
{
public:
    QPushButton *ButtonAplicar;
    QPushButton *pushButton;

    void setupUi(QWidget *PlotConf)
    {
        if (PlotConf->objectName().isEmpty())
            PlotConf->setObjectName(QStringLiteral("PlotConf"));
        PlotConf->resize(592, 469);
        ButtonAplicar = new QPushButton(PlotConf);
        ButtonAplicar->setObjectName(QStringLiteral("ButtonAplicar"));
        ButtonAplicar->setGeometry(QRect(300, 390, 101, 41));
        pushButton = new QPushButton(PlotConf);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(170, 390, 101, 41));

        retranslateUi(PlotConf);

        QMetaObject::connectSlotsByName(PlotConf);
    } // setupUi

    void retranslateUi(QWidget *PlotConf)
    {
        PlotConf->setWindowTitle(QApplication::translate("PlotConf", "Configuraci\303\263n", nullptr));
        ButtonAplicar->setText(QApplication::translate("PlotConf", "Aplicar", nullptr));
        pushButton->setText(QApplication::translate("PlotConf", "Limpiar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PlotConf: public Ui_PlotConf {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLOTCONF_H
