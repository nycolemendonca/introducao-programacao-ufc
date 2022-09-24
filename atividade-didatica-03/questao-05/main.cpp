#include <iostream>

using namespace std;

int main()
{
    // pista circular 2km de comprimento
    // dist = posInicial + (velocidade*tempo)
    // deslocamento de A e de B = ?
    // posicaoB = posicaoB + 15
    // posicaoA = posicaoA - 10
    // posicaoA == posicaoB -> condição de parada

    short int i = 0;
    const short posicaoA = 2000, posicaoB = 0, distancia = 2000, tempo = 0;

    while (posicaoA == posicaoB) {
        posicaoA -= 10;
        posicaoB += 15;
        tempo += 1;
    }

    cout << "posicaoA: " << posicaoA << endl;
    cout << "posicaoA: " << posicaoB-2000 << endl;
    cout << "posicaoA: " << tempo << endl;


    return 0;
}
