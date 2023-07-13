#include<iostream>

using namespace std;

int main() {
    int aposta[6], mega_sena[6], cont = 0;
    
    cout << "Informe os números sorteados: ";
    for (int i = 0; i < 6; i++){
        cin >> mega_sena[i];
    }
    
    cout << "Informe os números do seu bilhete: ";
    for (int i = 0; i < 6; i++){
        cin >> aposta[i];
    }
    
    for (int i = 0; i < 6; i++){
        for (int j = 0; j < 6; j++){
            if (mega_sena[i] == aposta[j]){
                cont++;
            }
        }
    }

    cout << endl << "Você acertou " << cont << " números!" << endl;
}
