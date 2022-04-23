#include <iostream>
using namespace std;

/*
Leia um valor de comprimento em polegadas e apresente-o convertido em centímetros.
A formula de conversão é: C = P ∗ 2,54, sendo C o comprimento em centímetros e P o comprimento em polegadas.
*/
int main()
{
    float comprimento;
    cout << "Digite o comprimento em polegadas" << endl;
    cin >> comprimento;
    cout << "Comprimento em centímetros: " << comprimento * 2.54 << endl;
    return 0;
}