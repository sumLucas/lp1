#include <iostream>

using namespace std;

int primo(int n, int divisor = 2) {
    // Caso base
    if (n <= 2) {
        if (n == 2) return 1; 
        else return 0; 
    }
    if (n % divisor == 0) {
        return 0; 
    }
    if (divisor * divisor > n) {
        return 1; 
    }
    
    return primo(n, divisor + 1);
}


int main(){
    int n;
    cout << "Entre com um número inteiro positivo: ";
    cin >> n;

    
    int resultado = primo(n);
    
    if (resultado) {
        cout << "O número " << n << " é primo." << endl;
    } else {
        cout << "O número " << n << " não é primo." << endl;
    }

    return 0;
}
