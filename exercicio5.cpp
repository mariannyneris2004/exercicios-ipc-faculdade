#include <iostream>

using namespace std;

int main(){

    float custo, lucro, preco;

    cout << "Digite o custo do produto: ";
    cin >> custo;
    cout << "Digite o lucro sobre o produto em %: ";
    cin >> lucro;

    lucro = lucro / 100;

    preco = custo + (custo * lucro);

    cout << endl << "O preço final do produto será: " <<  preco << endl << endl;
}