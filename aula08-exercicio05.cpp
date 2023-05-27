#include<iostream>

using namespace std;

int main(){
    char sexo, sexo_maior_altura, sexo_menor_altura;
    float altura, maior_altura = 0, menor_altura = 10, contagem_mulheres, contagem_homens, 
    altura_media_mulheres, percentual_homens, percentual_mulheres, diferenca_percentual, altura_mulheres;
    
    for (int i = 1; i <= 50; i++){
        cout << endl << "Escreva o sexo da pessoa (F/M): ";
        cin >> sexo;
        cout << "Escreva sua altura (em metros): ";
        cin >> altura;
        if (altura > maior_altura){
            maior_altura = altura;
            sexo_maior_altura = sexo;
        } else if (altura < menor_altura) {
            menor_altura = altura;
            sexo_menor_altura = sexo;
        }
        
        if (sexo == 'F'){
            contagem_mulheres++;
            altura_mulheres += altura;
        } else if (sexo == 'M'){
            contagem_homens++;
        }
    }
    
    altura_media_mulheres = altura_mulheres / contagem_mulheres;
    percentual_homens = contagem_homens / 50;
    percentual_mulheres = contagem_mulheres / 50;
    diferenca_percentual = percentual_homens - percentual_mulheres;
    
    cout << endl << endl << "Maior altura: " << maior_altura << ", do sexo: " << sexo_maior_altura << endl;
    cout << "Menor altura: " << menor_altura << ", do sexo: " << sexo_menor_altura << endl;
    cout << "A média da altura das mulheres: " << altura_media_mulheres << endl;
    cout << "Número de homens: " << contagem_homens << endl;
    cout << "Diferença percentual entre homens e mulheres: " << diferenca_percentual*100 << "%" << endl << endl;
    return 0;
}