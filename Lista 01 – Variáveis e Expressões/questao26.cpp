#include <iostream>
using namespace std;

/*
Leia um valor de área em metros quadrados m2 e apresente-o convertido em hectares.
A formula de conversão é: H = M ∗ 0,0001, sendo M a área em metros quadrados e H
a área em hectares.
*/
int main()
{
    float area;
    cout << "Digite a area em metros quadrados" << endl;
    cin >> area;
    cout << "area em hectares: " << area * 0.0001 << endl;
    return 0;
}