#include<iostream>

using namespace std;

int main() {
    int valor1, valor2, resultado;
    bool sinal = false;

    cout << "Escreva o numerador da divisão: ";
    cin >> valor1;
    cout << "Escreva o denominador da divisão: ";
    cin >> valor2;

    if (valor1 < 0 && valor2 < 0){
        valor1 = valor1 * -1;
        valor2 = valor2 * -1;
    } else if (valor1 > 0 && valor2 < 0) {
        valor2 = valor2 * -1;
        sinal = true;
    } else if (valor1 < 0 && valor2 > 0) {
        valor1 = valor1 * -1;
        sinal = true;
    }

    while(valor1 > 0){
        valor1 -= valor2;
        resultado++;
    }

    if(sinal == true){
        resultado *= -1;
    }

    cout << endl << "O quosciente da divisão é " << resultado << endl;
}