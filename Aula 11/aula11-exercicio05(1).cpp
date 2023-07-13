#include<iostream>

using namespace std;

int main() {
    char vetor[10], comparador;
    int posicao;
    bool verificacao = false, verificar = true;
    
    cout << "Escreva 10 letras do alfabeto (em minúsculo): ";
    for (int i = 0; i < 10; i++){
        cin >> vetor[i];
    }
    
    cout << "Escreva uma letra qualquer do alfabeto (em minúsculo): ";
    cin >> comparador;
    
    while (verificar == true){
        for (int i = 0; i < 10; i++){
            if (comparador == vetor[i]){
                verificacao = true;
                posicao = i;
                verificar = false;
            }
            
            if (i == 9){
                verificar = false;
            }
        }
    }

    if (verificacao == true){
        cout << endl << "A letra " << comparador << " se encontra na posição " << posicao;
    } else {
        cout << endl << "A letra " << comparador << " não está na lista de letras definidas anteriormente.";
    }
    return 0;
}
