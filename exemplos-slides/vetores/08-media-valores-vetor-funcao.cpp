#include <iostream>

/* Média dos valores de um vetor - com função */

using namespace std;

float mediaValoresVetor(int vetor[], int tamanhoVetor){
    float soma = 0;

    for (int i = 0; i < tamanhoVetor; i++){
        soma += vetor[i]; // soma = soma + vetor[i]
    }

    return soma / tamanhoVetor; // media
}

int main(){
    int vetor[] = {1, 2, 3, 4, 5, 7}; // 6 posições, 5 índices
    float media;

    media = mediaValoresVetor(vetor, 6);
    cout << "Media: " << media << endl;

    return 0;
}
