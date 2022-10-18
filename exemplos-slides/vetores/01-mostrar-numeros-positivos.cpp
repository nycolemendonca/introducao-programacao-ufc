#include <iostream>
#include <vector>

using namespace std;

/* Fa�a um programa que leia um vetor com 10 posi��es para n�meros inteiros e mostre somente os n�meros positivos. */

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
	
	// Filtragem dos n�meros positivos
	cout << "Numeros Positivos: ";
	for (auto x : v) {
		if (x > 0) { cout << x << " "; }
	}
	
	
	
	cout << endl;
	
	return 0;
}
