#include<iostream>

using namespace std;

int main(){
    unsigned long graos = 1;
    int numero_aterior = 1;
    
    for(int quadros = 2; quadros <= 64; quadros++){
        graos += numero_aterior * 2;
        
        numero_aterior *= 2;
    }
    
    cout << graos << endl;
    return 0;
}
