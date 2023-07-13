#include <iostream>

 using namespace std;

 int main(){
    int vetor_a[10], vetor_b[10];
    int cont = 9;
   
    cout << "Escreva 10 valores para o Vetor A: ";
    for (int i = 0; i < 10; i++){
        cin >> vetor_a[i];
    }

    for (int j = 0; j < 10; j++){
        vetor_b[j] = vetor_a[cont];
        cont--;
        cout << vetor_b[j] << " - ";
    }
 }