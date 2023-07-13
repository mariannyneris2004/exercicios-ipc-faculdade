#include <iostream>

using namespace std;

int main() {
    float nota_1, peso_1, nota_2, peso_2, nota_3, peso_3, soma_notas, nota_final, peso_total;

    cout << "CÁLCULO DE NOTAS" << endl;
    cout << "Digite a primeira nota: ";
    cin >> nota_1;
    cout << "Agora digite seu peso: ";
    cin >> peso_1;
    cout << "Digite a segunda nota: ";
    cin >> nota_2;
    cout << "Agora digite seu peso: ";
    cin >> peso_2;
    cout << "Digite a terceira nota: ";
    cin >> nota_3;
    cout << "Agora digite seu peso: ";
    cin >> peso_3;

    soma_notas = (nota_1 * peso_1) + (nota_2 * peso_2) + (nota_3 * peso_3);
    peso_total = peso_1 + peso_2 + peso_3;
    nota_final = soma_notas / peso_total;

    cout << endl << "Sua nota final é: " << nota_final << endl << endl;
}