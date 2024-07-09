#include <iostream>
#include <string.h>

#include "ComplexNumber.h"
int main(int argc, char *argv[]) {

    int UNARY_OPERATION_PARAMETERS = 3; // Quantidade de parâmetros esperados para uma operação unária.
    int BINARY_OPERATION_PARAMETERS = 4; // Quantidade de parâmetros esperados para uma operação binária.

    if (argc > BINARY_OPERATION_PARAMETERS) {                     // OPERAÇÕES BINÁRIAS

        ComplexNumber leftOperand(atof(argv[2]), atof(argv[3]));      // Operando da esquerda
        ComplexNumber rightOperand(atof(argv[4]), atof(argv[5]));     // Operando da direita

        if (strcmp(argv[1], "+") == 0) {                              // Ex: complexo + 1 2 3 4
            std::cout << leftOperand + rightOperand << std::endl;
        } else if (strcmp(argv[1], "-") == 0) {                       // Ex: complexo - 1 2 3 4
            std::cout << leftOperand - rightOperand << std::endl;
        } else if (strcmp(argv[1], "*") == 0) {                       // Ex: complexo * 1 2 3 4
            std::cout << leftOperand * rightOperand << std::endl;
        } else {
            std::cout << "Operação inválida ou quantidade de parâmetros incorreta. Encerrando o programa..." << std::endl;
            return -1;
        }

    } else if (argc > UNARY_OPERATION_PARAMETERS) {               // OPERAÇÕES UNÁRIAS

        ComplexNumber operand(atof(argv[2]), atof(argv[3]));          // Operando único

        if (strcmp(argv[1], "-") == 0) {                              // Ex: complexo - 1 2
            std::cout << -operand << std::endl;
        } else if (strcmp(argv[1], "!") == 0) {                       // Ex: complexo ! 1 2
            std::cout << !operand << std::endl;
        } else {
            std::cout << "Operação inválida ou quantidade de parâmetros incorreta. Encerrando o programa..." << std::endl;
            return -1;
        }

    } else {
        std::cout << "Quantidade de parâmetros insuficientes. Encerrando o programa..." << std::endl;
        return -1;
    }

    return 0;
}
