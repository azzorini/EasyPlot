#ifndef PLOTCONF_H
#define PLOTCONF_H

#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QCheckBox>
#include "gnuplotlib.h"

namespace Ui {
class PlotConf;
}

class PlotConf : public QWidget
{
    Q_OBJECT

public:
    explicit PlotConf(QWidget *parent = nullptr);
    ~PlotConf();

public slots:
        void on_init(gnuplot* grafica, bool mostrar);
        void on_ButtonAplicar_clicked();


private slots:
    void on_pushButton_clicked();

private:
    QLabel *LabelTitle, *LabelX, *LabelY, *LabelKey, *LabelRangeX, *LabelRangeY, *LabelFit, *LabelExtraPlot;
    QLineEdit *EditTitle, *EditX, *EditY, *EditRangeX0, *EditRangeXf, *EditRangeY0, *EditRangeYf, *EditExtraPlot;
    QCheckBox *ButtonKey, *ButtonFit;
    gnuplot* graph;
    Ui::PlotConf *ui;
};

#endif // PLOTCONF_H
