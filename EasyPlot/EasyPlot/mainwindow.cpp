#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QDir>
#include <QFont>
#include <QPixmap>
#include <fstream>
#include <string>
#include <cstdlib>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QFont font("Noto Sans", 18);

    ajuste = new Ajuste();
    confplot = new PlotConf();
    valinit = new InitValues();
    graph = new gnuplot();
    EditFile = new QLineEdit(this);
    LabelFile = new QLabel(this);
    EditFile->setText("");
    EditFile->setGeometry(220, 95, 400, 30);
    LabelFile->setFont(font);
    LabelFile->setText("Archivo:");
    LabelFile->setGeometry(110, 95, 100, 30);

    connect(this, SIGNAL (AjusteLineal(QString)), ajuste, SLOT (AjusteLinealSlot(QString)));
    connect(this, SIGNAL (AjusteCuadratico(QString)), ajuste, SLOT (AjusteCuadraticoSlot(QString)));
    connect(this, SIGNAL (AjusteExponencial(QString)), ajuste, SLOT (AjusteExponencialSlot(QString)));
    connect(this, SIGNAL (ConfiguracionGrafica(gnuplot*, bool)), confplot, SLOT (on_init(gnuplot*, bool)));
    connect(this, SIGNAL (ValoresIniciales(Ajuste*)), valinit, SLOT (on_init(Ajuste*)));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete graph;
    delete ajuste;
    delete confplot;
    delete valinit;
}

void MainWindow::on_actionAbrir_triggered()
{
    QString filters = "Archivo de texto (*.txt) ;; Archivo de datos (*.dat) ;; Todos los archivos (*.*)";
    QString file_name = QFileDialog::getOpenFileName(this, "Selecciona un archivo", QDir::homePath(), filters);
    if (file_name.isEmpty()) {
        QMessageBox::critical(this, "Error", "No se seleccionó ningún archivo");
        return;
    }
    EditFile->setText(file_name);
}

void MainWindow::on_actionLineal_triggered()
{
    emit AjusteLineal(EditFile->text());
}

void MainWindow::on_actionCuadr_tico_triggered()
{
    emit AjusteCuadratico(EditFile->text());
}

void MainWindow::on_actionExponencial_triggered()
{
    emit AjusteExponencial(EditFile->text());
}

void MainWindow::on_actionConfiguraci_n_triggered()
{
    emit ConfiguracionGrafica(graph, true);
}

void MainWindow::on_actionGraficar_triggered()
{
    confplot->on_init(graph, false);
    confplot->on_ButtonAplicar_clicked();
    std::ifstream F(EditFile->text().toStdString().c_str());
    if (!F.is_open()) {
        QMessageBox::critical(this, "Error", ("No se pudo abrir el archivo:\n" + EditFile->text().toStdString()).c_str());
        return;
    }
    graph->output("graph.png");
    if (graph->tofit) graph->fit(EditFile->text().toStdString(), "f");
    graph->plot(EditFile->text().toStdString(), true, EditFile->text().toStdString(), graph->extra_functions);
    graph->muestra();
    int w = ui->label_graph->width(), h = ui->label_graph->height();
    QPixmap pix("graph.png");
    ui->label_graph->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
    hay_grafica = true;
}

void MainWindow::on_actionValores_Iniciales_triggered()
{
    emit ValoresIniciales(ajuste);
}

void MainWindow::on_actionGuardar_triggered()
{
    if (!hay_grafica) {
        QMessageBox::critical(this, "Error", "No hay ninguna gráfica creada");
        return;
    }
    QString FileName = QFileDialog::getSaveFileName(this, "Guardar grafica", QDir::homePath(), "Imagen PNG (*.png)");
    if (FileName.isEmpty()) {
        QMessageBox::critical(this, "Error", "No se eligió ninguna ubicación para guardar el archivo");
        return;
    }
    if (std::system(("cp graph.png " + FileName.toStdString()).c_str()) != 0) {
        QMessageBox::critical(this, "Error", "No se pudo guardar el archivo a la ubicación dada");
        return;
    }
}
