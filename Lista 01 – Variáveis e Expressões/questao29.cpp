#include <iostream>
using namespace std;

/*
Leia quatro notas, calcule a média aritmética e imprima o resultado.
*/
int main()
{
    float nota1, nota2, nota3, nota4, media;
    cout << "Digite a primeira nota" << endl;
    cin >> nota1;
    cout << "Digite a segunda nota" << endl;
    cin >> nota2;
    cout << "Digite a terceira nota" << endl;
    cin >> nota3;
    cout << "Digite a quarta nota" << endl;
    cin >> nota4;
    media = (nota1 + nota2 + nota3 + nota4) / 4;
    cout << "Media aritmetica: " << media << endl;
    return 0;
}