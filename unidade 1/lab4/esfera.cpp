#include "esfera.h"
#include <cmath>

int Esfera::contadorTotal = 0;

Esfera::Esfera() {
    m_raio = 0;
    contadorTotal++;
}

Esfera::Esfera(double raio)
    : m_raio(raio)
{
    contadorTotal++;
}

double Esfera::area(){
    return 4 * M_PI * pow(m_raio,2);
}

double Esfera::volume(){
    return 4/3 * M_PI * pow(m_raio,3);
}

double Esfera::getRaio() { 
    return m_raio;
}

void Esfera::setRaio(double raio) {
    m_raio = raio;
}

int Esfera::getTotal() {
    return contadorTotal;
}

