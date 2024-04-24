#include <iostream>
using namespace std;

int main()
{
    float nota1, nota2, 
          nota3, media;

    cout << "Entre com a nota da unidade 1: ";
    cin >> nota1;

    cout << "Entre com a nota da unidade 2: ";
    cin >> nota2;
    
    cout << "Entre com a nota da unidade 3: ";
    cin >> nota3;

    media = (nota1+nota2+nota3)/3;

    cout << "Média: " << media;

    return 0;
}