#include <iostream>

using namespace std;

int main () {
    int tabuada = 0;
    for (int i = 1; i<=10; i++){
        cout << "Tabuada do " << i << endl;
        for (int j = 1; j<=10; j++){
            tabuada = i * j;
            cout << i << " x " << j << " = " << tabuada << endl;
        }
        cout << endl;
    }
}