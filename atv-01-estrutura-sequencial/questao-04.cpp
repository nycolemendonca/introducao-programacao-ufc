#include <iostream>

/* Escreva um programa em C++ para ler uma temperatura em graus Celsius, calcular e escrever o valor
correspondente em graus Fahrenheit. */

using namespace std;

int main(){
    float tempFahrenheit, tempCelsius;

    cout << "Temperatura em graus Celsius: ";
    cin >> tempCelsius;

    tempFahrenheit = ((9 * tempCelsius) + 160) / 5;
    cout << tempCelsius << " graus Celsius em Fahrenheit eh " << tempFahrenheit << endl;

    return 0;
}
