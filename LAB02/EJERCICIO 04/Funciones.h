#ifndef FUNCIONES_H
#define FUNCIONES_H

#include "Ropa.h"
#include <vector>
#include <string>

class Funciones {
public:
    static std::vector<Ropa> cargarDatos(const std::string &filename);
    static void exportarCSV(const std::string &filename, const std::vector<Ropa> &lista);
};

#endif
