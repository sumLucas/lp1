#ifndef LISTAORDENADA_H
#define LISTAORDENADA_H


#include "Lista.h"
#include <algorithm>
#include <vector>


template <class T>
class ListaOrdenada : public Lista<T> {
public:
    template <class Comparar>
    void ordenar(Comparar comp) { 
        std::sort(Lista<T>::begin(), Lista<T>::end(), comp); 
    }
};

#endif // LISTAORDENADA_H



