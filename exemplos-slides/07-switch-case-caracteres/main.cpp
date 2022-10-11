/* Escreva um programa que leia um conceito na forma de um caractere A,
    B, C, D ou F e que imprima o significado do conceito por extenso como
    "Excelente", "Bom", "Regular", "Ruim", ou "Insuficiente". Utilize um
    bloco switch... case e capture no mesmo os casos com letras maiúsculas
    e minúsculas bem como conceitos inválidos. */

#include <iostream>

using namespace std;

int main()
{
    char conceito;

    cout << "Conceito [A, B, C, D ou F]: ";
    cin >> conceito;

    switch (conceito) {
        case 'a':
        case 'A': cout << "Excelente." << endl;
        break;

        case 'b':
        case 'B': cout << "Bom." << endl;
        break;

        case 'c':
        case 'C': cout << "Regular." << endl;
        break;

        case 'd':
        case 'D': cout << "Ruim." << endl;
        break;

        case 'f':
        case 'F': cout << "Insuficiente." << endl;
        break;

        default: cout << "Conceito invalido." << endl;
    }

    return 0;
}
