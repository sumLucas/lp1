#include <iostream>

using namespace std;

int somaDigitos(int n) {
  if (n >= 0 && n <= 9)
    return n;

  return (n % 10) + somaDigitos(n / 10);
}

int main() {
  int input;
  cout << "Entre com um número inteiro positivo: ";
  cin >> input;

  
  int soma = somaDigitos(input); 

  cout << "A soma dos digitos de " << input << " é " << somaDigitos(input) << endl;
 

  return 0;
}