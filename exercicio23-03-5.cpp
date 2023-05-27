#include <iostream>

using namespace std;

int main() {

    float peso_racao, qtd_comida_1, qtd_comida_2, resto, qtd_comida;
    const int dias = 5;

    cout << "PROGRAMA PARA CÁLCULO DE RESTO DE RAÇÃO" << endl;
    cout << "Escreva quantos quilos possui a ração: ";
    cin >> peso_racao;
    cout << "Escreva a quantidade de gramas para o 1° cachorro: ";
    cin >> qtd_comida_1;
    cout << "Escreva a quantidade de gramas para o 2° cachorro: ";
    cin >> qtd_comida_2;

    qtd_comida = (qtd_comida_1 + qtd_comida_2) / 1000;
    resto = peso_racao - (qtd_comida * dias);

    cout << "O resto da ração, após " << dias << " dias será de " << resto << "Kg" << endl << endl;
}