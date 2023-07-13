#include<iostream>
#include<limits>

using namespace std;

int main() {
    int MATRIZ[6][6], vetor[6];
    
    cout<<"Escreva uma matriz 6x6: ";
    for (int i = 0; i < 6; i++){
        for (int j = 0; j < 6; j++){
            cin >> MATRIZ[i][j];
        }
    }
    
    for (int i = 0; i < 6; i++) {
        vetor[i] = numeric_limits<int>::max();
    }
    
    for (int i = 0; i < 6; i++){
        for (int j = 0; j < 6; j++){
            if (vetor[i] > MATRIZ[i][j]){
                vetor[i] = MATRIZ[i][j];
            }
        }
    }
    
    cout << endl << "O Vetor: ";
    
    for (int i = 0; i < 6; i++){
        cout << vetor[i] << " ";
    }
}
