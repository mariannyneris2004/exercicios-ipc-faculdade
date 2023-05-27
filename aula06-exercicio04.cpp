#include <iostream>
#include <cmath>

using namespace std;

int main(){

    float nota1, nota2, media;

    cout << "Informe a primeira média: ";
    cin >> nota1;
    cout << "Informe a segunda média: ";
    cin >> nota2;
    
    media = (nota1 + nota2) / 2;
    
    if (media >= 6){
        cout << endl << "Aprovado." << endl;
    } else {
        cout << endl << "Reprovado." << endl;
    }
}
