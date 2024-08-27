#include "autocompletar.h"

Autocompletar::Autocompletar(std::string dataset){
    std::ifstream lerArquivo(dataset);

    while (lerArquivo >> m_peso){
        std::getline(lerArquivo, m_termo);

        m_termo = m_termo.substr(1);
        
        termos.inserir(Termo(m_termo, m_peso));
    }

    termos.sort([](Termo t1, Termo t2){
        return t1.getTermo() < t2.getTermo();
    });
}

int Autocompletar::encontrarInicio(std::string prefixo) {
    int esquerda = 0;
    int direita = termos.tamanho() - 1;
    int resultado = termos.tamanho(); // inicializado o tamanho da lista

    while (esquerda <= direita) {
        int meio = esquerda + (direita - esquerda) / 2;
        std::string termoAtual = termos[meio].getTermo();
        bool corresponde = true;

        for (int i = 0; i < prefixo.length(); i++) { // iteraçao de cada letra do prefixo
            if (i > termoAtual.length() || termoAtual[i] != prefixo[i]) { 
                corresponde = false;
                break;
            }
        }
        if (corresponde) {
            resultado = meio;
            direita = meio - 1;
        } else if (termoAtual < prefixo) {
            esquerda = meio + 1;
        } else {
            direita = meio - 1;
        }
    }
    return resultado;
}

// achar o fim da lista de termos que batem com o prefixo
int Autocompletar::encontrarFim(std::string prefixo) {
    int esquerda = 0;
    int direita = termos.tamanho() - 1;
    int resultado = termos.tamanho();

    while (esquerda <= direita) {
        int meio = esquerda + (direita - esquerda) / 2;
        std::string termoAtual = termos[meio].getTermo();
        bool corresponde = true;

        for (int i = 0; i < prefixo.length(); i++) {
            if (i > termoAtual.length() || termoAtual[i] != prefixo[i]) {
                corresponde = false;
                break;
            }
        }
        if (corresponde) {
            esquerda = meio + 1;
            resultado = esquerda;
        } else if (termoAtual < prefixo) {
            esquerda = meio + 1;
        } else {
            direita = meio - 1;
        }
    }
    return resultado;
}


std::vector<Termo> Autocompletar::autocompletar(std::string prefixo, int n) {
    std::vector<Termo> resultados;

    int inicio = encontrarInicio(prefixo);
    int fim = encontrarFim(prefixo);

    // Adiciona os resultados do intervalo no vetor
    for (int i = inicio; i < fim; i++) {
        resultados.push_back(termos[i]);
    }

    // Ordena o vetor de resultados por peso em ordem decrescente
    std::sort(resultados.begin(), resultados.end(), [](Termo t1, Termo t2) {
        return t1.getPeso() > t2.getPeso();
    });

    return resultados;
}













