#include <iostream>
#include <cmath>

using namespace std;

int main(){

    float fahrenheit, celsius;

    cout << "Informe uma temperatura em Fahrenheit: ";
    cin >> fahrenheit;

    celsius = 5 * ((fahrenheit - 32) / 9);

    cout << endl << "A temperatura " << fahrenheit << "°F em Celsius é de " << celsius << "°C" << endl;
}
