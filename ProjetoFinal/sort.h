#ifndef SORT_H
#define SORT_H

#include <iostream>
#include <vector>
#include <algorithm>
#include "lista.h"


template <class T>
class Sort : public Lista<T> {
public:
    template <class Ordenar>
    void sort(Ordenar comp) { 
        std::sort(Lista<T>::begin(), Lista<T>::end(), comp); 
    }

};

#endif





