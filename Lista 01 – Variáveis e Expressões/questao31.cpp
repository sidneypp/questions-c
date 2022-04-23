#include <iostream>
using namespace std;

/*
Leia um numero inteiro e imprima o seu antecessor e o seu sucessor
*/
int main()
{
    int numero;
    cout << "Digite um numero inteiro" << endl;
    cin >> numero;
    cout << "Antecessor: " << numero - 1 << endl;
    cout << "Sucessor: " << numero + 1 << endl;
    return 0;
}