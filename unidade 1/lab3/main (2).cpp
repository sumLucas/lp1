#include <iostream>
#include "dec2bin.h"

using namespace std;

int main() {

    int dec;
    cout << "Entre com um número decimal: ";
    cin >> dec;

    int bin = dec2bin(dec);

    cout << "O número " << dec << " em binário é " << bin << endl;

    return 0;

}


