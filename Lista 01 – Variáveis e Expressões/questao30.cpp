#include <iostream>
using namespace std;

/*
Leia um valor em real e a cotacão do dólar. Em seguida,
imprima o valor correspondente em dólares.
*/
int main()
{
    float real, dolar;
    cout << "Digite o valor em real" << endl;
    cin >> real;
    cout << "Digite a cotacao do dolar" << endl;
    cin >> dolar;
    cout << "Valor em dolares: " << real / dolar << endl;
    return 0;
}