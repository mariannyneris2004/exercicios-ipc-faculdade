#include <iostream>

using namespace std;

float maiorMenor(float num1, float num2){
    if(num1 > num2){
        return num1;
    } else if (num2 > num1){
        return num2;
    } else {
        return 0;
    }
}

int main() {
    float num1, num2, resposta;

    cout << "Escreva o primeiro número: ";
    cin >> num1;
    cout << "Escreva o segundo número: ";
    cin >> num2;

    if (num1 > 0 && num2 > 0){
        resposta = maiorMenor(num1, num2);
        if (resposta != 0){
            cout << "O maior número é " << resposta << endl;
        } else {
            cout << "Os números são iguais." << endl;
        }
    } else {
        cout << "Você precisa digitar números maiores que 0." << endl;
    }
}