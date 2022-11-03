#include <iostream>
#include <cmath>

/* Faça um programa que calcule e imprima a área A de um triângulo em função dos comprimentos de seus lados
a, b, c usando a fórmula de Herão, onde s = (a + b + c)/2. Leia a, b, c pelo teclado. */

using namespace std;

int main(){
    float area, ladoA, ladoB, ladoC, s;

    cout << "Entre com os tres lados do triangulo: ";
    cin >> ladoA >> ladoB >> ladoC;

    s = (ladoA + ladoB + ladoC) / 2;
    area = sqrt(s * (s - ladoA) * (s - ladoB) * (s - ladoC));
    cout << "Area do triangulo: " << area << endl;

    return 0;
}
