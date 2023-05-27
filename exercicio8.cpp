#include <iostream>

using namespace std;

int main() { 

    float a, b;

    cout << "Digite o primeiro número (A): ";
    cin >> a;
    cout << "Digite o segundo número (B): ";
    cin >> b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << endl << "Novo valor de A: " <<  a;
    cout << endl << "Novo valor de B: " <<  b << endl << endl;
}