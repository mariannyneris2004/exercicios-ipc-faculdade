#include<iostream>

using namespace std;

int main() {
    int APOSTA[5][5], aposta[5] = {0,0,0,0,0}, sorteio[5], cont = 0, num = 1, MATRIZ[5][5], 
    verificacao_5 = 0;
    bool verificacao_outros = false;
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            MATRIZ[i][j] = num;
            num++;
        }
    }
    cout << "APOSTAS - cartela" << endl;
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            cout << MATRIZ[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Escreva sua aposta codificada 5x5: ";
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            cin >> APOSTA[i][j];
            if (APOSTA[i][j] == 1){
                verificacao_5++;
            } if (APOSTA[i][j] != 1 && APOSTA[i][j] != 0){
                verificacao_outros = true;
            }
        }
    }

    if (verificacao_5 > 5){
        cout << endl << "Você apostou mais de 5 números!";
    } else if (verificacao_outros == true) {
        cout << endl << "Você deve apostar usando 0 e 1 apenas!";
    } else {
        for(int i = 0; i < 5; i++){
            for (int j = 0; j < 5; j++){
                if(APOSTA[i][j] == 1){
                    aposta[j] = MATRIZ[i][j];
                }
            }
        }

        cout << endl << "Informe os números sorteados: ";
        for (int i = 0; i < 5; i++){
            cin >> sorteio[i];
        }
        
        for (int i = 0; i < 5; i++){
            for (int j = 0; j < 5; j++){
                if (sorteio[j] == aposta[i]){
                    cont += 1;
                }
            }
        }
        cout << endl << "Você acertou " << cont << " número(s)!";
    }
}
