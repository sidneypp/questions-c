#include <iostream>
using namespace std;

/*
Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit.
A fórmula de conversão é: F = C∗(9.0/5.0)+32.0, sendo F a temperatura em Fahrenheit
e C a temperatura em Celsius.
*/
int main()
{
    float temperatura;
    cout << "Digite a temperatura em graus Celsius" << endl;
    cin >> temperatura;
    cout << "Temperatura em graus Fahrenheit: " << temperatura * (9.0 / 5.0) + 32 << endl;
    return 0;
}