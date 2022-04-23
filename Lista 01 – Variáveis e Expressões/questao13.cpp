#include <iostream>
using namespace std;

/*
Leia uma distancia em quilômetros e apresente-a convertida em milhas. A fórmula de
conversão é: M = K/1,61, sendo K a distancia em quilômetros e M em milhas.
*/
int main()
{
    float distancia;
    cout << "Digite a distancia em quilometros" << endl;
    cin >> distancia;
    cout << "Distancia em milhas: " << distancia / 1.61 << endl;
    return 0;
}