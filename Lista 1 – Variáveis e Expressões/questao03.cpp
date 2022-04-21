#include <iostream>
using namespace std;

// Peça ao usuário para digitar três es valores inteiros e imprima a soma deles.
int main()
{
    int numero1, numero2, numero3;
    cout << "Digite o primeiro número" << endl;
    cin >> numero1;
    cout << "Digite o segundo número" << endl;
    cin >> numero2;
    cout << "Digite o terceiro número" << endl;
    cin >> numero3;
    cout << "Soma dos números digitados: " << numero1 + numero2 + numero3;
    return 0;
}