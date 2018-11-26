#ifndef INITVALUES_H
#define INITVALUES_H

#include <QWidget>
#include "ajuste.h"
// Clase para ajustar los valores iniciales del ajuste
namespace Ui {
class InitValues;
}

class InitValues : public QWidget
{
    Q_OBJECT

public:
    explicit InitValues(QWidget *parent = nullptr);
    ~InitValues();

private slots:
    void on_init(Ajuste* _ajustes); // Slot creado para arrancar la herramienta y mandar el objeto ajuste
    void on_ButtonLimpiar_clicked();

    void on_ButtonAplicar_clicked();

private:
    Ui::InitValues *ui;
    Ajuste* ajustes; // Sirve para modificar datos del ajuste
};

#endif // INITVALUES_H
