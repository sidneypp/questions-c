#include <iostream>
using namespace std;

/*
Leia um valor de área em hectares e apresente-o convertido em metros quadrados m2.
A formula de conversão é: M = H ∗ 10000, sendo M a área em metros quadrados e H
a área em hectares.
*/
int main()
{
    float area;
    cout << "Digite a area em hectares" << endl;
    cin >> area;
    cout << "area em metros quadrados: " << area * 10000 << endl;
    return 0;
}