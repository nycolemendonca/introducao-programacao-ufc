#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	const short N = 2; // entrada de 50 fichas
	float altura;
	int sexo;
	
	
	do {
		
		cout << "Altura: ";
		cin >> altura;
		cout << "Sexo (1 - masculino, 2 - feminino): ";
		cin >> sexo;
		
		if (altura <= 0) { cout << "Informe uma altura valida." << endl; }
		if ((sexo != 1) || (sexo != 2)) { cout << "Informe um codigo valido para o sexo." << endl; }
		
	} while ((altura > 0) && (sexo == 1 || sexo == 2));
	
	
	return 0;
}
