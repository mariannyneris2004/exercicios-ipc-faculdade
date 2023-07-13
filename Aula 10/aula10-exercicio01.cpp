#include <iostream>

using namespace std;

int main(){
    int codigo, num_funcionarios, codigo_grande = 0, num_grande = 0, codigo_media = 0, num_media = 0, codigo_pequena = 0, num_pequena = 0, 
    codigo_micro = 0, num_micro = 0, porte_empresa;

    cout << "AGÊNCIA DE PUBLICIDADE" << endl << endl;
    cout << endl << "Digite o código da empresa: ";
    cin >> codigo;

    do {
        cout << endl << "Porte da empresa" << endl << "1 - Grande" << endl << "2 - Média" << endl << "3 - Pequena" << endl << "4 - Microempresa" << endl << "0 - Sair" 
        << endl << "Informe: ";
        cin >> porte_empresa;
        cout << endl << "Digite o número de funcionários: ";
        cin >> num_funcionarios;

        if (porte_empresa == 1){
            if (num_funcionarios > num_grande){
                codigo_grande = codigo;
                num_grande = num_funcionarios;
            }
        } else if (porte_empresa == 2){
            if (num_funcionarios > num_media){
                codigo_media = codigo;
                num_media = num_funcionarios;
            }
        } else if (porte_empresa == 3){
            if (num_funcionarios > num_pequena){
                codigo_pequena = codigo;
                num_pequena = num_funcionarios;
            }
        } else if (porte_empresa == 4){
            if (num_funcionarios > num_micro){
                codigo_micro = codigo;
                num_micro = num_funcionarios;
            }
        }

        cout << endl << "Digite o código da empresa (Digite 0 para sair): ";
        cin >> codigo;
    } while (codigo != 0);

    cout << endl << endl << "RESULTADO" << endl << endl;
    
    cout << "Empresa de Grande Porte" << endl << "Código: " << codigo_grande << endl << "Número de funcionários: " << num_grande << endl << endl;
    cout << "Empresa de Médio Porte" << endl << "Código: " << codigo_media << endl << "Número de funcionários: " << num_media << endl << endl;
    cout << "Empresa de Pequeno Porte" << endl << "Código: " << codigo_pequena << endl << "Número de funcionários: " << num_pequena << endl << endl;
    cout << "Empresa de Micro Porte" << endl << "Código: " << codigo_micro << endl << "Número de funcionários: " << num_micro << endl << endl;
}