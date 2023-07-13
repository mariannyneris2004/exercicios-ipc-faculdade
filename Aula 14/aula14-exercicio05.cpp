#include <iostream>
#include <cmath>

using namespace std;

float areaCircunferencia(float raio){
    const float pi = 3.1416;
    float area;

    area = pi * pow(raio, 2);

    return area;
}

float comprimentoCircunferencia(float raio){
    const float pi = 3.1416;
    float comprimento;

    comprimento = 2 * pi * raio;

    return comprimento;
}

int main (){
    float raio, area, comprimento;

    cout << "Escreva o valor do raio: ";
    cin >> raio;

    area = areaCircunferencia(raio);
    comprimento = comprimentoCircunferencia(raio);

    cout << "A área de uma circunferência de raio " << raio << " é de " << area << " e seu comprimento é de " << comprimento << endl << endl;
}
