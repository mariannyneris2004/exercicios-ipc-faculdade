#include <iostream>

using namespace std;

int main() {
    float kg_morango, kg_maca, desconto, total, total_morango, total_maca;

    cout << "Escreva a quantidade de morangos desejados (em Kg): ";
    cin >> kg_morango;
    cout << "Escreva a quantidade de maçãs desejadas (em Kg): ";
    cin >> kg_maca;

    if (kg_morango <= 5) {
        total_morango = kg_morango * 5;
    } else {
        total_morango = kg_morango * 4;
    }

    if (kg_maca <= 5) {
        total_maca = kg_maca * 3;
    } else {
        total_maca = kg_maca * 2;
    }

    total = total_maca + total_morango;
    desconto = total * 0.2;

    if (total > 35){
        total = total - desconto;
    }

    cout << endl << "O valor a ser pago é de R$" << total << endl;
}