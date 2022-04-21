#include <iostream>
#include <math.h>
using namespace std;

// Leia um numero real e imprima o resultado do quadrado desse número.
int main()
{
    float numero;
    cout << "Digite um número real" << endl;
    cin >> numero;
    cout << "Quadrado do número digitado: " << sqrt(numero);
    return 0;
}