#ifndef PAR_H
#define PAR_H

#include <iostream>
#include <string>

template <class T>
class Par {
private:
    T primeiroValor;
    T segundoValor;

public:
    Par(T primeiro, T segundo) : primeiroValor(primeiro), segundoValor(segundo) {}

    void saida() const {
        std::cout << "[" << primeiroValor << ", " << segundoValor << "]";
    }

    char compararCom(Par& outroPar) {
        if (primeiroValor < outroPar.primeiroValor) {
            return '<';
        } else if (primeiroValor > outroPar.primeiroValor) {
            return '>';
        } else {
            if (segundoValor < outroPar.segundoValor) {
                return '<';
            } else if (segundoValor > outroPar.segundoValor) {
                return '>';
            } else {
                return '=';
            }
        }
    }

    void mostrarComparacao(Par& outroPar) {
        saida();
        char comparacao = compararCom(outroPar);
        std::cout << " " << comparacao << " ";
        outroPar.saida();
        std::cout << std::endl;
    }
};

#endif
