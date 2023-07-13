#include <iostream>

using namespace std;

int somatorio(int num){
    int somatorio = 0;
    for (int i = 0; i <= num; i++){
        somatorio += i;
    }
    return somatorio;
}

int main(){
    int num, soma;

    cout << "Escreva um número: ";
    cin >> num;

    soma = somatorio(num);

    cout << "O somatório de " << num << " é igual a " << soma << endl;
}