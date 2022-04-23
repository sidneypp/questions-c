#include <iostream>
using namespace std;

/*
Leia uma velocidade em km/h (quilometros por hora) e apresente-a convertida em m/s
(metros por segundo). A formula de conversão é: M = K/3.6, sendo K a velocidade em
km/h e M em m/s.
*/
int main()
{
    float velocidade;
    cout << "Digite a velocidade em km/h" << endl;
    cin >> velocidade;
    cout << "Velocidade em m/s: " << velocidade/3.6 << endl;
    return 0;
}