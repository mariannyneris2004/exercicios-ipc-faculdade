#include <iostream>

using namespace std;

int main(){

    float preco_combustivel, odometro_inicio, odometro_final, consumo_medio, valor_total_passageiros, combustivel_gasto, lucro, km_rodados;

    cout << "Informe o preço do combustível: R$ ";
    cin >> preco_combustivel;
    cout << "Informe o valor do odômetro no início do dia: ";
    cin >> odometro_inicio;
    cout << "Informe o valor do odômetro no final do dia: ";
    cin >> odometro_final;
    cout << "Informe o consumo médio do veículo (Km/L): ";
    cin >> consumo_medio;
    cout << "Informe o valor total recebido (R$): R$";
    cin >> valor_total_passageiros;

    km_rodados = odometro_final - odometro_inicio;
    combustivel_gasto = km_rodados / consumo_medio;
    lucro = valor_total_passageiros - (preco_combustivel * combustivel_gasto);
    
    cout << endl << "Combustível gasto: " << combustivel_gasto << endl <<
    "Lucro: R$" << lucro << endl;
}