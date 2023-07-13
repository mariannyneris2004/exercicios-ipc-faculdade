#include <iostream>

using namespace std;

void metade(int num){
    int resultado;
    resultado = num / 2;
    cout << resultado << " ";
}

int main(){
    int vetor[30];

    cout << "Escreva um vetor com 30 números: ";
    for (int i = 0; i < 30; i++){
        cin >> vetor[i];
    }

    cout << "O novo vetor será: ";
    for (int i = 0; i < 30; i++){
        metade(vetor[i]);
    }
}