#include <iostream>
using namespace std;

/*
Leia a altura e o raio de um cilindro circular e imprima o volume do cilindro.
O volume de um cilindro circular e calculado por meio da seguinte fórmula:
V = π ∗ raio^2 ∗ altura, onde π = 3.141592.
*/
int main()
{
    const float PI = 3.141592;
    float altura, raio;
    cout << "Digite a altura do cilindro" << endl;
    cin >> altura;
    cout << "Digite o raio do cilindro" << endl;
    cin >> raio;
    cout << "Volume: " << PI * (raio * raio) * altura;
    return 0;
}