#include <iostream>

using namespace std;

/* escreva um programa que leia um �ngulo em segundos e imprima quantos graus, minutos e segundos h� neste �ngulo. */

int main(int argc, char** argv) {
	
	int total, graus, minutos, segundos;
	
	cout << "Angulo: ";
	cin >> total;
	
	graus = total / 3600;
	total = total % 3600;
	minutos = total / 60;
	total = total % 60;
	segundos = total;
	
	cout << graus << " grau(s), " << minutos << "minuto(s) e " << segundos << "segundo(s)." << endl;
	
	return 0;
}
