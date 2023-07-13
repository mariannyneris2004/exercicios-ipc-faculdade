#include<iostream>
#include<limits>

using namespace std;

int main() {
    int MATRIZ[4][4], soma1 = 0, soma2 = 0, soma3 = 0, soma4 = 0;
    
    cout<<"Escreva uma matriz 4x4: ";
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            cin >> MATRIZ[i][j];
        }
    }
    
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            if (i < 2 && j < 2){
                soma1 += MATRIZ[i][j];
            } else if (i >= 2 && j >= 2){
                soma2 += MATRIZ[i][j];
            }
            
            switch (j){
                case 0: 
                    soma3 += MATRIZ[i][j];
                    break;
                case 1: 
                    if (i != 0){
                        soma3 += MATRIZ[i][j];
                    }
                    break;
                case 2: 
                    if (i != 0 && i != 1){
                        soma3 += MATRIZ[i][j];
                    }
                    break;
                case 3: 
                    if (i != 0 && i != 1 && i != 2){
                        soma3 += MATRIZ[i][j];
                    }
                    break;
            }
            
            switch (i){
                case 0: 
                    if (j != 0){
                        soma4 += MATRIZ[i][j];
                    }
                    break;
                case 1: 
                    if (j != 0 && j != 1){
                        soma4 += MATRIZ[i][j];
                    }
                    break;
                case 2: 
                    if (j != 0 && j != 1 && j != 2){
                        soma4 += MATRIZ[i][j];
                    }
                    break;
            }
        }
    }
    cout << endl << "A soma da primeira Matriz é de " << soma1;
    cout << endl << "A soma da segunda Matriz é de " << soma2;
    cout << endl << "A soma da terceira Matriz é de " << soma3;
    cout << endl << "A soma da quarta Matriz é de " << soma4;
}
