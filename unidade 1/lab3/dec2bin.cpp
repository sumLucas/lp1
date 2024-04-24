#include <iostream>
#include "dec2bin.h"

using namespace std;


int dec2bin(int dec) {
    // Base
    if (dec <= 1) {
        return dec;
    }

    //Recursao
    int resto = dec % 2;
    return resto + 10 * dec2bin(dec / 2);
}