#ifndef ORDENAMIENTOS_H
#define ORDENAMIENTOS_H

#include "Ropa.h"
#include <vector>

class Ordenamientos {
public:
    static void insertionSort(std::vector<Ropa> &lista, int &comparaciones, int &intercambios);
    static void selectionSort(std::vector<Ropa> &lista, int &comparaciones, int &intercambios);
};

#endif
