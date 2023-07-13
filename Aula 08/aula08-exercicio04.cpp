#include<iostream>

using namespace std;

int main(){
    int numero;
    bool verificacao_primo = false, verificacao_valido = false;
    
    cout << "Escreva um número inteiro maior que 1: ";
    cin >> numero;
    
    if (numero > 1){
        verificacao_valido = true;
        if (numero % 2 == 0 && numero != 2){
            verificacao_primo = false;
        } else {
            for(int i = numero; i > 1; i-= 2){
                if (numero % i == 0){
                    verificacao_primo = false;
                } 
                
                verificacao_primo = true;
            }
        }
    } else {
        verificacao_valido = false;
    }
    
    if (verificacao_valido == true && verificacao_primo == true){
        cout << endl << "Número primo!" << endl;
    } else if (verificacao_valido == true && verificacao_primo == false){
        cout << endl << "Número não primo!" << endl;
    } else if (verificacao_valido == false && verificacao_primo == false){
        cout << endl << "Número não válido!";
    }
    
}
