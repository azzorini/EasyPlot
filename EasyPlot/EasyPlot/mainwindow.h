#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>
#include <QLabel>
#include "gnuplotlib.h"
#include "ajuste.h"
#include "plotconf.h"
#include "initvalues.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionAbrir_triggered();

    void on_actionLineal_triggered();

    void on_actionCuadr_tico_triggered();

    void on_actionExponencial_triggered();

    void on_actionConfiguraci_n_triggered();

    void on_actionGraficar_triggered();

    void on_actionValores_Iniciales_triggered();

    void on_actionGuardar_triggered();

signals:
    void AjusteLineal(QString);
    void AjusteCuadratico(QString);
    void AjusteExponencial(QString);
    void ConfiguracionGrafica(gnuplot*, bool);
    void ValoresIniciales(Ajuste*);

private:
    QLabel* LabelFile;
    QLineEdit* EditFile;
    gnuplot* graph;
    Ajuste* ajuste;
    PlotConf* confplot;
    InitValues* valinit;
    bool hay_grafica;
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
