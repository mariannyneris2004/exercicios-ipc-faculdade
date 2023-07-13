#include<iostream>

using namespace std;

int main()
{
    int a, b, c;
    
    cout << "Escreva o primeiro valor inteiro: ";
    cin >> a;
    cout << "Escreva o segundo valor inteiro: ";
    cin >> b;
    cout << "Escreva o terceiro valor inteiro: ";
    cin >> c;
    
    cout << endl << endl << "Os valores em ordem decrescente:" << endl;
    
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
}
