#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float soma = 0;

    for(int i=1; i<=10; i++){
        if(i % 2 == 1) {
            soma += i/(pow(i, 2));
        } else if (i % 2 == 0){
            soma -= i/(pow(i, 2));
        }
    }

    cout << "O resultado da soma é " << soma << endl;
}