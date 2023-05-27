#include <iostream>

using namespace std;

int main() { 

    int num_reabastecimentos, num_voltas;
    float comp_pista_m, consumo_comb, salario_final, consumo_total, qtd_litros;

    cout << "Digite o comprimento da pista (em metros): ";
    cin >> comp_pista_m;
    cout << "Digite o número de voltas a serem percorridas: ";
    cin >> num_voltas;
    cout << "Digite o número de reabastecimentos desejados: ";
    cin >> num_reabastecimentos;
    cout << "Digite o consumo de combustível do carro (Km/L): ";
    cin >> consumo_comb;

    comp_pista_m = comp_pista_m / 1000;
    consumo_total = comp_pista_m * num_voltas / consumo_comb;
    qtd_litros = consumo_comb / (num_reabastecimentos + 1);

    cout << endl << "Quantidade de litros necessários: " <<  qtd_litros << endl << endl;
}