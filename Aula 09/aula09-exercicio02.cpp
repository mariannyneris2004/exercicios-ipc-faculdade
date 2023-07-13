#include<iostream>

using namespace std;

int main() {
    int cont = 0;
    float peso, maior_peso = 0;

    cout << "Digite o peso de um animal (digite 0 para encerrar): ";
    cin >> peso;

    while(peso != 0){
        if(peso > maior_peso){
            maior_peso = peso;
        }
        cont++;
        cout << endl << "Digite o peso de um animal (digite 0 para encerrar): ";
        cin >> peso;
    }

    if (cont != 0){
        cout << endl << "O pecuarista possui " << cont << " animais, sendo " << maior_peso << "Kg o maior peso." << endl << endl;
    } else {
        cout << endl << "O pecuarista não possui animais." << endl << endl;
    }
}