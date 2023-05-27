#include <iostream>

using namespace std;

int main(){

    string nome_produto;
    float preco, parcela;

    cout << "Digite o nome do produto: ";
    getline(cin, nome_produto);
    cout << "Digite o preço do produto: R$";
    cin >> preco;

    parcela = preco / 5;

    cout << endl << "O valor do produto " << nome_produto << 
    " da parcela será: R$" <<  parcela << endl;
}