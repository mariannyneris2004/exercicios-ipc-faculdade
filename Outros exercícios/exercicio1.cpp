#include <iostream>

using namespace std;

int main(){

    float num1, num2, soma, sub, div, mult;

    cout << "Digite o primeiro número inteiro: ";
    cin >> num1;
    cout << "Digite o segundo número inteiro: ";
    cin >> num2;

    soma = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = num1 / num2;

    cout << endl << "Resultado da soma: " <<  soma;
    cout << endl << "Resultado da subtração: " <<  sub;
    cout << endl << "Resultado da multiplicação: " <<  mult;
    cout << endl << "Resultado da divisão: " <<  div << endl << endl;
}