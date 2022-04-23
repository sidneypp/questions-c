#include <iostream>
using namespace std;

/*
Faça a leitura de três valores e apresente como resultado a soma dos quadrados dos
três valores lidos.
*/
int main()
{
    float numero1, numero2, numero3, soma;
    cout << "Digite o primeiro número" << endl;
    cin >> numero1;
    cout << "Digite o segundo número" << endl;
    cin >> numero2;
    cout << "Digite o terceiro número" << endl;
    cin >> numero3;
    soma = (numero1 * numero1) + (numero2 * numero2) + (numero3 * numero3);
    cout << "Soma dos quadrados dos números digitados: " << soma << endl;
    return 0;
}