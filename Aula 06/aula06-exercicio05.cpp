#include <iostream>
#include <cmath>

using namespace std;

int main(){

    float altura, peso_ideal;
    string sexo;

    cout << "Informe sua altura (em metros): ";
    cin >> altura;
    cout << "Informe seu sexo (F/M): ";
    cin >> sexo;
    
    if (sexo == "F"){
        peso_ideal = (62.1 * altura) - 44.7;
        cout << endl << "Peso ideal igual a " << peso_ideal << endl;
    } else {
        peso_ideal = (72.7 * altura) - 58;
        cout << endl << "Peso ideal igual a " << peso_ideal << endl;
    }
}
