/********************************************************************************
** Form generated from reading UI file 'ajuste.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJUSTE_H
#define UI_AJUSTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Ajuste
{
public:

    void setupUi(QWidget *Ajuste)
    {
        if (Ajuste->objectName().isEmpty())
            Ajuste->setObjectName(QStringLiteral("Ajuste"));
        Ajuste->resize(400, 300);

        retranslateUi(Ajuste);

        QMetaObject::connectSlotsByName(Ajuste);
    } // setupUi

    void retranslateUi(QWidget *Ajuste)
    {
        Ajuste->setWindowTitle(QApplication::translate("Ajuste", "Ajuste", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Ajuste: public Ui_Ajuste {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJUSTE_H
