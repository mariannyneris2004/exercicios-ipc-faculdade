#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int num, mod;

    cout << "Informe um número inteiro: ";
    cin >> num;

    mod = num%2;
    
    if (mod == 0){
        cout << endl << "O número é par." << endl;
    } else {
        cout << endl << "O número é ímpar." << endl;
    }
}
