#include "gnuplotlib.h"

void gnuplot::output(const std::string& filename, const std::string& terminal) {
    F << "set terminal " << terminal << "\nset output \"" << filename << '\"' << std::endl;
}

void gnuplot::plot(const std::string& arg, bool IsFile, const std::string& title,
					const std::string& functions) {
    if (IsFile) {
        F << "plot \"" << arg << "\" ";
        if (!title.empty()) F << "title \"" << title << "\" ";
        F << functions << std::endl;
    } else {
        F << "plot " << arg << ' ';
        if (!title.empty()) F << "title \"" << title << "\" ";
        F << functions << std::endl;
    }
}

void gnuplot::fit(const std::string& file, const std::string& name_function,
			const std::string& function, const std::string& via) {
	F << name_function << "(x) = " << function << std::endl;
	F << "fit " << name_function << "(x) \"" << file << "\" via " << via << std::endl; 
}

gnuplot::~gnuplot() {
    std::string command = "rm -f " + file;
    F.close();
    std::system(command.c_str());
}

void gnuplot::textoX(const std::string& s) {
    F << "set xlabel \"" << s << '\"' << std::endl;
}

void gnuplot::textoY(const std::string& s) {
    F << "set ylabel \"" << s << '\"' << std::endl;
}

void gnuplot::title(const std::string& s) {
    F << "set title \"" << s << '\"' << std::endl;
}

void gnuplot::define(const std::string& constant, const std::string& value) {
    F << constant << " = " << value << std::endl;
}

void gnuplot::rangoX(double inf, double sup) {
    F << "set xrange [" << inf << ':' << sup << ']' << std::endl;
}

void gnuplot::rangoX(int inf, int sup) {
    F << "set xrange [" << inf << ':' << sup << ']' << std::endl;
}

void gnuplot::rangoX(const std::string& inf, const std::string& sup) {
    F << "set xrange [" << inf << ':' << sup << ']' << std::endl;
}

void gnuplot::rangoY(double inf, double sup) {
    F << "set yrange [" << inf << ':' << sup << ']' << std::endl;
}

void gnuplot::rangoY(const std::string& inf, const std::string& sup) {
    F << "set yrange [" << inf << ':' << sup << ']' << std::endl;
}

void gnuplot::rangoY(int inf, int sup) {
    F << "set yrange [" << inf << ':' << sup << ']' << std::endl;
}

void gnuplot::linea(const std::string& line) {
    F << line << std::endl;
}

void gnuplot::muestra() const {
    std::string command = "gnuplot " + file;
    std::system(command.c_str());
}

void gnuplot::guarda_script(const std::string& filename) const {
    std::string command = "cp -f " + file + ' ' + filename;
    std::system(command.c_str());
}

void gnuplot::leyenda(bool presente) {
	if (!presente) F << "un";
	F << "set key" << std::endl;
}
