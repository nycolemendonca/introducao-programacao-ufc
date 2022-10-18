#include <iostream>
#include <vector>
using namespace std;

/* Faça um programa que preencha um vetor com 7 números inteiros, calcule e mostre: i) os números múltiplos de 2; ii) os números
	múltiplos de 3; iii) os números múltiplos de 2 e 3 */

int main(int argc, char** argv) {
	
	const short N = 7;
	vector<int>v;
	v.resize(N);
	
	for (int i = 0; i < N; i++) {
		cout << "v[" << i << "]: ";
		cin >> v[i];
	}
	cout << endl;
	
	cout << "Multiplos de 2: ";
	for (auto x : v) {
		if (x % 2 == 0){ cout << x << " "; }
	}
	cout << endl;
	
	cout << "Multiplos de 3: ";
	for (auto x : v) {
		if (x % 3 == 0) { cout << x << " "; }
	}
	cout << endl;
	
	cout << "Multiplos de 2 e 3: ";
	for (auto x : v) {
		if ((x % 2 == 0) && (x % 3 == 0)) { cout << x << " "; }
	}
	cout << endl;
	
	return 0;
}
