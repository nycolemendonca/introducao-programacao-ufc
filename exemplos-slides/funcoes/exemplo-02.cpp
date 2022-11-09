#include <iostream>

/* Crie uma função dot que calcule e retorne o produto interno (produto escalar) de dois vetores. Na função
main, leia as coordenadas dos vetores e use a função dot para calcular o produto interno entre eles. Em
seguida, imprima seu valor na main. */

using namespace std;

float prodInterno(float vx, float vy, float wx, float wy){
    return (vx*wx) + (vy*wy);
}

int main(){
    float vx, vy, wx, wy;

    cout << "Entre com as coordenadas x, y do vetor v: ";
    cin >> vx >> vy;
    cout << "Entre com as coordenadas x, y do vetor w: ";
    cin >> wx >> wy;
    cout << "Produto interno entre os vetores v, w: " << prodInterno(vx, vy, wx, wy) << endl;

    return 0;
}
