#ifndef CIRCULO_H
#define CIRCULO_H

#include <iostream>
#include <cmath>
#include "forma.h"


class Circulo : public Forma{
    private:
        int m_raio;
        Vetor2D centro;

    public:
        Circulo() : m_raio(0), centro(Vetor2D(0, 0)){}
        Circulo(int raio, int x, int y) : m_raio(raio), centro(Vetor2D(x, y)){}

        double area() const override {return M_PI * m_raio * m_raio;}
        double perimetro() const override {return 2 * M_PI * m_raio;}
        Vetor2D getCentro() const override {return centro;}

        void desenhar() const override{
            int d = 2 * m_raio;
            for (int i = 0; i <= d; ++i) {
                for (int j = 0; j <= d; ++j) {
                    double distance = std::sqrt((i - m_raio) * (i - m_raio) + (j - m_raio) * (j - m_raio));
                    if (std::abs(distance - m_raio) < 1.0) {
                        std::cout << "* ";
                    } else {
                        std::cout << "  ";
                    }
                }
                std::cout << std::endl;
            }
        }


// sobrecarga de operador usando funcao amiga
        friend std::ostream& operator<<(std::ostream& os, const Circulo& circ){
            os << "Circulo com raio " << circ.m_raio;
            return os;
        }

};

#endif