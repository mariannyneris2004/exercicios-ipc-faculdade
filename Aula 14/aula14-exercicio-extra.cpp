#include <iostream>

using namespace std;

int contagemDePrimos(int num){
    int cont_div, cont_primos = 0;
    for (int i = 1; i <= num; i++){
        cont_div = 0;
        for (int j = i; j >= 1; j--){
            if (i % j == 0){
                cont_div++;
            }
        }

        if (cont_div == 2){
            cont_primos++;
        }
    }

    return cont_primos;
}

int main() {
    int num, qtd_primos;

    cout << "Escreva um número: ";
    cin >> num;

    qtd_primos = contagemDePrimos(num);

    cout << "A quantidade de primos entre 1 e " << num << " é de " << qtd_primos << endl << endl;
}