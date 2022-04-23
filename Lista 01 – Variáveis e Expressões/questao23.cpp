#include <iostream>
using namespace std;

/*
Leia um valor de comprimento em metros e apresente-o convertido em jardas. A fórmula
de conversão é: J = M/0,91, sendo J o comprimento em jardas e M o comprimento em
metros.
*/
int main()
{
    float comprimento;
    cout << "Digite o comprimento em metros" << endl;
    cin >> comprimento;
    cout << "Comprimento em jardas: " << comprimento / 0.91 << endl;
    return 0;
}