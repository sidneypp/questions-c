#include <iostream>
using namespace std;

/*
Leia uma temperatura em graus Kelvin e apresente-a convertida em graus Celsius. A
formula de conversão é: C = K − 273.15, sendo C a temperatura em Celsius e K a
temperatura em Kelvin.
*/
int main()
{
    float temperatura;
    cout << "Digite a temperatura em graus Kelvin" << endl;
    cin >> temperatura;
    cout << "Temperatura em graus Celsius: " << temperatura - 273.15;
    return 0;
}