#include <iostream>
using namespace std;

int distanciasCalculo(int distancias[][4], int quaisCidades[], int quantidadeCidades) {
    int somaDistancia = 0, numLinha, numColuna;
    somaDistancia += distancias[quaisCidades[0]-1][quaisCidades[0]-1];
    numLinha = quaisCidades[0]-1;
    for (int i = 1; i < quantidadeCidades; i++) {
        numColuna = quaisCidades[i] - 1;
        somaDistancia += distancias[numLinha][numColuna];
        numLinha = numColuna;
    }
    return somaDistancia;
}

int main() {
    int distancias[4][4];
    int quantidadeCidades, distanciaFinal;

    cout << "CÁLCULO DISTÂNCIAS" << endl;
    cout << "Escreva uma matriz com as distâncias entre as cidades: " << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> distancias[i][j];
        }
    }
    
    cout << "\nInforme quantas cidades deseja visitar: " << endl;
    cin >> quantidadeCidades;
    
    int quaisCidades[quantidadeCidades];
    
    cout << "Agora informe quais cidades deseja visitar: " << endl;
    for (int i = 0; i < quantidadeCidades; i++) {
        cin >> quaisCidades[i];
    }
    
    distanciaFinal = distanciasCalculo(distancias, quaisCidades, quantidadeCidades);
    
    cout << "A distancia será: " << distanciaFinal << "Km" << endl;
    
    return 0;
}