#include <iostream>
#include <string>
#include "Autocompletar.h"

int main(int argc, char *argv[]) {

    std::string dataset = argv[1];
    int n = std::stoi(argv[2]);

    Autocompletar autocomplete(dataset);
    std::string entrada;
    
    while (true) {
        std::cout << "Entre com o termo a ser auto-completado: (digite \"sair\" para encerrar o programa): " << std::endl;
        std::getline(std::cin, entrada);
        if (entrada == "sair") {
            break;
        }

        std::vector<Termo> resultados = autocomplete.autocompletar(entrada, n);
        
        for (int i = 0; i < resultados.size(); i++) {
            std::cout << resultados[i] << std::endl;
        }
    }

    return 0;
}
