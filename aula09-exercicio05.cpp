#include<iostream>

using namespace std;

int main() {
    int tipo_consumidor, qtd_kwatts, total_pessoas, cont_pessoas = 0, cont = 0;
    float salario_minimo, total_consumidor, total_empresa = 0, valor_kwatts, acrescimo;
    string tipo_consumidor_txt;

    cout << "CÁLCULO DE UMA EMPRESA X" << endl << endl;
    cout << "Informe salário mínimo atual: R$";
    cin >> salario_minimo;
    
    valor_kwatts = salario_minimo / 1000;
    
    cout << "TIPOS DE CONSUMIDOR: " << endl << "1 - Residencial" << endl << "2 - Comercial" <<
    endl << "3 - Industrial" << endl << "0 - Sair" << endl << endl << "Digite o tipo de Consumidor: ";
    cin >> tipo_consumidor;

    while(tipo_consumidor != 0){
        
        switch(tipo_consumidor){
            case 1: tipo_consumidor_txt = "residencial";
                    cout << "Informe a quantidade de Kilowatts consumidos: ";
                    cin >> qtd_kwatts;
                    total_consumidor = valor_kwatts * qtd_kwatts;
                    acrescimo = 0.05;
                    total_consumidor += (total_consumidor * acrescimo);
            break;
            case 2: tipo_consumidor_txt = "comercial";
                    cout << "Informe a quantidade de Kilowatts consumidos: ";
                    cin >> qtd_kwatts;
                    total_consumidor = valor_kwatts * qtd_kwatts;
                    acrescimo = 0.10;
                    total_consumidor += (total_consumidor * acrescimo);
            break;
            case 3: tipo_consumidor_txt = "industrial";
                    cout << "Informe a quantidade de Kilowatts consumidos: ";
                    cin >> qtd_kwatts;
                    total_consumidor = valor_kwatts * qtd_kwatts;
                    acrescimo = 0.15;
                    total_consumidor += (total_consumidor * acrescimo);
            break;
            default: cout << "Tipo inválido." << endl;
        }
        
        if (total_consumidor > 500 && total_consumidor < 1000){
            cont_pessoas++;
        }
        
        total_empresa += total_consumidor;
        
        if (tipo_consumidor == 1 || tipo_consumidor == 2 || tipo_consumidor == 3){
            cout << endl << "CONTA A SE PAGAR" << endl;
            cout << "O valor do Kilowatts é de R$" << valor_kwatts << endl;
            cout << "Valor a ser pago pelo consumidor " << tipo_consumidor_txt << " é de R$" << 
            total_consumidor << endl << endl;
        }
        
        cont++;
        
        cout << "TIPOS DE CONSUMIDOR: " << endl << "1 - Residencial" << endl << "2 - Comercial" <<
        endl << "3 - Industrial" << endl << "0 - Sair" << endl << endl << "Digite o tipo de Consumidor: ";
        cin >> tipo_consumidor;
    }

    if (cont != 0){
        cout << endl << "O total de pessoas que pagaram entre R$500,00 e R$1000,00 é de " << cont_pessoas << endl;
        cout << "O faturamento da empresa após as contas pagas é de R$" << total_empresa << endl;
    } else if (cont == 0 && tipo_consumidor == 0){
        cout << endl << "O salário mínimo é de R$" << salario_minimo << endl << endl;
    }
}