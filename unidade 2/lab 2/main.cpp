#include "par.h"

int main() {

    Par<int> intPair(4, 6);
    Par<int> intOtherPair(3, 5);
    intPair.mostrarComparacao(intOtherPair);

    Par<double> doublePair(4.3, 2.1);
    Par<double> doubleOtherPair(4.3, 2.1);
    doublePair.mostrarComparacao(doubleOtherPair);

    Par<std::string> wordPair("one", "two");
    Par<std::string> wordOtherPair("three", "four");
    wordPair.mostrarComparacao(wordOtherPair);

    return 0;
}