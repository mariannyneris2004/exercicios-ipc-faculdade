#include <iostream>

using namespace std;

int main(){
    int vetor[10] = {2, 6, 8, 3, 10, 9, 1, 21, 33, 14};
    int x = 2, y = 4;

    cout << "V[X+1] = " << vetor[x+1] << endl;
    cout << "V[Y+2] = " << vetor[y+2] << endl;
    cout << "V[X+3] = " << vetor[x+3] << endl;
    cout << "V[X*4] = " << vetor[x*4] << endl;
    cout << "V[Y*1] = " << vetor[y*1] << endl;
    cout << "V[X*2] = " << vetor[x*2] << endl;
    cout << "V[Y+3] = " << vetor[y+3] << endl;
    cout << "V[Y-X] = " << vetor[y-x] << endl;
    cout << "V[X+4] = " << vetor[x+4] << endl;
    cout << "V[X+Y] = " << vetor[x+y] << endl;
    cout << "V[V[X+Y]] = " << vetor[vetor[x+y]] << endl;
    cout << "V[8-V[2]] = " << vetor[8-vetor[2]] << endl;
    cout << "V[V[V[7]]] = " << vetor[vetor[vetor[7]]] << endl;
    cout << "V[V[1]*V[4]] = " << vetor[vetor[1]*vetor[4]] << endl << endl;
}