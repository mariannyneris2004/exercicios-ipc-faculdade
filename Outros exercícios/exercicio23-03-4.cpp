#include <iostream>

using namespace std;

int main() {
    float celsius, fahrenheint;

    cout << "PROGRAMA PARA CONVERSÃO DE CELSIUS PARA FAHRENHEINT" << endl;
    cout << "Digite a temperatura em °C: ";
    cin >> celsius;

    fahrenheint = (9 * celsius + 160) / 5;

    cout << endl << "O valor de " << celsius << "°C em Fahrenheint é de " << fahrenheint << "°F."
    << endl << endl;
}