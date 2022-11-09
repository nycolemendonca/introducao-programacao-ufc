#include <iostream>

/* Média dos valores de um vetor */

using namespace std;

int main(){
    int vetor[] = {1, 2, 3, 4, 5, 7}; // 6 posições, 5 índices
    int soma = 0;
    float media;

    // A estrutura acessa cada posição e soma cada valor
    for (int i = 0; i < 6; i++){
        soma = soma + vetor[i];
    }
    media = soma / 6.0;
    cout << "Soma: " << soma << endl;
    cout << "Media: " << media << endl;

    return 0;
}
