#ifndef AUTOCOMPLETAR_H
#define AUTOCOMPLETAR_H

#include <fstream>
#include <vector>
#include <algorithm>
#include "sort.h"
#include "termo.h"

class Autocompletar{
    private:        
        Sort<Termo> termos;
        std::string m_termo;
        long long m_peso;
        
    public:
        Autocompletar(std::string dataset);

        int encontrarInicio(std::string prefixo);

        int encontrarFim(std::string prefixo);

        std::vector<Termo> autocompletar(std::string prefixo, int n);
};

#endif