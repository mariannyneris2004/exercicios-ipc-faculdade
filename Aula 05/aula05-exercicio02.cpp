#include <iostream>
#include <cmath>

using namespace std;

int main(){

    float altura, distancia, tamanho_escada;

    cout << "Informe o tamanho da escada: ";
    cin >> tamanho_escada;
    cout << "Informe a altura em que deseja pregar o quadro: ";
    cin >> altura;

    distancia = sqrt((pow(tamanho_escada, 2)) - (pow(altura, 2)));
    
    cout << endl << "A distância entre a escada e a parede deve ser de " << distancia << endl;
}
