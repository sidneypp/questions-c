#include <iostream>
using namespace std;

/*
Leia um valor de comprimento em centímetros e apresente-o convertido em polegadas.
A fórmula de conversão é: P = C/2,54, sendo C o comprimento em centímetros
e P o comprimento em polegadas.
*/
int main()
{
    float comprimento;
    cout << "Digite o comprimento em centimetros" << endl;
    cin >> comprimento;
    cout << "Comprimento em polegadas: " << comprimento / 2.54;
    return 0;
}