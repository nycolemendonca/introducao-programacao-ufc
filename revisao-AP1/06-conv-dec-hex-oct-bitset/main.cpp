#include <iostream>
#include <bitset>
#include <iomanip>

using namespace std;

/* Escreva um programa para imprimir números de 0 a 15 em dec, bin, oct e hex. Considere os números
	binários com 4 bits apenas. */

int main(int argc, char** argv) {
	
	int num;
	
	cout << "dec - hex - oct - bin" << endl;
	
	for (num = 0; num <= 15; num++) {
		cout << setw(2) << setfill(' ') << dec << num << " - ";
		cout << setw(2) << setfill(' ') << hex << num << " - ";
		cout << setw(2) << setfill(' ') << oct << num << " - ";
		cout << bitset<4>(num) << endl; // o operador de bits mostra a representação binária de um inteiro
	}
	
	return 0;
}
