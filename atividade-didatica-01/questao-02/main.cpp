#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int numLados, numDiagonais;

    cout << "Número de lados (polígono convexo): ";
    cin >> numLados;

    if (numLados >= 4) {

        numDiagonais = (numLados * (numLados - 3)) / 2;
        cout << "Número de diagonais: " << numDiagonais << endl;
    } else {
        cout << "Informe pelo menos o número mínimo de lados." << endl;
    }




    return 0;
}
