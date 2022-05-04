#include <iostream>
using namespace std;

/*
Leia o tamanho do lado de um quadrado e imprima como resultado a sua área.
*/
int main()
{
    float lado;
    cout << "Digite o tamanho do lado de um quadrado" << endl;
    cin >> lado;
    cout << "Area do quadrado: " << lado * lado;
    return 0;
}