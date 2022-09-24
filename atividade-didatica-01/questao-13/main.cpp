#include <iostream>

using namespace std;

int main()
{
    int valorReal, numNotas; // 100, 50, 20, 10, 5, 2, 1
    int notas100, notas50, notas20, notas10, notas5, notas2, notas1;

    cout << "Valor em reais: ";
    cin >> valorReal;

    notas100 = valorReal / 100;
    valorReal = valorReal % 100;
    cout << notas100 << " notas de 100." << endl;

    notas50 = valorReal / 50;
    valorReal = valorReal % 50;
    cout << notas50 << " notas de 50." << endl;

    notas20 = valorReal / 20;
    valorReal = valorReal % 20;
    cout << notas20 <<" notas de 20." << endl;

    notas10 = valorReal / 10;
    valorReal = valorReal % 10;
    cout << notas10 <<" notas de 10." << endl;

    notas2 = valorReal / 2;
    valorReal = valorReal % 2;
    cout << notas2 <<" notas de 2." << endl;

    notas1 = valorReal / 1;
    valorReal = valorReal % 1;
    cout << notas1 <<" notas de 1." << endl;

    return 0;
}
