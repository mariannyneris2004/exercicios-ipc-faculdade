#include <iostream>
#include <cmath>

using namespace std;

int main(){

    float a, b, c, delta, x1, x2, raiz_delta;
    const float tarifa = 0.38;

    cout << "Informe o valor de A: ";
    cin >> a;
    cout << "Informe o valor de B: ";
    cin >> b;
    cout << "Informe o valor de C: ";
    cin >> c;

    delta = b*b - 4 * a * c;
    x1 = (-b+sqrt(delta))/(2*a); 
    x2 = (-b-sqrt(delta))/(2*a); 
    
    cout << endl << "As raízes para a equação são " << x1 << " e " << x2 << endl;
}
