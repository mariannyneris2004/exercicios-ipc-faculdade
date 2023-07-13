#include <iostream>

using namespace std;

int main(){

    string nome_vendedor;
    float salario_base, salario_final, total_vendas, total_a_mais, comissao_total;
    const float porcentagem_comissao = 0.15;

    cout << "Digite o nome do vendedor: ";
    getline(cin, nome_vendedor);
    cout << "Digite o salário base: R$";
    cin >> salario_base;
    cout << "Digite o total de vendas: R$";
    cin >> total_vendas;

    comissao_total = total_vendas * porcentagem_comissao;
    salario_final = salario_base + comissao_total;
    total_a_mais = (salario_final - salario_base) / salario_base;

    cout << endl << "O vendedor " << nome_vendedor << 
    " recebrá um salário de R$" <<  salario_final <<
    ", sendo " << total_a_mais << " a porcentagem a mais" <<endl;
}