/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbrir;
    QAction *actionLineal;
    QAction *actionCuadr_tico;
    QAction *actionExponencial;
    QAction *actionConfiguraci_n;
    QAction *actionGraficar;
    QAction *actionValores_Iniciales;
    QAction *actionGuardar;
    QWidget *centralWidget;
    QLabel *label_graph;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuArchivo;
    QMenu *menuAjuste;
    QMenu *menuGraficar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(765, 668);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Images/easyplot_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionAbrir = new QAction(MainWindow);
        actionAbrir->setObjectName(QStringLiteral("actionAbrir"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Images/Open-file-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbrir->setIcon(icon1);
        actionLineal = new QAction(MainWindow);
        actionLineal->setObjectName(QStringLiteral("actionLineal"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Images/regression_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLineal->setIcon(icon2);
        actionCuadr_tico = new QAction(MainWindow);
        actionCuadr_tico->setObjectName(QStringLiteral("actionCuadr_tico"));
        actionExponencial = new QAction(MainWindow);
        actionExponencial->setObjectName(QStringLiteral("actionExponencial"));
        actionConfiguraci_n = new QAction(MainWindow);
        actionConfiguraci_n->setObjectName(QStringLiteral("actionConfiguraci_n"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Images/configuracion_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionConfiguraci_n->setIcon(icon3);
        actionGraficar = new QAction(MainWindow);
        actionGraficar->setObjectName(QStringLiteral("actionGraficar"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Images/gnuplot_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGraficar->setIcon(icon4);
        actionValores_Iniciales = new QAction(MainWindow);
        actionValores_Iniciales->setObjectName(QStringLiteral("actionValores_Iniciales"));
        actionGuardar = new QAction(MainWindow);
        actionGuardar->setObjectName(QStringLiteral("actionGuardar"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/Images/Save-file-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGuardar->setIcon(icon5);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_graph = new QLabel(centralWidget);
        label_graph->setObjectName(QStringLiteral("label_graph"));
        label_graph->setGeometry(QRect(50, 80, 671, 521));
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 765, 22));
        menuArchivo = new QMenu(menuBar);
        menuArchivo->setObjectName(QStringLiteral("menuArchivo"));
        menuAjuste = new QMenu(menuBar);
        menuAjuste->setObjectName(QStringLiteral("menuAjuste"));
        menuGraficar = new QMenu(menuBar);
        menuGraficar->setObjectName(QStringLiteral("menuGraficar"));
        MainWindow->setMenuBar(menuBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menuArchivo->menuAction());
        menuBar->addAction(menuAjuste->menuAction());
        menuBar->addAction(menuGraficar->menuAction());
        menuArchivo->addAction(actionAbrir);
        menuAjuste->addSeparator();
        menuAjuste->addAction(actionLineal);
        menuAjuste->addAction(actionCuadr_tico);
        menuAjuste->addAction(actionExponencial);
        menuAjuste->addSeparator();
        menuAjuste->addAction(actionValores_Iniciales);
        menuGraficar->addAction(actionConfiguraci_n);
        menuGraficar->addSeparator();
        menuGraficar->addAction(actionGraficar);
        menuGraficar->addAction(actionGuardar);
        toolBar->addAction(actionAbrir);
        toolBar->addSeparator();
        toolBar->addAction(actionLineal);
        toolBar->addSeparator();
        toolBar->addAction(actionConfiguraci_n);
        toolBar->addAction(actionGraficar);
        toolBar->addAction(actionGuardar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "EasyPlot", nullptr));
        actionAbrir->setText(QApplication::translate("MainWindow", "Abrir", nullptr));
#ifndef QT_NO_TOOLTIP
        actionAbrir->setToolTip(QApplication::translate("MainWindow", "Abrir archivo", nullptr));
#endif // QT_NO_TOOLTIP
        actionLineal->setText(QApplication::translate("MainWindow", "Lineal", nullptr));
#ifndef QT_NO_TOOLTIP
        actionLineal->setToolTip(QApplication::translate("MainWindow", "Ajuste Lineal", nullptr));
#endif // QT_NO_TOOLTIP
        actionCuadr_tico->setText(QApplication::translate("MainWindow", "Cuadr\303\241tico", nullptr));
        actionExponencial->setText(QApplication::translate("MainWindow", "Exponencial", nullptr));
        actionConfiguraci_n->setText(QApplication::translate("MainWindow", "Configuraci\303\263n", nullptr));
#ifndef QT_NO_TOOLTIP
        actionConfiguraci_n->setToolTip(QApplication::translate("MainWindow", "Configuraci\303\263n Gr\303\241fica", nullptr));
#endif // QT_NO_TOOLTIP
        actionGraficar->setText(QApplication::translate("MainWindow", "Graficar", nullptr));
        actionValores_Iniciales->setText(QApplication::translate("MainWindow", "Valores Iniciales", nullptr));
        actionGuardar->setText(QApplication::translate("MainWindow", "Guardar", nullptr));
#ifndef QT_NO_TOOLTIP
        actionGuardar->setToolTip(QApplication::translate("MainWindow", "Guardar Gr\303\241fica", nullptr));
#endif // QT_NO_TOOLTIP
        label_graph->setText(QString());
        menuArchivo->setTitle(QApplication::translate("MainWindow", "Archivo", nullptr));
        menuAjuste->setTitle(QApplication::translate("MainWindow", "Ajuste", nullptr));
        menuGraficar->setTitle(QApplication::translate("MainWindow", "Graficar", nullptr));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
