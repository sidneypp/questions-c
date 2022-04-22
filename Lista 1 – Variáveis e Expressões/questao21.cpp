#include <iostream>
using namespace std;

/*
Leia um valor de massa em libras e apresente-o convertido em quilogramas. A fórmula
de conversão é: K = L∗ 0,45, sendo K a massa em quilogramas e L a massa em libras.
*/
int main()
{
    float massa;
    cout << "Digite a massa em libras" << endl;
    cin >> massa;
    cout << "Massa em quilogramas: " << massa * 0.45;
    return 0;
}