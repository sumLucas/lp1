#include <iostream>
#include <cmath>

#include "cubo.h"
#include "paralelepipedo.h"
#include "esfera.h"

int main() {

    Cubo c1(1.5);

    Esfera e1(1);
    Esfera e2(M_PI);

    Paralelepipedo p1(1, 2, 3);
    Paralelepipedo p2(2.5, 3.7, 2.9);
    Paralelepipedo p3(1, 1, 2);

    std::cout << "Cubo c1(" << c1.getAresta() << ") = A=" << c1.area() << ", V=" << c1.volume() << std::endl;

    std::cout << "Esfera e1(" << e1.getRaio() << ") = A=" << e1.area() << ", V=" << e1.volume() << std::endl;
    std::cout << "Esfera e2(" << e2.getRaio() << ") = A=" << e2.area() << ", V=" << e2.volume() << std::endl;
    
    std::cout << "Paralelepipedo p1(" << p1.getAresta1() << ", " << p1.getAresta2() << ", " << p1.getAresta3() << ") = A=" << p1.area() << ", V=" << p1.volume() << std::endl;
    std::cout << "Paralelepipedo p2(" << p2.getAresta1() << ", " << p2.getAresta2() << ", " << p2.getAresta3() << ") = A=" << p2.area() << ", V=" << p2.volume() << std::endl;
    std::cout << "Paralelepipedo p3(" << p3.getAresta1() << ", " << p3.getAresta2() << ", " << p3.getAresta3() << ") = A=" << p3.area() << ", V=" << p3.volume() << std::endl;

    std::cout << "Total de Cubo(s): " << Cubo::getTotal() << std::endl;
    std::cout << "Total de Esfera(s): " << Esfera::getTotal() << std::endl;
    std::cout << "Total de Paralelepipedo(s): " << Paralelepipedo::getTotal() << std::endl;

    
    return 0;
}