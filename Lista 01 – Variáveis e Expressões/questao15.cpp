#include <iostream>
using namespace std;

/*
Leia um angulo em radianos e apresente-o convertido em graus. A fórmula de conversão
é: G = R ∗ 180/π, sendo G o ângulo em graus e R em radianos e π = 3.14.
*/
int main()
{
    const float PI = 3.14;
    float angulo;
    cout << "Digite o angulo em radianos" << endl;
    cin >> angulo;
    cout << "Angulo em graus: " << angulo * 180 / PI << endl;
    return 0;
}