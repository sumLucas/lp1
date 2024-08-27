#include <iostream>
#include <string>
#include "autocompletar.h"

int main(int argc, char *argv[]){

    std::string dataset = argv[1];
    int n = std::stoi(argv[2]);

    std::string entrada;


    Autocompletar autocomplete(dataset);

    while(true){
        std::cout << "Entre com o termo a ser auto-completado: (digite \"sair\" para encerrar o programa): " << std::endl;
        std::getline(std::cin, entrada);
        if(entrada == "sair"){
            break;
        }

        std::vector<Termo> resultados = autocomplete.autocompletar(entrada, n);
        
        for (int i = 0; i < n; i++) { // loop pra iterar nos resultados do autocomplete
            std::cout << resultados[i] << std::endl;
        }
    }

    return 0;
}