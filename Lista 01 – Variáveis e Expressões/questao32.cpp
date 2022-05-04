#include <iostream>
using namespace std;

/*
Leia um número inteiro e imprima a soma do sucessor de seu triplo com o antecessor de seu dobro.
*/
int main()
{
    int numero;
    cout << "Digite um numero inteiro" << endl;
    cin >> numero;
    cout << "Soma do sucessor de seu triplo com o antecessor de seu dobro: ";
    cout << (numero * 3 + 1) + (numero * 2 - 1);
    return 0;
}