#include <iostream>

using namespace std;

int main(){
    float notas[50], soma_notas = 0, media, maiores = 0, iguais = 0, menores = 0; 

    cout << "Escreva as notas de 50 alunos: ";
    for (int i = 0; i < 50; i++){
        cin >> notas[i];
        soma_notas += notas[i];
    }

    media = soma_notas / 50;

    for (int i = 0; i < 50; i++){
        if (notas[i] > media) {
            maiores++;
        } else if (notas[i] == media){
            iguais++;
        } else if (notas[i] < media) {
            menores++;
        }
    }

    cout << soma_notas << endl;
    cout << media << endl;
    cout << "Notas maiores que a média: " << maiores << endl;
    cout << "Notas iguais à média: " << iguais << endl;
    cout << "Notas menores que a média: " << menores << endl;
}