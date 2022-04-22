#include <iostream>
using namespace std;

/*
Leia um valor de volume em litros e apresente-o convertido em metros cúbicos m3. A
fórmula de conversão é: M = L/1000, sendo L o volume em litros e M o volume em metros
cubicos.
*/
int main()
{
    float volume;
    cout << "Digite o volume em litros" << endl;
    cin >> volume;
    cout << "Volume em metros cubicos: " << volume / 1000;
    return 0;
}