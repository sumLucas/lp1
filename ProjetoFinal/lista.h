#ifndef LISTA_H
#define LISTA_H


#include <iostream>
#include <vector>


template <class T>
class Lista{
    protected:
        std::vector<T> itens;

    public:
        void inserir(T item) {
            itens.push_back(item);  // insercao
        }

        void imprimir() { // funcao imprimir da aula 14 - Slide 41
            class std::vector<T>::iterator i;  // Declara um iterador
            for (i = itens.begin(); i != itens.end(); i++) {
                std::cout << *i << " ";  // Imprime o valor apontado pelo iterador
            }
            std::cout << std::endl;  // Nova linha após imprimir todos os itens
        }

        long long tamanho() {
            return itens.size();    // retorna o tamanho
        }

        T operator[](int index) {  // sobrecarga do []
            return itens[index]; // acessa o elemento diretamente no indice "index" do vetor "itens"
        }

        class std::vector<T>::iterator begin() {
            return itens.begin(); // retorna um iterador para o inicio da lista
        }

        class std::vector<T>::iterator end() {
            return itens.end(); // retorna um iterador para marcar o final da iterecao
        }

};

#endif