#ifndef RETANGULO_H
#define RETANGULO_H

#include <iostream>
#include "forma.h"

class Retangulo : public Forma{
    private:
        int m_largura;
        int m_altura;
        Vetor2D centro;

    public:
        Retangulo() : m_largura(0), m_altura(0), centro(Vetor2D(0, 0)){}
        Retangulo(int largura, int altura, int x, int y) : m_largura(largura), m_altura(altura), centro(Vetor2D(x, y)){}

        double area() const override {return m_largura * m_altura;}
        double perimetro() const override {return 2 *(m_largura + m_altura);}
        Vetor2D getCentro() const override {return centro;}

        void desenhar() const override{
            for (int i = 0; i < m_altura; ++i) {
                for (int j = 0; j < m_largura; ++j) {
                    if (i == 0 || i == m_altura - 1 || j == 0 || j == m_largura - 1) {
                        std::cout << "* ";
                    } else {
                        std::cout << "  ";
                    }
                }
                std::cout << std::endl;
            }
        }        


// sobrecarga de operador usando funcao amiga
        friend std::ostream& operator<<(std::ostream& os, const Retangulo& ret){
            os << "Retangulo com altura " << ret.m_altura << " e largura " << ret.m_largura;
            return os;
        }
        
};

#endif