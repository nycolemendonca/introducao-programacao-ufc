#include <iostream>
#include <cmath>

/* Faça um programa que determine e imprima a hipotenusa de um triângulo conhecidos os comprimentos dos
catetos. */

using namespace std;

int main(){
    float catetoOposto, catetoAdjacente, hipotenusa;

    cout << "Entre com os catetos: ";
    cin >> catetoOposto >> catetoAdjacente;

    hipotenusa = sqrt(pow(catetoOposto, 2) + pow(catetoAdjacente, 2));
    cout << "Hipotenusa: " << hipotenusa << endl;

    return 0;
}
