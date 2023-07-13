#include <iostream>
#include <cmath>

using namespace std;

int main(){

    float salario_minimo, quantidade_watts, total_pagar, desconto_pagar, valor_watt;

    cout << "Informe o valor do salário mínimo: R$";
    cin >> salario_minimo;
    cout << "Informe a quantidade de quilowatts consumidos pela residência: ";
    cin >> quantidade_watts;

    valor_watt = salario_minimo * 0.001;
    total_pagar = quantidade_watts * valor_watt;
    desconto_pagar = total_pagar - (total_pagar * 0.15);
    
    cout << endl << "O valor de cada quilowatt é de R$" << valor_watt << endl <<
    "O valor a ser pago pela residência é de R$" << total_pagar << endl <<
    "E o valor a ser pago com um desconto de 15% é de R$" << desconto_pagar << endl;
}
