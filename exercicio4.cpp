#include <iostream>

using namespace std;

int main(){

    string nome_aluno;
    float nota1, nota2, nota3, nota4, media_anual, media_semestral1, media_semestral2;

    cout << "Digite o nome do(a) aluno(a): ";
    getline(cin, nome_aluno);
    cout << "Digite a nota do primeiro bimestre: ";
    cin >> nota1;
    cout << "Digite a nota do segundo bimestre: ";
    cin >> nota2;
    cout << "Digite a nota do terceiro bimestre: ";
    cin >> nota3;
    cout << "Digite a nota do quarto bimestre: ";
    cin >> nota4;

    media_anual = (nota1 + nota2 + nota3 + nota4) / 4;
    media_semestral1 = (nota1 + nota2) / 2;
    media_semestral2 = (nota3 + nota4) / 2;

    cout << endl << "Médias do(a) aluno(a): " <<  nome_aluno;
    cout << endl << "Resultado da média anual: " <<  media_anual;
    cout << endl << "Resultado da média do primeiro semestre: " <<  media_semestral1;
    cout << endl << "Resultado da média do segundo semestre: " <<  media_semestral2 << endl << endl;
}