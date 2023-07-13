#include <iostream>

using namespace std;

int main(){

    float salario_minimo, horas_trabalhadas, salario_bruto, salario_final;
    const float imposto = 0.03;

    cout << "Digite o valor do salário mínimo: R$";
    cin >> salario_minimo;
    cout << "Digite o valor das horas trabalhadas: ";
    cin >> horas_trabalhadas;

    salario_bruto = horas_trabalhadas * (salario_minimo / 5);
    salario_final = salario_bruto - (salario_bruto * imposto);

    cout << endl << "O salário final será de " << salario_final <<endl;
}