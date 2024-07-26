#ifndef TRIANGULO_H
#define TRIANGULO_H

#include <iostream>
#include <cmath>
#include "forma.h"

class Triangulo: public Forma{
    private:
        int m_base;
        int m_altura;
        Vetor2D centro;

    public:
        Triangulo() : m_base(0), m_altura(0), centro(Vetor2D(0, 0)){}
        Triangulo(int base, int altura, int x, int y) : m_base(base), m_altura(altura), centro(Vetor2D(x, y)){}

        double area() const override {return (m_base * m_altura) / 2.0;}
        double perimetro() const override {
            double lado = std::sqrt((m_base / 2.0) * (m_base / 2.0) + m_altura * m_altura);
            return m_base + 2 * lado;
        }
        Vetor2D getCentro() const override {return centro;}

        void desenhar() const override{
            int mid = m_base / 2;
            for (int i = 0; i < m_altura; ++i) {
                for (int j = 0; j < m_base; ++j) {
                    if (j == mid - i || j == mid + i || i == m_altura - 1) {
                        std::cout << "* ";
                    } else {
                        std::cout << "  ";
                    }
                }
                std::cout << std::endl;
            }
        }


// sobrecarga de operador usando funcao amiga
        friend std::ostream& operator<<(std::ostream& os, const Triangulo& tri){
            os << "Triangulo com base " << tri.m_base << " e altura " << tri.m_altura;
            return os;
        }

};

#endif