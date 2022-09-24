#include <iostream>
#include <iomanip>

using namespace std;

/* escreva um programa que imprime os números de 0 a 15 em dec, oct e hex */

int main(int argc, char** argv) {
	
	int num;
	
	cout << "dec - hex - oct" << endl;
	cout << endl;
	
	for (num = 0; num < 16; num++) {
		cout << setw(3) << setfill('0')  << setbase(10) << num << " - ";
		cout << setw(3) << setfill('0') << setbase(16) << num << " - ";
		cout << setw(3) << setfill('0') << setbase(8) << num << endl;
	}
	
	return 0;
}
