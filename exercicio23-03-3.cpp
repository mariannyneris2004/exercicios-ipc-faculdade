#include <iostream>

using namespace std;

int main() {
    float salario_antigo, salario_novo, aumento_porcentagem;

    cout << "PROGRAMA PARA O CÁLCULO DE SALÁRIO COM AUMENTO" << endl << endl;
    cout << "Digite seu salário atual: R$";
    cin >> salario_antigo;
    cout << "Agora digite o percentual de aumento: ";
    cin >> aumento_porcentagem;

    if (aumento_porcentagem >= 1) {
        aumento_porcentagem = aumento_porcentagem / 100;
    } else if (aumento_porcentagem <= 0) {
        aumento_porcentagem = aumento_porcentagem;
    }

    salario_novo = salario_antigo + (salario_antigo * aumento_porcentagem);

    cout << endl << "Seu novo salário é de R$" << salario_novo << endl << endl;
}