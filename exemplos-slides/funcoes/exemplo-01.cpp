#include <iostream>
#include <cmath>

/* Crie uma função modulo que calcule e retorne o módulo de um vetor tridimensional no espaço. A função deve
receber as coordenadas x, y e z como parâmetros. Na função main, leia as coordenadas de um vetor e use a função
modulo para calcular o módulo do vetor, e em segunda imprima seu valor na função main. */

using namespace std;

float modulo(float a, float b, float c){
    float modulo;
    modulo = sqrt(pow(a, 2) + pow(b, 2) + pow(c, 2));
    return modulo;
}

int main(){
    float x, y, z;

    cout << "Entre com as coordenadas x, y, z do vetor: ";
    cin >> x >> y >> z;
    cout << "Modulo do vetor: " << modulo(x, y, z) << endl;

    return 0;
}
