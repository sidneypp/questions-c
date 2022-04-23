#include <iostream>
using namespace std;

/*
Leia um valor de área em acres e apresente-o convertido em metros quadrados m2. A
formula de conversão é: M = A ∗ 4048,58, sendo M a área em metros quadrados e A a
área em acres.
*/
int main()
{
    float area;
    cout << "Digite a area em metros acres" << endl;
    cin >> area;
    cout << "area em metros quadrados: " << area * 4048.58 << endl;
    return 0;
}