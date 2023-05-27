#include <iostream>

using namespace std;

int main(){
    int i;
    float a, b, c;

    cout << "Escreva um valor inteiro de 1 a 3: ";
    cin >> i;

    if (i == 1 || i == 2 || i == 3){
        cout << endl << "Escreva um valor real para A: ";
        cin >> a;
        cout << endl << "Escreva um valor real para B: ";
        cin >> b;
        cout << endl << "Escreva um valor real para C: ";
        cin >> c;

        cout << endl << endl;

        switch (i)
        {
        case 1:
            if (a < b && b < c){
                cout << a << endl << b << endl << c;
            } else if (a < c && c < b) {
                cout << a << endl << c << endl << b;
            } else if (b < a && a < c) {
                cout << b << endl << a << endl << c;
            } else if (b < c && c < a) {
                cout << b << endl << c << endl << a;
            } else if (c < a && a < b) {
                cout << c << endl << a << endl << b;
            } else if (c < b && b < a) {
                cout << c << endl << b << endl << a;
            }
            break;
        case 2:
            if (a > b && b > c){
                cout << a << endl << b << endl << c;
            } else if (a > c && c > b) {
                cout << a << endl << c << endl << b;
            } else if (b > a && a > c) {
                cout << b << endl << a << endl << c;
            } else if (b > c && c > a) {
                cout << b << endl << c << endl << a;
            } else if (c > a && a > b) {
                cout << c << endl << a << endl << b;
            } else if (c > b && b > a) {
                cout << c << endl << b << endl << a;
            }
            break;
        case 3:
            if (a > b && b > c){
                cout << b << endl << a << endl << c;
            } else if (a > c && c > b) {
                cout << c << endl << a << endl << b;
            } else if (b > a && a > c) {
                cout << a << endl << b << endl << c;
            } else if (b > c && c > a) {
                cout << c << endl << b << endl << a;
            } else if (c > a && a > b) {
                cout << a << endl << c << endl << b;
            } else if (c > b && b > a) {
                cout << b << endl << c << endl << a;
            }
            break;
        }

    } else {
        cout << endl << endl << "Valor inválido" << endl;
    }

    cout << endl << endl;
}