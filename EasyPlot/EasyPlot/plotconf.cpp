#include "plotconf.h"
#include "ui_plotconf.h"

#include <QFont>
#include <string>
#include <sstream>

double str2double(std::string s) {
    std::istringstream S(s); double x = 0;
    S >> x;
    return x;
}

PlotConf::PlotConf(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PlotConf)
{
    ui->setupUi(this);

    QFont font("Noto Sans", 14);

    LabelTitle = new QLabel(this);
    LabelX = new QLabel(this);
    LabelY = new QLabel(this);
    LabelRangeX = new QLabel(this);
    LabelRangeY = new QLabel(this);
    LabelKey = new QLabel(this);
    LabelFit = new QLabel(this);
    LabelExtraPlot = new QLabel(this);

    EditTitle = new QLineEdit(this);
    EditX = new QLineEdit(this);
    EditY = new QLineEdit(this);
    EditRangeX0 = new QLineEdit(this);
    EditRangeXf = new QLineEdit(this);
    EditRangeY0 = new QLineEdit(this);
    EditRangeYf = new QLineEdit(this);
    EditExtraPlot  = new QLineEdit(this);

    ButtonKey = new QCheckBox(this);
    ButtonFit = new QCheckBox(this);

    LabelTitle->setText("Título:");
    LabelTitle->setGeometry(50, 50, 100, 30);
    LabelTitle->setFont(font);

    LabelX->setText("Texto X:");
    LabelX->setGeometry(50, 90, 100, 30);
    LabelX->setFont(font);

    LabelY->setText("Texto Y:");
    LabelY->setGeometry(50, 130, 100, 30);
    LabelY->setFont(font);

    LabelRangeX->setText("Rango X:");
    LabelRangeX->setGeometry(50, 170, 100, 30);
    LabelRangeX->setFont(font);

    LabelRangeY->setText("Rango Y:");
    LabelRangeY->setGeometry(50, 210, 100, 30);
    LabelRangeY->setFont(font);

    LabelKey->setText("Leyenda:");
    LabelKey->setGeometry(50, 250, 100, 30);
    LabelKey->setFont(font);

    LabelFit->setText("Ajuste:");
    LabelFit->setGeometry(50, 290, 100, 30);
    LabelFit->setFont(font);

    LabelExtraPlot->setText("Extra plot:");
    LabelExtraPlot->setGeometry(50, 330, 100, 30);
    LabelExtraPlot->setFont(font);

    EditTitle->setGeometry(150, 50, 300, 30);
    EditX->setGeometry(150, 90, 300, 30);
    EditY->setGeometry(150, 130, 300, 30);
    EditRangeX0->setGeometry(150, 170, 125, 30); EditRangeXf->setGeometry(325, 170, 125, 30);
    EditRangeY0->setGeometry(150, 210, 125, 30); EditRangeYf->setGeometry(325, 210, 125, 30);
    EditExtraPlot->setGeometry(150, 330, 300, 30);

    ButtonKey->setGeometry(150, 250, 30, 30);
    ButtonFit->setGeometry(150, 290, 30, 30);
}

PlotConf::~PlotConf()
{
    delete ui;
}

void PlotConf::on_init(gnuplot* grafica, bool mostrar) {
    graph = grafica;
    if (mostrar) show();
}

void PlotConf::on_ButtonAplicar_clicked()
{
    delete graph;
    graph = new gnuplot();
    if (!EditTitle->text().toStdString().empty()) graph->title((EditTitle->text()).toStdString());
    if (!EditX->text().toStdString().empty()) graph->textoX(EditX->text().toStdString());
    if (!EditY->text().toStdString().empty()) graph->textoY(EditY->text().toStdString());
    if (!EditRangeX0->text().toStdString().empty() && !EditRangeXf->text().toStdString().empty()) {
        double x0 = str2double(EditRangeX0->text().toStdString()), xf = str2double(EditRangeXf->text().toStdString());
        if (x0 > xf) std::swap(x0, xf);
        else if (!(x0 < xf)) xf += 1;
        graph->rangoX(x0, xf);
    }
    if (!EditRangeY0->text().toStdString().empty() && !EditRangeYf->text().toStdString().empty()) {
        double y0 = str2double(EditRangeY0->text().toStdString()), yf = str2double(EditRangeYf->text().toStdString());
        if (y0 > yf) std::swap(y0, yf);
        else if (!(y0 < yf)) yf += 1;
        graph->rangoY(y0, yf);
    }
    if (!ButtonKey->isChecked()) graph->leyenda(false);
    if (ButtonFit->isChecked()) {
        graph->tofit = true;
        graph->extra_functions = ", f(x)";
    }
    if (!EditExtraPlot->text().toStdString().empty())
        graph->extra_functions += ", " + EditExtraPlot->text().toStdString();
    hide();
}

void PlotConf::on_pushButton_clicked()
{
    EditTitle->setText("");
    EditX->setText("");
    EditY->setText("");
    EditRangeX0->setText(""); EditRangeXf->setText("");
    EditRangeY0->setText(""); EditRangeYf->setText("");
    EditExtraPlot->setText("");

    ButtonKey->setChecked(false);
    ButtonFit->setChecked(false);
}
