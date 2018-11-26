#include "ajuste.h"
#include "ui_ajuste.h"

#include <fstream>
#include <sstream>
#include <string>
#include <QMessageBox>
#include <QFont>
#include <cstdlib>
#include "gnuplotlib.h"

std::string double2str(double x) {
    std::ostringstream S;
    S << x;
    return S.str();
}

Ajuste::Ajuste(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Ajuste)
{
    ui->setupUi(this);
    LabelTipoRegresion = new QLabel(this);
    LabelA1 = new QLabel(this);
    LabelA2 = new QLabel(this);
    LabelA3 = new QLabel(this);
    QFont font("Noto Sans", 14);

    LabelTipoRegresion->setText("");
    LabelTipoRegresion->setFont(font);
    LabelTipoRegresion->setGeometry(115, 30, 300, 30);

    LabelA1->setText("");
    LabelA1->setFont(font);
    LabelA1->setGeometry(75, 100, 300, 30);
    LabelA2->setText("");
    LabelA2->setFont(font);
    LabelA2->setGeometry(75, 140, 300, 30);
    LabelA3->setText("");
    LabelA3->setFont(font);
    LabelA3->setGeometry(75, 180, 300, 30);
    a1 = a2 = a3 = 1;
}

void Ajuste::set_initial(double _a1, double _a2, double _a3) {
    a1 = _a1; a2 = _a2; a3 = _a3;
}

void Ajuste::AjusteLinealSlot(QString file) {
    std::ifstream F(file.toStdString().c_str());
    if (!F.is_open()) {
        QMessageBox::critical(this, "Error", "No se pudo abrir el archivo:\n" + file);
        return;
    }
    F.close();

    gnuplot graph;
    graph.linea("a1 = " + double2str(a1));
    graph.linea("a2 = " + double2str(a2));
    graph.fit(file.toStdString(), "f", "a1*x + a2", "a1, a2");
    graph.muestra();
    std::ifstream fin("fit.log");
    std::string line;
    if (!std::getline(fin, line)) {
        QMessageBox::critical(this, "Error", "Problema al abrir fit.log\nQuizá el ajuste no se realizó correctamente");
        return;
    }
    bool correcto = true;
    while (correcto && line != "=======================            ==========================")
            correcto = bool(std::getline(fin, line));

    if (!correcto) {
        QMessageBox::critical(this, "Error", "Problema al abrir fit.log\nQuizá el ajuste no se realizó correctamente");
        return;
    }

    char aux; double a1, erra1, a2, erra2;
    fin >> aux >> aux >> aux >> a1 >> aux >> aux >> aux >> erra1; std::getline(fin, line);
    fin >> aux >> aux >> aux >> a2 >> aux >> aux >> aux >> erra2;
    fin.close(); std::system("rm -f fit.log");

    LabelTipoRegresion->setText("y(x) = a1*x + a2");
    LabelA1->setText(("a1 = " + double2str(a1) + " +/- " + double2str(erra1)).c_str());
    LabelA2->setText(("a2 = " + double2str(a2) + " +/- " + double2str(erra2)).c_str());
    LabelA3->setText("");

    show();
}

void Ajuste::AjusteCuadraticoSlot(QString file) {
    std::ifstream F(file.toStdString().c_str());
    if (!F.is_open()) {
        QMessageBox::critical(this, "Error", "No se pudo abrir el archivo:\n" + file);
        return;
    }
    F.close();

    gnuplot graph;
    graph.linea("a1 = " + double2str(a1));
    graph.linea("a2 = " + double2str(a2));
    graph.linea("a3 = " + double2str(a3));
    graph.fit(file.toStdString(), "f", "a1*x*x + a2*x + a3", "a1, a2, a3");
    graph.muestra();
    std::ifstream fin("fit.log");
    std::string line;
    if (!std::getline(fin, line)) {
        QMessageBox::critical(this, "Error", "Problema al abrir fit.log\nQuizá el ajuste no se realizó correctamente");
        return;
    }
    bool correcto = true;
    while (correcto && line != "=======================            ==========================")
            correcto = bool(std::getline(fin, line));

    if (!correcto) {
        QMessageBox::critical(this, "Error", "Problema al abrir fit.log\nQuizá el ajuste no se realizó correctamente");
        return;
    }

    char aux; double a1, erra1, a2, erra2, a3, erra3;
    fin >> aux >> aux >> aux >> a1 >> aux >> aux >> aux >> erra1; std::getline(fin, line);
    fin >> aux >> aux >> aux >> a2 >> aux >> aux >> aux >> erra2; std::getline(fin, line);
    fin >> aux >> aux >> aux >> a3 >> aux >> aux >> aux >> erra3;
    fin.close(); std::system("rm -f fit.log");

    LabelTipoRegresion->setText("y(x) = a1*x² + a2*x + a3");
    LabelA1->setText(("a1 = " + double2str(a1) + " +/- " + double2str(erra1)).c_str());
    LabelA2->setText(("a2 = " + double2str(a2) + " +/- " + double2str(erra2)).c_str());
    LabelA3->setText(("a3 = " + double2str(a3) + " +/- " + double2str(erra3)).c_str());

    show();
}

void Ajuste::AjusteExponencialSlot(QString file) {
    std::ifstream F(file.toStdString().c_str());
    if (!F.is_open()) {
        QMessageBox::critical(this, "Error", "No se pudo abrir el archivo:\n" + file);
        return;
    }
    F.close();

    gnuplot graph;
    graph.linea("a1 = " + double2str(a1));
    graph.linea("a2 = " + double2str(a2));
    graph.fit(file.toStdString(), "f", "exp(a1*x) + a2", "a1, a2");
    graph.muestra();
    std::ifstream fin("fit.log");
    std::string line;
    if (!std::getline(fin, line)) {
        QMessageBox::critical(this, "Error", "Problema al abrir fit.log\nQuizá el ajuste no se realizó correctamente");
        return;
    }
    bool correcto = true;
    while (correcto && line != "=======================            ==========================")
            correcto = bool(std::getline(fin, line));

    if (!correcto) {
        QMessageBox::critical(this, "Error", "Problema al abrir fit.log\nQuizá el ajuste no se realizó correctamente");
        return;
    }

    char aux; double a1, erra1, a2, erra2;
    fin >> aux >> aux >> aux >> a1 >> aux >> aux >> aux >> erra1; std::getline(fin, line);
    fin >> aux >> aux >> aux >> a2 >> aux >> aux >> aux >> erra2;
    fin.close(); std::system("rm -f fit.log");

    LabelTipoRegresion->setText("y(x) = e^(a1*x) + a2");
    LabelA1->setText(("a1 = " + double2str(a1) + " +/- " + double2str(erra1)).c_str());
    LabelA2->setText(("a2 = " + double2str(a2) + " +/- " + double2str(erra2)).c_str());
    LabelA3->setText("");

    show();
}

Ajuste::~Ajuste()
{
    delete ui;
}
