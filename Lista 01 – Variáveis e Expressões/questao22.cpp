#include <iostream>
using namespace std;

/*
Leia um valor de comprimento em jardas e apresente-o convertido em metros. A fórmula
de conversão é: M = 0,91 ∗ J, sendo J o comprimento em jardas e M o comprimento
em metros.
*/
int main()
{
    float comprimento;
    cout << "Digite o comprimento em jardas" << endl;
    cin >> comprimento;
    cout << "Comprimento em metros: " << 0.91 * comprimento << endl;
    return 0;
}