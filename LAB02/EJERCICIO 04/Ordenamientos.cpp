#include "Ordenamientos.h"
#include <algorithm>

void Ordenamientos::insertionSort(std::vector<Ropa> &lista, int &comparaciones, int &intercambios) {
    int n = lista.size();
    for (int i = 1; i < n; i++) {
        Ropa key = lista[i];
        int j = i - 1;

        //para que ordene de menor a mayor
        while (j >= 0 && (++comparaciones && lista[j].precio > key.precio)) {
            lista[j + 1] = lista[j];
            j--;
            intercambios++;
        }
        lista[j + 1] = key;
    }
}

void Ordenamientos::selectionSort(std::vector<Ropa> &lista, int &comparaciones, int &intercambios) {
    int n = lista.size();
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i; // ahora buscamos el mínimo
        for (int j = i + 1; j < n; j++) {
            comparaciones++;
            if (lista[j].precio < lista[minIdx].precio) { 
                minIdx = j;
            }
        }
        if (minIdx != i) {
            std::swap(lista[i], lista[minIdx]);
            intercambios++;
        }
    }
}
