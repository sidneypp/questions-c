#include <iostream>
using namespace std;

/*
Leia uma velocidade em m/s (metros por segundo) e apresente-a convertida em km/h
(quilometros por hora). A fórmula de conversão é: K = M ∗ 3.6, sendo K a velocidade em km/h e M em m/s.
*/
int main()
{
    float velocidade;
    cout << "Digite a velocidade em m/s" << endl;
    cin >> velocidade;
    cout << "Velocidade em km/h: " << velocidade * 3.6;
    return 0;
}