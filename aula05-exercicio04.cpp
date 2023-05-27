#include <iostream>
#include <cmath>

using namespace std;

int main(){

    float altura_degrau, quantidade_degraus, altura_total;

    cout << "Informe a altura dos degraus (em metros): ";
    cin >> altura_degrau;
    cout << "Informe a altura total que deseja subir (em metros): ";
    cin >> altura_total;

    quantidade_degraus = altura_total / altura_degrau;
    
    cout << endl << "A quantidade de degraus que você deverá subir para atingir a altura desejada é de " 
    << quantidade_degraus << endl;
}
