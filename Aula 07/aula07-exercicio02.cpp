#include<iostream>

using namespace std;

int main()
{
    float peso, altura;
    
    cout << "Informe seu peso (em Kg): ";
    cin >> peso;
    cout << "Informe sua altura (em metros): ";
    cin >> altura;
    
    if ((peso > 80 || peso < 70) && (altura > 1.9 || altura < 1.75)){
        cout << "Reprovado por peso e altura.";
    } else if (altura > 1.9 || altura < 1.75) {
        cout << "Reprovado por altura.";
    } else if (peso > 80 || peso < 70) {
        cout << "Reprovado por peso.";
    } else {
        cout << "Aceito.";
    } 
}
