#ifndef AJUSTE_H
#define AJUSTE_H

#include <QWidget>
#include <QLabel>

namespace Ui {
class Ajuste;
}
// Herramienta hecha para realizar y mostrar ajustes con gnuplot
class Ajuste : public QWidget
{
    Q_OBJECT

public:
    explicit Ajuste(QWidget *parent = nullptr);
    void set_initial(double _a1, double _a2, double _a3);
    ~Ajuste();

private slots:
    void AjusteLinealSlot(QString file);
    void AjusteCuadraticoSlot(QString file);
    void AjusteExponencialSlot(QString file);

private:
    QLabel* LabelTipoRegresion; // Mostraremos información sobre la regresión
    QLabel *LabelA1, *LabelA2, *LabelA3; // Usados para mostrar los coeficientes del ajuste
    double a1, a2, a3; // Usados para guardar los valores iniciales del ajuste

    Ui::Ajuste *ui;
};

#endif // AJUSTE_H
