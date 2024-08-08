#ifndef TERMO_H
#define TERMO_H

#include <string>
#include <iostream>

class Termo {
    private:
        std::string m_termo;
        long long m_peso;

    public:
        // Construtores
        Termo() : m_termo(), m_peso(0) {}
        Termo(std::string termo, long long peso) : m_termo(termo), m_peso(peso) {}

        // Retorna o termo
        std::string getTermo() {
            return m_termo;
        }

        // Retorna o peso
        long long getPeso() {
            return m_peso;
        }

        // Compara pelo peso
        static int compararPeloPeso(Termo T1, Termo T2) {
            if (T1.getPeso() > T2.getPeso()) {
                return 1;   // T1 deve vir antes de T2
            } else if (T1.getPeso() < T2.getPeso()) {
                return -1;  // T1 deve vir depois de T2
            } else {
                return 0;   // T1 e T2 têm o mesmo peso
            }
        }


        // Compara os dois termos por ordem alfabética, usando somente os n primeiros caracteres digitados pelo usuario
        static int compararPeloPrefixo(Termo T1, Termo T2, int n) {
            std::string termo1 = T1.getTermo(); 
            std::string termo2 = T2.getTermo();
            
            // 0 = posicao inicial da string, n = numero de letras a partir da posicao inicial
            // termo2 = string que eu estou comparando, posicao inicial da string que eu estou comparando
            // n = numero de letras da string 2
            int compara = termo1.compare(0, n, termo2, 0, n);

            if (compara < 0) {
                return -1; // Prefixo de T1 vem antes do prefixo de T2
            } else if (compara > 0) {
                return 1;  // Prefixo de T1 vem depois do prefixo de T2
            } else {
                return 0;  // Prefixos são iguais
            }
        }

        // Sobrecarga do operador "<" para a classe Termo
        // A sobrecarga do operador < permite o .sort ordenar uma lista de objetos com base no atributo termo
        bool operator<(Termo T2) {
            return m_termo < T2.m_termo;
        }

        // Sobrecarga do operador "<<" para a classe Termo. Note que é um método friend
        friend std::ostream& operator<<(std::ostream& out, const Termo& t) {
            out << t.m_peso << "\t" << t.m_termo;
            return out;
        }
};

#endif // TERMO_H
