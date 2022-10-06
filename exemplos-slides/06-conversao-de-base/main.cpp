#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {

	int numero, base, quociente, resto;
	
	cout << "Entre com um numero decimal: ";
	cin >> numero;
	cout << "Digite a nova base: ";
	cin >> base;
	
	quociente = numero;
	
	while (quociente > 0){
		resto = quociente % base;
		quociente = quociente / base;
		
	}
	
	cout << numero << " na base " << base << " eh igual a " << resto << endl;

	return 0;
}
