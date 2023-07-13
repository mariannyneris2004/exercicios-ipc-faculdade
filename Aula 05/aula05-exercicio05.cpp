#include <iostream>
#include <cmath>

using namespace std;

int main(){

    float pe, polegada, jarda, milha;

    cout << "Informe um valor em pés: ";
    cin >> pe;

    polegada = pe * 12;
    jarda = pe / 3;
    milha = jarda / 1760;

    cout << endl << "Valor em polegadas: " << polegada << endl
    << "Valor em jardas: " << jarda << endl
    << "Valor em milhas: " << milha << endl;
}
