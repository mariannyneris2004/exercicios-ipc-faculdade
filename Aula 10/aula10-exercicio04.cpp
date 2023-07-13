#include <iostream>

using namespace std;

int main() {
    float idade, contador_homens = 0, contador_total = 0, maior_idade = 0, homens_18_35 = 0, mulheres_18_35_c_c = 0, porcentagem_homens, porcentagem_mulheres;
    char cor_olhos, cor_cabelos, sexo;

    cout << "PESQUISA DE CARACTERÍSTICAS FÍSICAS" << endl << endl;
    cout << "Informe a idade da pessoa: ";
    cin >> idade;

    do {
    cout << "Informe o sexo da pessoa (M/F): ";
    cin >> sexo;
    cout << "A - olhos azuis" << endl << "V - olhos verdes" << endl << "C - olhos castanhos" << endl << "Informe a cor dos olhos: ";
    cin >> cor_olhos;
    cout << "L - cabelos loiros" << endl << "C - cabelos castanhos" << endl << "P - cabelos pretos" << endl << "Informe a cor dos cabelos: ";
    cin >> cor_cabelos;

    if (idade > maior_idade){
        maior_idade = idade;
    }
    if (sexo == 'M'){
        contador_homens++;
    }
    if(sexo == 'M' && idade >= 18 && idade <= 35){
        homens_18_35++;
    }
    if(sexo == 'F' && idade >18 && idade < 35 && cor_olhos == 'C' && cor_cabelos == 'C'){
        mulheres_18_35_c_c++;
    }

    contador_total++;

    cout << "Informe a idade da pessoa (Digite -1 para sair): ";
    cin >> idade;
    } while (idade != -1);

    porcentagem_homens = homens_18_35 / contador_homens;
    porcentagem_mulheres = mulheres_18_35_c_c / contador_total;

    cout << endl << "RESULTADOS" << endl << endl;
    cout << "A maior idade dentre os entrevistados foi de " << maior_idade << " anos de idade." << endl;
    cout << "A porcentagem de homens entre 18 e 35 anos, inclusive, é de " << porcentagem_homens * 100 << "% entre os demais entrevistados homens." << endl;
    cout << "A porcentagem de mulheres entre 18 e 35 anos, com olhos e cabelos castanhos é de " << porcentagem_mulheres * 100 << "% entre os demais entrevistados." << endl;

}