#include "Ropa.h"
#include <iostream>

Ropa::Ropa(int id, std::string nombre, double precio) {
    this->id = id;
    this->nombre = nombre;
    this->precio = precio;
}

void Ropa::mostrar() {
    std::cout << "ID: " << id << " | Nombre: " << nombre << " | Precio: " << precio << "\n";
}
