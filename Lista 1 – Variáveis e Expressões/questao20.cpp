#include <iostream>
using namespace std;

/*
Leia um valor de massa em quilogramas e apresente-o convertido em libras. A fórmula
de conversão é: L = K/0,45, sendo K a massa em quilogramas e L a massa em libras.
*/
int main()
{
    float massa;
    cout << "Digite a massa em quilogramas" << endl;
    cin >> massa;
    cout << "Massa em libras: " << massa / 0.45;
    return 0;
}