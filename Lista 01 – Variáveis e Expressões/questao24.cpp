#include <iostream>
using namespace std;

/*
Leia um valor de área em metros quadrados m2 e apresente-o convertido em acres. A
formula de conversão é: A = M ∗ 0,000247, sendo M a área em metros quadrados e A
a área em acres.
*/
int main()
{
    float area;
    cout << "Digite a area em metros quadrados" << endl;
    cin >> area;
    cout << "area em acres: " << area * 0.000247 << endl;
    return 0;
}