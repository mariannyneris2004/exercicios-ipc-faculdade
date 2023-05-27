#include <iostream>

using namespace std;

int main(){
    int menu;
    float salario, imposto, salario_final, aumento;

    cout << "Menu de opções:" << endl << "1 - Imposto a ser pago e salário final" << endl <<
    "2 - Novo salário com aumento" << endl << "3 - Classificação"<< endl << endl <<
    "Digite a opção desejada: ";
    cin >> menu;

    cout << endl << endl;

    if (menu == 1 || menu == 2 || menu == 3){
        switch (menu)
        {
        case 1:
            cout << "Informe seu salário atual: R$";
            cin >> salario;

            if (salario < 1100){
                imposto = 0.05 * salario;
            } else if (salario >= 1100 && salario <= 3000){
                imposto = 0.10 * salario;
            } else if (salario > 3000){
                imposto = 0.15 * salario;
            }

            salario_final = salario - imposto;

            cout << endl << endl << "O imposto a ser pago é de R$" << imposto << endl <<
            "O salário final será de R$" << salario_final;

            break;
        case 2:
            cout << "Informe seu salário atual: R$";
            cin >> salario;

            if (salario > 3000){
                aumento = 450;
            } else if (salario >= 2000 && salario <= 3000){
                aumento = 300;
            } else if (salario >= 1500 && salario < 2000){
                aumento = 250;
            } else if (salario < 1500){
                aumento = 100;
            }

            salario_final = salario + aumento;

            cout << endl << endl << "O salário final será de R$" << salario_final;

            break;
        case 3:
            cout << "Informe seu salário atual: R$";
            cin >> salario;

            cout << endl << endl << "Sua classificação é ";

            if (salario <= 1500){
                cout << "'mal remunerado'.";
            } else if (salario > 1500){
                cout << "'bem remunerado'.";
            } 
            break;
        }
    } else {
        cout << "Opção não existente.";
    }

    cout << endl << endl;
}