#include <iostream>

using namespace std;

int main() {
    float suprimento;
    int contador = 0;

    cout << "Digite a quantidade de Quilos disponíveis no primeiro dia: ";
    cin >> suprimento;

    do {
        suprimento = suprimento / 2;
        contador++;
    } while (suprimento > 1);

    cout << endl << "A quantidade de dias necessários foi de " << contador << " dias." << endl << endl;
}
