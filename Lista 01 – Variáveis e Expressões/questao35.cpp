#include <iostream>
#include <math.h>
using namespace std;

/*
Sejam a e b os catetos de um triângulo, onde a hipotenusa e obtida pela equação:
hipotenusa = √a^2 + b^2. Faça um programa que receba os valores de a e b e calcule
o valor da hipotenusa atraves da equação. Imprima o resultado dessa operação.
*/
int main()
{
    float catetoA, catetoB;
    cout << "Digite o valor do primeiro cateto" << endl;
    cin >> catetoA;
    cout << "Digite o valor do segundo cateto" << endl;
    cin >> catetoB;
    cout << "Hipotenusa: " << sqrt((catetoA * catetoA) + (catetoB * catetoB));
    return 0;
}