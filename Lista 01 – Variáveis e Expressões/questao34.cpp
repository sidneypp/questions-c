#include <iostream>
using namespace std;

/*
Leia o valor do raio de um círculo e calcule e imprima a area do círculo correspondente.
A area do círculo é π ∗ raio^2, considere π = 3.141592.
*/
int main()
{
    const float PI = 3.141592;
    float raio;
    cout << "Digite o raio de um circulo" << endl;
    cin >> raio;
    cout << "Area do circulo: " << PI * raio * raio;
    return 0;
}