#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int senha;
    const int senha_correta = 1234;

    cout << "Digite sua a senha: ";
    cin >> senha;
    
    if (senha == senha_correta){
        cout << endl << "Acesso permitido." << endl;
    } else {
        cout << endl << "Acesso negado." << endl;
    }
}
