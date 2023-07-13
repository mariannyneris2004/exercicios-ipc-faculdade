#include <iostream>

using namespace std;

void dobra(int num){
    int resultado;
    resultado = num*2;
    cout << "O dobro de " << num << " é " << resultado << endl << endl;
}

int main() {
    int num;
    cout << "Escreva um número: ";
    cin >> num;
    dobra(num);
}