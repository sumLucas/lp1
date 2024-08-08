#include "Autocompletar.h"

Autocompletar::Autocompletar(std::string dataset) { // construtor com termos do dataset
    std::ifstream lerArquivo(dataset); // abre o arquivo dataset
    while (lerArquivo >> m_peso) { 
        std::getline(lerArquivo, m_termo); // le o termo associado ao peso
        m_termo = m_termo.substr(1); // remove o espaço inicial extra
        termos.inserir(Termo(m_termo, m_peso)); // insere o Termo criado na lista termos
    }
    termos.ordenar([](Termo t1, Termo t2) { 
        return t1.getTermo() < t2.getTermo(); // retorna em ordem alfabetica
    });
}

// achar o inicio da lista de termos que batem com o prefixo
int Autocompletar::encontrarInicio(std::string prefixo) {
    int esquerda = 0;
    int direita = termos.tamanho() - 1;
    int resultado = termos.tamanho(); // inicializado o tamanho da lista

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


// metodo para encontrar os n Termos que batem com o prefixo
std::vector<Termo> Autocompletar::autocompletar(std::string prefixo, int n) {
    std::vector<Termo> resultados; // vetor resultados para armazenar o resultado

    int inicio = encontrarInicio(prefixo);
    int fim = encontrarFim(prefixo);

    for (int i = inicio; i < fim; i++) {
        resultados.push_back(termos[i]); // adiciona os resultados do intervalo no vetor
    }

    std::sort(resultados.begin(), resultados.end(), [](Termo t1, Termo t2) {
        return t1.getPeso() > t2.getPeso(); // ordena por peso
    });

    std::vector<Termo> limitados; // limita o print ao n resultados limitados no input
    for (int i = 0; i < n && i < resultados.size(); i++) {
        limitados.push_back(resultados[i]);
    }

    return limitados;
}




