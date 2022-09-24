#include <iostream>

using namespace std;

/* escreva um programa que leia um valor X em reais (sem centavos) e determine quantas
	notas de 100, 50, 20, 10, 5, 2 e 1 (moeda) são necessárias para representar esse valor. */

int main(int argc, char** argv) {
	
	int valor, notas100, notas50, notas20, notas10, notas5, notas2, notas1;
	
	cout << "Entre com um valor em reais (sem centavos): ";
	cin >> valor;
	
	notas100 = valor / 100;
	valor = valor % 100;
	cout << notas100 << " notas de 100." << endl;
	
	notas50 = valor / 50;
	valor = valor % 50;
	cout << notas50 << " notas de 50." << endl;
	
	notas20 = valor / 20;
	valor = valor % 20;
	cout << notas20 << " notas de 20." << endl;
	
	notas10 = valor / 10;
	valor = valor % 10;
	cout << notas10 << " notas de 10." << endl;
	
	notas5 = valor / 5;
	valor = valor % 5;
	cout << notas5 << " notas de 5." << endl;
	
	notas2 = valor / 2;
	valor = valor % 2;
	cout << notas2 << "notas de 2." << endl;
	
	notas1 = valor;
	cout << notas1 << "moedas de 1."<< endl;
	
	
	
	return 0;
}
