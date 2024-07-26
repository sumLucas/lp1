#ifndef FORMA_H
#define FORMA_H

#include "desenhavel.h"
#include "vetor2D.h"

class Forma : public Desenhavel{
    public:
        virtual double area() const {return 0;}

        virtual double perimetro() const {return 0;}

        virtual Vetor2D getCentro() const = 0;
};

#endif