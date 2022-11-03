#include <iostream>

/* Escreva um programa em C++ para ler uma temperatura em graus Fahrenheit, calcular e escrever o valor
correspondente em graus Celsius. */

using namespace std;

int main(){
    float tempFahrenheit, tempCelsius;

    cout << "Temperatura em graus Fahrenheit: ";
    cin >> tempFahrenheit;

    tempCelsius = ((5 * tempFahrenheit) - 160) / 9;
    cout << tempFahrenheit << " graus Fahrenheit em Celsius eh " << tempCelsius << endl;

    return 0;
}
