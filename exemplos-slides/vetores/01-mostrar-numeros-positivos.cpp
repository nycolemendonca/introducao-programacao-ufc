#include <iostream>
#include <vector>

using namespace std;

/* Faça um programa que leia um vetor com 10 posições para números inteiros e mostre somente os números positivos. */

int main(int argc, char** argv) {
	
	const short N = 4; // Tamanho do vetor
	short i;
	vector<short>v;
	v.resize(N);
	
	
	// Entrada de dados no vetor
	for (i = 0; i < N; i++) {
		cout << "v[" << i << "]: ";
		cin >> v[i];
	}
	
	// Filtragem dos números positivos
	cout << "Numeros Positivos: ";
	for (auto x : v) {
		if (x > 0) { cout << x << " "; }
	}
	
	
	
	cout << endl;
	
	return 0;
}
