#include<iostream>

using namespace std;

int main() {
    int matriz[5][5], valor_x;
    bool possui = false;
    
    cout<<"Escreva uma matriz 5x5 (sem repetir valores): ";
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            cin >> matriz[i][j];
        }
    }
    
    cout << endl << "Informe um número para ser buscado na matriz: ";
    cin >> valor_x;
    
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            if (valor_x == matriz[i][j]){
                possui = true;
            }
        }
    }
    
    if (possui){
        cout << endl << "O número " << valor_x << " se encontra na matriz.";
    } else {
        cout << endl << "O número " << valor_x << " não se encontra na matriz.";
    }
}
