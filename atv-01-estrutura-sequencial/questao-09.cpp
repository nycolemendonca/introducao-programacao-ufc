#include <iostream>
#include <iomanip>

/* Escreva um programa em C++ que imprime os números de 0 a 15 em decimal, octal e hexadecimal. */

using namespace std;

int main(){
    short i;

    cout << "dec - oct - hex" << endl;
    for (i = 0; i <= 15; i++){
        cout << dec << setw(2) << i << " - ";
        cout << oct << setw(2) << i << " - ";
        cout << hex << setw(2) << i << endl;
    }

    return 0;
}
