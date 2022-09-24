#include <iostream>
#include <iomanip>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	char c = 31;
	
	do {
		c++;
		
		// Imprime c como um inteiro (short) em formato decimal
		// setw = manipulador de fluxo que estabelece o tamanho m�ximo da string
		// setw = manipulador de fluxo que configura o caractere de preenchimento
		// static_cast<tipo>() = verifica��o de tipo em tempo de compila��o - convers�o de tipos
		cout << setw(3) << setfill('0') << dec << static_cast<short>(c) << " - ";
		
		// Imprime c como um inteiro (short) em formato hexadecimal
		cout << hex << (short)c << " - ";
		
		// Imprime c como caractere
		cout << c << '\n';
	} while (c < 127);
	
	return 0;
}
