#include <iostream>
#include <locale.h>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	float nota1, nota2, nota3, media;
	int peso1, peso2, peso3;
	
	cout << "Digite a 1a. nota (de 0 a 10): ";
	cin >> nota1;
	cout << "Entre com o peso da 1a. nota (> 0): ";
	cin >> peso1;
	
	cout << "Digite a 2a. nota (de 0 a 10): ";
	cin >> nota2;
	cout << "Entre com o peso da 2a. nota (> 0): ";
	cin >> peso2;
	
	cout << "Digite a 3a. nota (de 0 a 10): ";
	cin >> nota3;
	cout << "Entre com o peso da 3a. nota (> 0): ";
	cin >> peso3;
	
	
	
	if (peso1 > 0 && peso2 > 0 && peso3 > 0) {
		media = (nota1*peso1 + nota2*peso2 + nota3*peso3) / (peso1 + peso2 + peso3);
		cout << "A média é: " << media << endl;
	} else {
		cout << endl;
		cout << "Insira pesos válidos" << endl;
	}
	
	return 0;
}
