#include <iostream>
#include <vector>

using namespace std;

/* Soma de Vetores */

int main(int argc, char** argv) {
	
	const unsigned int N = 5;
	short i;
	
	vector<float> vetor1(N);
	vetor1.resize(N);
	vector<float>vetor2;
	vetor2.resize(N);
	
	cout << "Entre com: " << endl;
	for (i = 0; i < N; i++) {
		cout << "V1[" << i << "]: ";
		cin >> vetor1[i];
	}
	cout << endl;
	for (i = 0; i < N; i++) {
	cout << "V2[" << i << "]: ";
	cin >> vetor2[i];
	}
	cout << endl;
	
	cout << "V1 + V2 = [ ";
	for (i = 0; i < N; i++) {
		cout << vetor1[i] + vetor2[i] << " ";
	}
	cout << "]" << endl;

	return 0;
}
