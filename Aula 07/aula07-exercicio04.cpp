#include <iostream>

using namespace std;

int main() {
    float altura, peso;

    cout << "Informe sua altura (em metros): ";
    cin >> altura;
    cout << "Informe seu peso (em Kg): ";
    cin >> peso;

    cout << "Sua classificação é: ";

    if (altura < 1.2 && peso <= 60){
        cout << "A";
    } else if ((altura > 1.2 && altura < 1.7) && peso <= 60){
        cout << "B";
    } else if (altura > 1.7 && peso <= 60){
        cout << "C";
    } else if (altura < 1.2 && (peso > 60 && peso <= 90)){
        cout << "D";
    } else if ((altura > 1.2 && altura < 1.7) && (peso > 60 && peso <= 90)){
        cout << "E";
    } else if (altura > 1.7 && (peso > 60 && peso <= 90)){
        cout << "F";
    } else if (altura < 1.2 && peso > 90){
        cout << "G";
    } else if ((altura > 1.2 && altura < 1.7) && peso > 90){
        cout << "H";
    } else if (altura > 1.7 && peso > 90){
        cout << "I";
    }

    cout << endl << endl;
}