#include <iostream>

using namespace std;

int main(){

    float altura, raio, quantidade, total_latas, area_base, area_lateral, area_total, custo, litros_necessarios;
    const float pi = 3.14;

    cout << "Informe a quantidade de cilindros a serem pintados: ";
    cin >> quantidade;
    cout << "Informe o valor do raio: ";
    cin >> raio;
    cout << "Informe o valor da altura: ";
    cin >> altura;

    area_base = pi * raio * raio;
    area_lateral = 2 * pi * raio * altura;
    area_total = (2 * area_base + area_lateral) / 10000;
    litros_necessarios = area_total / 3;
    total_latas = litros_necessarios / 5;
    custo = total_latas * 50;
    
    cout << endl << "Latas necessárias: " << total_latas << endl <<
    "Custo: R$" << custo << endl;
}