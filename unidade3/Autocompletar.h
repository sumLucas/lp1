#ifndef AUTOCOMPLETAR_H
#define AUTOCOMPLETAR_H

#include "ListaOrdenada.h"
#include "Termo.h"
#include <fstream>
#include <vector>
#include <algorithm>

class Autocompletar {
private:
    ListaOrdenada<Termo> termos; // lista ordenada dos Termos
    std::string m_termo; // string q armazena o termo lido
    long long m_peso; // string q armazena o peso lido

public:
    Autocompletar(std::string dataset);

    int encontrarInicio(std::string prefixo);
    int encontrarFim(std::string prefixo);

    std::vector<Termo> autocompletar(std::string prefixo, int n); // Termos limitados

};

#endif // AUTOCOMPLETAR_H
