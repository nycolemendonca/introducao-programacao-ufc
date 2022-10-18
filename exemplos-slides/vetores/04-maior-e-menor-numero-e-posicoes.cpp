#include <iostream>
#include <vector>

using namespace std;

/* Faça um programa que preencha um vetor com 15 números, determine e mostre: o maior número e a posição dele no vetor; 
	ii) o menor número e a posição dele no vetor. */

int main(int argc, char** argv) {
	
	const short N = 5;
	short i, posicaoMaxima = 0, posicaoMinima = 0;
	
	vector<float>v;
	v.resize(N);
	
	for (i = 0; i < N; i++) {
		cout << "v[" << i << "]: ";
		cin >> v[i];
		
		if (v[i] > v[posicaoMaxima]) { posicaoMaxima = i; }
		if (v[i] < v[posicaoMinima]) { posicaoMinima = i; }
	}
	
	cout << endl;
	cout << "Maximo: " << v[posicaoMaxima] << endl;
	cout << "Posicao: " << posicaoMaxima << endl;
	cout << "Minimo: " << v[posicaoMinima] << endl;
	cout << "Posicao: " << posicaoMinima << endl;
	
	return 0;
}
