#include<iostream>

using namespace std;

int main() {
    int MATRIZ[5][5], soma_linha[5] = {0,0,0,0,0}, soma_coluna[5] = {0,0,0,0,0};
    
    cout<<"Escreva uma matriz 5x5 (sem repetir valores): ";
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            cin >> MATRIZ[i][j];
        }
    }
    
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            soma_coluna[j] += MATRIZ[i][j];
            soma_linha[i] += MATRIZ[i][j];
        }
    }
    
    cout << endl << "O Vetor de Soma das Linhas: ";
    
    for (int i = 0; i < 5; i++){
        cout << soma_linha[i] << " ";
    }
    
    cout << endl << "O Vetor de Soma das Colunas: ";
    
    for (int i = 0; i < 5; i++){
        cout << soma_coluna[i] << " ";
    }
}
