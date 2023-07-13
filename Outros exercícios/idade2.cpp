//Programa para cálculo de idade em 2023

#include <iostream>

using namespace std;

int main(){

    string nome;
    int ano_nasc, idade, mes_nasc;

    const int ano_atual = 2023, mes_atual = 03;

    cout << "Digite seu nome: ";
    getline(cin, nome);
    cout << "Digite seu ano de nascimento: ";
    cin >> ano_nasc;
    cout << "Digite seu mês de nascimento: ";
    cin >> mes_nasc;

    if (mes_nasc <= mes_atual)
    {     
        idade = ano_atual - ano_nasc;
    } else {
        idade = ano_atual - ano_nasc - 1;
    }
    

    cout << endl << "Olá, " <<  nome << ", seja bem-vindo(a)!" << endl;
    cout << "Você tem " << idade << " anos." << endl << endl;
}