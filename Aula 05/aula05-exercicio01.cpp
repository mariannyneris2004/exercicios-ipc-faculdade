#include <iostream>
#include <cmath>

using namespace std;

int main(){

    float x1, y1, x2, y2, distancia;

    cout << "Informe o valor de x do Ponto P: ";
    cin >> x1;
    cout << "Informe o valor de y do Ponto P: ";
    cin >> y1;
    cout << "Informe o valor de x do Ponto Q: ";
    cin >> x2;
    cout << "Informe o valor de y do Ponto Q: ";
    cin >> y2;

    distancia = sqrt((pow((x2 - x1), 2)) + (pow((y2 - y1), 2)));
    
    cout << endl << "A distância entre os pontos P(" << x1 << ", " << y1 <<
    ") e Q(" << x2 << ", " << y2 << ") é de " << distancia << endl;
}
