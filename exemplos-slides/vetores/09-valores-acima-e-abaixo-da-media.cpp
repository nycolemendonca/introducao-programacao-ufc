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
    int vetor[] = {1, 2, 3, 4, 5, 7, 10}, acimaMedia = 0, abaixoMedia = 0; // 6 posições, 5 índices
    float media;

    media = mediaValoresVetor(vetor, 7);
    cout << "Media: " << media << endl;

    for (int i = 0; i < 7; i++){
        if (vetor[i] > media) { acimaMedia++; }
        else if (vetor[i] < media) { abaixoMedia++; }
    }
    cout << "Valores acima da media: " << acimaMedia << endl;
    cout << "Valores abaixo da media: " << abaixoMedia << endl;

    return 0;
}
