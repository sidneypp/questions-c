#include <iostream>
using namespace std;

/*
Leia um valor de volume em metros cúbicos m3 e apresente-o convertido em litros. A
fórmula de conversão é: L = 1000 ∗ M, sendo L o volume em litros e M o volume em
metros cúbicos.
*/
int main()
{
    float volume;
    cout << "Digite o volume em metros cubicos" << endl;
    cin >> volume;
    cout << "Volume em litros: " << 1000 * volume;
    return 0;
}