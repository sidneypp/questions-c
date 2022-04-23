#include "iostream"
using namespace std;

/*
Leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius.
A formula de conversão é: C = 5.0 ∗ (F − 32.0)/9.0, sendo C a temperatura em Celsius
e F a temperatura em Fahrenheit.
*/
int main()
{
    float temperatura;
    cout << "Digite a temperatura em graus Fahrenheit" << endl;
    cin >> temperatura;
    cout << "Temperatura em graus Celsius: " << 5.0 * (temperatura - 32) / 9.0 << endl;
    return 0;
}