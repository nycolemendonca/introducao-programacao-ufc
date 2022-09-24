#include <iostream>
#include <locale.h>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "Portuguese");
	
	unsigned long CPF; // Variáveis para CPF e dígitos
	unsigned short int D1, D2, D3, D4, D5, D6, D7, D8, D9, V1, V2;
	
	cout << "Digite os 09 primeiros digitos do CPF: ";
	cin >> CPF; // Lê o CPF
	
	D1 = (CPF / 1) % 10; // Isola os dígitos do CPF
	D2 = (CPF / 10) % 10;
	D3 = (CPF / 100) % 10;
	D4 = (CPF / 1000) % 10;
	D5 = (CPF / 10000) % 10;
	D6 = (CPF / 100000) % 10;
	D7 = (CPF / 1000000) % 10;
	D8 = (CPF / 10000000) % 10;
	D9 = (CPF / 100000000) % 10;
	
	V1 = D9*10 + D8*9 + D7*8 + D6*7 + D5*6 + D4*5 + D3*4 + D2*3 + D1*2;
	V1 = ((V1 * 10) % 11) % 10; // Calcula o primeiro dígito verificador
	
	V2 = D9*11 + D8*10 + D7*9 + D6*8 + D5*7 + D4*6 + D3*5 + D2*4 + D1*3 + V1*2;
	V2 = ((V2 * 10) % 11) % 10; // Calcula o segundo dígito verificador
	
	cout << "CPF com dígitos verificadores: " << CPF << "-" << V1 << V2 << '\n';
	
	return 0;
}
