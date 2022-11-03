#include <iostream>

/* Uma forma de converter uma letra maiúscula para minúscula é somar 32 (ou seja, 2 ^5) a ela. Equivalentemente,
subtraindo-se 32 de uma letra minúscula obtém-se a sua correspondente maiúscula. Escreva um programa que lê uma
letra minúscula e uma letra maiúscula e que imprime suas correspondentes maiúscula e minúscula, respectivamente. */

using namespace std;

int main()
{
    char maiuscula, convertMinuscula, minuscula, convertMaiuscula;

    cout << "Entre com uma letra minuscula: ";
    cin >> minuscula;
    cout << "Entre com uma letra maiuscula: ";
    cin >> maiuscula;
    cout << endl;

    convertMaiuscula = maiuscula + 32;
    cout << maiuscula << " em minusculo eh " << convertMaiuscula << endl;

    convertMinuscula = minuscula - 32;
    cout << minuscula << " em maiusculo eh " << convertMinuscula << endl;

    return 0;
}
