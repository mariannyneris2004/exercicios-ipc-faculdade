#include <iostream>

using namespace std;

int main() {
    float preco_fabrica, preco_final, preco_imposto;
    const float imposto = 0.45, porcentagem_dist = 0.28;

    cout << "PROGRAMA PARA CÁLCULO DE PREÇO FINAL DE CARRO" << endl;
    cout << "Digite o preço de fábrica do carro desejado: R$";
    cin >> preco_fabrica;

    preco_imposto = preco_fabrica + preco_fabrica * imposto;
    preco_final = preco_imposto + preco_imposto * porcentagem_dist;

    cout << endl << "O custo final ao consumidor será de R$" << preco_final << endl << endl;
}