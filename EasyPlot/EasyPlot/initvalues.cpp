#include "initvalues.h"
#include "ui_initvalues.h"
#include <string>
#include <sstream>

double init_str2double(std::string s) {
    std::istringstream S(s);
    double x;
    if (!(S >> x)) return 1;
    return x;
}

InitValues::InitValues(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::InitValues)
{
    ui->setupUi(this);
}

InitValues::~InitValues()
{
    delete ui;
}

void InitValues::on_ButtonLimpiar_clicked()
{
    ui->lineEdit->setText("");
    ui->lineEdit_2->setText("");
    ui->lineEdit_3->setText("");
}

void InitValues::on_init(Ajuste* _ajustes) {
    ajustes = _ajustes;
    show();
}

void InitValues::on_ButtonAplicar_clicked()
{
    double a1, a2, a3; a1 = a2 = a3 = 1;
    if (!ui->lineEdit->text().toStdString().empty()) a1 = init_str2double(ui->lineEdit->text().toStdString());
    if (!ui->lineEdit_2->text().toStdString().empty()) a2 = init_str2double(ui->lineEdit->text().toStdString());
    if (!ui->lineEdit_3->text().toStdString().empty()) a3 = init_str2double(ui->lineEdit_3->text().toStdString());

    ajustes->set_initial(a1, a2, a3);
    hide();
}
