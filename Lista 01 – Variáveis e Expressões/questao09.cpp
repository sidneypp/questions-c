#include <iostream>
using namespace std;

/*
Leia uma temperatura em graus Celsius e apresente-a convertida em graus Kelvin. A
formula de conversão é: K = C + 273.15, sendo C a temperatura em Celsius e K a
temperatura em Kelvin.
*/
int main()
{
    float temperatura;
    cout << "Digite a temperatura em graus Celsius" << endl;
    cin >> temperatura;
    cout << "Temperatura em graus Kelvin: " << temperatura + 273.15 << endl;
    return 0;
}