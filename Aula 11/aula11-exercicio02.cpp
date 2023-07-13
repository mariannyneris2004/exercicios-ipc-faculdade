#include <iostream>

using namespace std;

int main(){
    int vetor_a[30], vetor_b[30];
    int cont = 29;

    cout << "Escreva 30 valores inteiros para o vetor: ";
    for (int i = 0; i <30; i++){
        cin >> vetor_a[i];
    }
    
    cout << endl << "Vetor B: ";

    for (int j = 0; j < 30; j++){
        vetor_b[j] = vetor_a[cont];
        cont--;
        cout << vetor_b[j] << " - ";
    }
}