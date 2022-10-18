#include <iostream>
#include <vector>

using namespace std;

/* Fa�a um programa que preencha um vetor com 10 n�meros reais, calcule e mostre a quantidade de n�meros negativos e a soma dos
	n�meros positivos. */

int main(int argc, char** argv) {
	
	const short N = 9;
	short qtdeNegativos = 0, i;
	float somaPositivos = 0;
	
	vector<float>v;
	v.resize(N);
	
	for (i = 0; i < N; i++){
		cout << "v[" << i << "]: ";
		cin >> v[i];
		
		if (v[i] < 0) { qtdeNegativos++; }
		else { somaPositivos += v[i]; }
	}
	cout << endl;
	cout << "Qtde. de Negativos: " << qtdeNegativos << endl;
	cout << "Soma dos Positivos: " << somaPositivos << endl;
	
	return 0;
}
