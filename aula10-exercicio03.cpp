#include <iostream>

using namespace std;

int main() {
    int x = 0, z = 0, contador = 0;

    cout << "Digite um valor inteiro para X: ";
    cin >> x;

    cout << endl << "Digite um valor inteiro para Z (maior que X): ";
    cin >> z;

    while(z < x){
        cout << endl << "O valor de Z precisa ser maior que o valor de X.";
        cout << endl << "Digite um valor inteiro para Z (maior que X): ";
        cin >> z;
    }

    do {
        x += 1;
        contador++;
    } while(x <= z);

    cout << endl << "Foi necessário somar " << contador << " números inteiros para que X fosse maior que Z." << endl << endl;
}