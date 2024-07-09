#ifndef COMPLEXNUMBER_H
#define COMPLEXNUMBER_H

#include <iostream>
#include <cmath>

class ComplexNumber {
private:
    double real, imag;

public:
    ComplexNumber(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    // Operador de Soma
    ComplexNumber operator+(const ComplexNumber& other) const {
        return ComplexNumber(real + other.real, imag + other.imag);
    }

    // Operador de Subtração
    ComplexNumber operator-(const ComplexNumber& other) const {
        return ComplexNumber(real - other.real, imag - other.imag);
    }

    // Operador de Multiplicação
    ComplexNumber operator*(const ComplexNumber& other) const {
        return ComplexNumber(real * other.real - imag * other.imag, real * other.imag + imag * other.real);
    }

    // Operador de negação
    ComplexNumber operator-() const {
        return ComplexNumber(-real, -imag);
    }

    // Operador de módulo
    double operator!() const {
        return std::sqrt(real * real + imag * imag);
    }

    // Operador de inserção
    friend std::ostream& operator<<(std::ostream& out, const ComplexNumber& c) {
        if (c.imag >= 0) {
            out << c.real << "+" << c.imag << "i";
        } else {
            out << c.real << c.imag << "i";
        }
        return out;
    }
};

#endif // COMPLEXNUMBER_H
