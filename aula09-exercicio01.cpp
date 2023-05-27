#include<iostream>

using namespace std;

int main() {
    float altura_felisberto = 1.1, altura_anacleto = 1.5;
    int cont = 0;

    while(altura_anacleto > altura_felisberto){
        altura_anacleto += 0.02;
        altura_felisberto += 0.03;

        cont++;
    }

    cout << "Serão necessários " << cont << " anos para que Felisberto seja maior que Anacleto." << endl << endl;
}