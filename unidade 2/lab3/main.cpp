#include "quadrado.h"
#include "retangulo.h"
#include <iostream>

class Vetor2D {
private:
    int x;
    int y;

public:
    // Construtor padrão
    Vetor2D() : x(0), y(0) {}

    // Construtor parametrizado
    Vetor2D(int x, int y) : x(x), y(y) {}

    // Getter para x
    int getX() const { return x; }

    // Setter para x
    void setX(int x) { this->x = x; }

    // Getter para y
    int getY() const { return y; }

    // Setter para y
    void setY(int y) { this->y = y; }
};

class Desenhavel {
public:
    virtual void desenhar() const = 0;
};



class Forma: public Desenhavel{
    public:
        virtual double area() const { return 0; }

        virtual double perimetro() const { return 0; }

        virtual Vetor2D getCentro() const = 0;
};


int main() {

    Quadrado quad(10, 10);
    std::cout << "Area: " << quad.area() << std::endl;
    std::cout << "Perimetro: " << quad.perimetro() << std::endl;
    std::cout << "Centro: (" << quad.getCentro().getX() << ", "<< quad.getCentro().getY() << ")" << std::endl;
    std::cout << std::endl;
    quad.desenhar();

    std::cout << std::endl;

    Retangulo ret(11, 5);
    std::cout << "Area: " << ret.area() << std::endl;
    std::cout << "Perimetro: " << ret.perimetro() << std::endl;
    std::cout << "Centro: (" << ret.getCentro().getX() << ", "<< ret.getCentro().getY() << ")" << std::endl;
    std::cout << std::endl;
    ret.desenhar();

    return 0;
}

