#ifndef GNUPLOTLIB_H_INCLUDED
#define GNUPLOTLIB_H_INCLUDED

#include <cstdlib>
#include <string>
#include <fstream>
// Clase gnuplot personalizada para este programa (maneja gnuplot)
class gnuplot {
    std::ofstream F;
    std::string file;
public:
    bool tofit; // Indica si se quiere hacer un ajuste
    std::string extra_functions; // Indica funciones extras a graficar
    gnuplot(const std::string& filename="script.plt") {
        file = filename;
        tofit = false;
        extra_functions = "";
        F.open(filename.c_str());
    }
    ~gnuplot();

    void output(const std::string& filename="graph.png", const std::string& terminal="png");
    void plot(const std::string& arg, bool IsFile = false, const std::string& title="",
				const std::string& functions="");
    void fit(const std::string& file, const std::string& name_function = "f",
			const std::string& function = "a*x + b", const std::string& via = "a, b");
    void textoX(const std::string& s);
    void textoY(const std::string& s);
    void leyenda(bool presente = true);
    void title(const std::string& s);
    void define(const std::string& constant, const std::string& value);
    void rangoX(double inf, double sup);
    void rangoX(int inf, int sup);
    void rangoX(const std::string& inf, const std::string& sup);
    void rangoY(double inf, double sup);
    void rangoY(int inf, int sup);
    void rangoY(const std::string& inf, const std::string& sup);
    void linea(const std::string& line);

    void muestra() const;
    void guarda_script(const std::string& filename = "mi_script.plt") const;
};

#endif // GNUPLOTLIB_H_INCLUDED
