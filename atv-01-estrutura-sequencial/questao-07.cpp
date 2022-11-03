#include <iostream>

/* Escreva um programa que leia um número e imprima caso ele seja maior que 20. */

using namespace std;

int main(){
    float num;

    cout << "Entre com um numero qualquer: ";
    cin >> num;

    if (num > 20){ cout << num << " eh maior que 20." << endl; }
    else if (num == 20) { cout << "O numero digitado eh 20." << endl; }
    else { cout << num << " nao eh maior que 20." << endl; }

    return 0;
}
