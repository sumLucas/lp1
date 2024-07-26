#include <iostream>
#include "quadrado.h"
#include "retangulo.h"
#include "circulo.h"
#include "triangulo.h"

int main() {

    Quadrado quad(10, 5, 5); // (lado, x, y)
    std::cout << "Area: " << quad.area() << std::endl;
    std::cout << "Perimetro: " << quad.perimetro() << std::endl;
    std::cout << "Centro: (" << quad.getCentro().getX() << ", "<< quad.getCentro().getY() << ")" << std::endl;
    std::cout << std::endl;
    quad.desenhar();

    std::cout << std::endl;

    Retangulo ret(11, 5, 5, 2); // (largura, altura, x, y)
    std::cout << "Area: " << ret.area() << std::endl;
    std::cout << "Perimetro: " << ret.perimetro() << std::endl;
    std::cout << "Centro: (" << ret.getCentro().getX() << ", "<< ret.getCentro().getY() << ")" << std::endl;
    std::cout << std::endl;
    ret.desenhar();

    std::cout << std::endl;

    Triangulo tri(7, 5, 5, 5); // (base, altura, x, y)
    std::cout << "Area: " << tri.area() << std::endl;
    std::cout << "Perimetro: " << tri.perimetro() << std::endl;
    std::cout << "Centro: (" << tri.getCentro().getX() << ", "<< tri.getCentro().getY() << ")" << std::endl;
    std::cout << std::endl;
    tri.desenhar();

    std::cout << std::endl;

    Circulo circ(5, 4, 4); // (raio, x, y)
    std::cout << "Area: " << circ.area() << std::endl;
    std::cout << "Perimetro: " << circ.perimetro() << std::endl;
    std::cout << "Centro: (" << circ.getCentro().getX() << ", "<< circ.getCentro().getY() << ")" << std::endl;
    std::cout << std::endl;
    circ.desenhar();

    return 0;
}