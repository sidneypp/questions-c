#include <iostream>
using namespace std;

/*
Leia uma distancia em milhas e apresente-a convertida em quilômetros. A fórmula de
conversão é: K = 1,61 ∗ M, sendo K a distancia em quilômetros e M em milhas.
*/
int main()
{
    float distancia;
    cout << "Digite a distancia em milhas" << endl;
    cin >> distancia;
    cout << "Distancia em quilometros: " << 1.61 * distancia << endl;
    return 0;
}