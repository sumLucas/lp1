#include "cubo.h"
#include <cmath>

int Cubo::contadorTotal = 0;

Cubo::Cubo() {
    m_aresta = 0;
    contadorTotal++;
}

Cubo::Cubo(double aresta)
    : m_aresta(aresta)
{
    contadorTotal++;
}

double Cubo::area(){
    return 6 * (pow(m_aresta,2));
}

double Cubo::volume(){
    return pow(m_aresta, 3);
}

double Cubo::getAresta() { 
    return m_aresta;
}

void Cubo::setAresta(double aresta) {
    m_aresta = aresta;
}

int Cubo::getTotal() {
    return contadorTotal;
}




