#include <iostream>
#include <bitset>
#include <iomanip>

using namespace std;

/* Escreva um programa para imprimir n�meros de 0 a 15 em dec, bin, oct e hex. Considere os n�meros
	bin�rios com 4 bits apenas. */

int main(int argc, char** argv) {
	
	int num;
	
	cout << "dec - hex - oct - bin" << endl;
	
	for (num = 0; num <= 15; num++) {
		cout << setw(2) << setfill(' ') << dec << num << " - ";
		cout << setw(2) << setfill(' ') << hex << num << " - ";
		cout << setw(2) << setfill(' ') << oct << num << " - ";
		cout << bitset<4>(num) << endl; // o operador de bits mostra a representa��o bin�ria de um inteiro
	}
	
	return 0;
}
