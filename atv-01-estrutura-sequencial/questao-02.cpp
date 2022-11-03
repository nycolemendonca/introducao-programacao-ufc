#include <iostream>

/* Faça um programa que receba o número de lados de um polígono convexo, calcule e mostre o número de
diagonais desse polígono sabendo que: numDiagonais = (numLados * (numLados - 3)) / 2 */

using namespace std;

int main()
{
    int numLados, numDiagonais;

    cout << "Numero de lados do poligono convexo: ";
    cin >> numLados;

    numDiagonais = (numLados * (numLados - 3)) / 2;
    cout << "Numero de diagonais do poligono convexo: " << numDiagonais << " diagonais" << endl;

    return 0;
}
