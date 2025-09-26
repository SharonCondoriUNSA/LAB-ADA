#ifndef ROPA_H
#define ROPA_H

#include <string>

class Ropa {
public:  //atributos
    int id;
    std::string nombre;
    double precio;

    Ropa(int id, std::string nombre, double precio); //constructor
    void mostrar(); //muestrar
};

#endif
