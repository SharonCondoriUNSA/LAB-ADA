#include "Funciones.h"
#include <fstream>
#include <sstream>

std::vector<Ropa> Funciones::cargarDatos(const std::string &filename) {
    std::vector<Ropa> lista;
    std::ifstream archivo(filename);
    std::string linea;

    while (getline(archivo, linea)) {
        std::stringstream ss(linea);
        std::string idStr, nombre, precioStr;

        getline(ss, idStr, ';');
        getline(ss, nombre, ';');
        getline(ss, precioStr, ';');

        int id = std::stoi(idStr);
        double precio = std::stod(precioStr);

        lista.push_back(Ropa(id, nombre, precio));
    }
    return lista;
}

void Funciones::exportarCSV(const std::string &filename, const std::vector<Ropa> &lista) {
    std::ofstream archivo(filename);
    archivo << "ID,Nombre,Precio\n";
    for (auto &r : lista) {
        archivo << r.id << "," << r.nombre << "," << r.precio << "\n";
    }
}
