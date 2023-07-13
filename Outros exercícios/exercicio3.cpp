#include <iostream>

using namespace std;

int main(){

    float combustivel, km_rodados, consumo;

    cout << "Digite a distância total percorrida (em Km): ";
    cin >> km_rodados;
    cout << "Digite a quantidade de combustível gasto (em L): ";
    cin >> combustivel;

    consumo = km_rodados / combustivel;

    cout << endl << "O consumo médio de combustível é de " << consumo << "Km por L."<< endl;
}