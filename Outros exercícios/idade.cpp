//Programa para cálculo de idade em 2023

#include <iostream>

using namespace std;

int main(){

    string nome;
    int ano_nasc, idade;

    const int ano_atual = 2023;

    cout << "Digite seu nome: ";
    getline(cin, nome);
    cout << "Digite seu ano de nascimento: ";
    cin >> ano_nasc;

    idade = ano_atual - ano_nasc;

    cout << endl << "Olá, " <<  nome << ", seja bem-vindo(a)!" << endl;
    cout << "Sua idade em " << ano_atual << " será " 
    << idade << " anos." << endl << endl;
}