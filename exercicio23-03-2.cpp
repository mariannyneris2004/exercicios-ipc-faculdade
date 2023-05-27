#include <iostream>

using namespace std;

int main() {
    float salario_antigo, salario_novo;
    const float aumento_porcentagem = 0.25;

    cout << "PROGRAMA PARA O CÁLCULO DE SALÁRIO COM AUMENTO" << endl << endl;
    cout << "Digite seu salário atual: R$";
    cin >> salario_antigo;

    salario_novo = salario_antigo + (salario_antigo * aumento_porcentagem);

    cout << endl << "Seu novo salário é de R$" << salario_novo << endl << endl;
}