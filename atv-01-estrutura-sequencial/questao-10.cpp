#include <iostream>

/* Escreva um programa que imprima a tabela-verdade da função ou-exclusivo */

using namespace std;

int main(){

    cout << "Tabela-Verdade da funcao Ou-Exclusivo" << endl;
    cout << " 0 XOR 0 = " << (false ^ false) << endl;
    cout << " 0 XOR 1 = " << (false ^ true) << endl;
    cout << " 1 XOR 0 = " << (true ^ false) << endl;
    cout << " 1 XOR 1 = " << (true ^ true) << endl;

    return 0;
}
