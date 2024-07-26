#ifndef QUADRADO_H
#define QUADRADO_H

#include <iostream>
#include "forma.h"

class Quadrado : public Forma{
    private:
        int m_lado;
        Vetor2D centro;

    public:       
        Quadrado() : m_lado(0), centro(Vetor2D(0, 0)){} // construtor padrao
        Quadrado(int lado, int x, int y) : m_lado(lado), centro(Vetor2D(x, y)){}

        double area() const override {return m_lado * m_lado;}
        double perimetro() const override {return 4 * m_lado;}
        Vetor2D getCentro() const override {return centro;}

        void desenhar() const override {
            for (int i = 0; i < m_lado; ++i) {
                for (int j = 0; j < m_lado; ++j) {
                    if (i == 0 || i == m_lado - 1 || j == 0 || j == m_lado - 1) {
                        std::cout << "* ";
                    } else {
                        std::cout << "  ";
                    }
                }
                std::cout << std::endl;
            }
        }


// sobrecarga de operador usando funcao amiga
        friend std::ostream& operator<<(std::ostream& os, const Quadrado& quad){
            os << "Quadrado com lado" << quad.m_lado;
            return os;
        }

};

#endif