#include<iostream>

using namespace std;

int main() {
    int canal, num_pessoas;
    float porcentagem_5, porcentagem_7, porcentagem_10, porcentagem_12, total_pessoas = 0, canal5 = 0, canal7 = 0, canal10 = 0, canal12 = 0;
    bool verificacao_on = false, verificacao_valido = false;

    cout << "PESQUISA DE AUDIÊNCIA" << endl << endl;
    cout << "Informe o canal assistido entre 5, 7, 10 ou 12 (Pressione 0 para sair): ";
    cin >> canal;

    while(canal != 0){
        
        switch(canal){
            case 5: cout << "Informe o número de pessoas assistindo ao canal: ";
                    cin >> num_pessoas;
                    canal5 += num_pessoas;
                    total_pessoas += num_pessoas;
            break;
            case 7: cout << "Informe o número de pessoas assistindo ao canal: ";
                    cin >> num_pessoas;
                    canal7 += num_pessoas;
                    total_pessoas += num_pessoas;
            break;
            case 10: cout << "Informe o número de pessoas assistindo ao canal: ";
                     cin >> num_pessoas;
                     canal10 += num_pessoas;
                     total_pessoas += num_pessoas;
            break;
            case 12: cout << "Informe o número de pessoas assistindo ao canal: ";
                     cin >> num_pessoas;
                     canal12 += num_pessoas;
                     total_pessoas += num_pessoas;
            break;
            default: cout << "Canal inválido." << endl;
        }

        cout << endl << "Informe o canal assistido entre 5, 7, 10 ou 12 (Pressione 0 para sair): ";
        cin >> canal;
    }

    if (total_pessoas != 0){
        porcentagem_5 = canal5 / total_pessoas;
        porcentagem_7 = canal7 / total_pessoas;
        porcentagem_10 = canal10 / total_pessoas;
        porcentagem_12 = canal12 / total_pessoas;

        cout << endl << "RESULTADO DA PESQUISA" << endl;
        cout << "Porcentagem da emissora d Canal 5: " << porcentagem_5 * 100 << "%" << endl;
        cout << "Porcentagem da emissora d Canal 7: " << porcentagem_7 * 100 << "%"  << endl;
        cout << "Porcentagem da emissora d Canal 10: " << porcentagem_10 * 100 << "%"  << endl;
        cout << "Porcentagem da emissora d Canal 12: " << porcentagem_12 * 100 << "%"  << endl << endl;
    } else if (total_pessoas == 0 && canal == 0){
        cout << endl << "Nenhum dado foi infomado." << endl << endl;
    }

}