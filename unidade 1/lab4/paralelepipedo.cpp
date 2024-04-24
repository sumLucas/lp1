#include "paralelepipedo.h"
#include <cmath>

int Paralelepipedo::contadorTotal = 0;

Paralelepipedo::Paralelepipedo() {
    m_aresta1 = 0;
    m_aresta2 = 0;
    m_aresta3 = 0;
    contadorTotal++;
}

Paralelepipedo::Paralelepipedo(double aresta1, double aresta2, double aresta3)
    : m_aresta1(aresta1), m_aresta2(aresta2), m_aresta3(aresta3)
{
    contadorTotal++;
}

double Paralelepipedo::area(){
    return (2 * m_aresta1 * m_aresta2) + (2 * m_aresta1 * m_aresta3) + (2 * m_aresta2 * m_aresta3);
}

double Paralelepipedo::volume(){
    return (m_aresta1 * m_aresta2 * m_aresta3);
}

double Paralelepipedo::getAresta1() { 
    return m_aresta1;
}

void Paralelepipedo::setAresta1(double aresta) {
    m_aresta1 = aresta;
}

double Paralelepipedo::getAresta2() { 
    return m_aresta2;
}

void Paralelepipedo::setAresta2(double aresta) {
    m_aresta2 = aresta;
}

double Paralelepipedo::getAresta3() { 
    return m_aresta3;
}

void Paralelepipedo::setAresta3(double aresta) {
    m_aresta3 = aresta;
}

int Paralelepipedo::getTotal() {
    return contadorTotal;
}