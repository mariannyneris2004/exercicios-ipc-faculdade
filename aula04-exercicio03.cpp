#include <iostream>

using namespace std;

int main(){

    float salario, retirada1, retirada2, saldo, tarifa_retirada1, tarifa_retirada2, total_tarifa;
    const float tarifa = 0.38;

    cout << "Digite o salário depositado: R$";
    cin >> salario;
    cout << "Digite o valor da primeira retirada: R$";
    cin >> retirada1;
    cout << "Digite o valor da segunda retirada: R$";    
    cin >> retirada2;

    tarifa_retirada1 = retirada1 * tarifa;
    tarifa_retirada2 = retirada2 * tarifa;
    total_tarifa = tarifa_retirada2 + tarifa_retirada1;
    saldo = salario - retirada1 - retirada2 - total_tarifa;

    cout << endl << "O saldo final será de R$" << saldo << 
    ", sendo a primeira retirada de R$" << retirada1 << 
    " e a segunda retirada de R$" << retirada2 <<
    ", sendo a tarifa total paga de R$" << total_tarifa << endl;
}