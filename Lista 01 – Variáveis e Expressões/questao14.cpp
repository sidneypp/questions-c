#include <iostream>
using namespace std;

/*
Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de conversão
é: R = G ∗ π/180, sendo G o ângulo em graus e R em radianos e π = 3.14.
*/
int main()
{
    const float PI = 3.14;
    float angulo;
    cout << "Digite o angulo em graus" << endl;
    cin >> angulo;
    cout << "Angulo em radianos: " << angulo * PI / 180 << endl;
    return 0;
}