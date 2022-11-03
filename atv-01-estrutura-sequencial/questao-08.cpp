#include <iostream>

/* Construa um programa que leia dois valores numéricos inteiros e efetue a adição; caso o resultado seja
maior que 10, apresentá-lo. */

using namespace std;

int main(){
    int num1, num2, soma;

    cout << "Entre com dois valores numericos quaisquer: ";
    cin >> num1 >> num2;

    soma = num1 + num2;
    if (soma > 10){ cout << "Soma: " << soma << endl; }

    return 0;
}
