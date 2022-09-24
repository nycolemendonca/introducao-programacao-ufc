#include <iostream>

using namespace std;

/*  crie um programa que receba um número inteiro não-negativo de segundos e converta-o em horas, minutos e segundos
	exemplo: 3665 seg = 1 hora, 1 min e 5 seg
 */

int main(int argc, char** argv) {
	
	int total, hora, minuto, segundo;
	
	cout << "Entre com o numero de segundos: ";
	cin >> total;
	
	hora = total / 3600;
	total = total % 3600;
	minuto = total / 60;
	total = total % 60;
	segundo = total;
	
	cout << hora << " hora(s), " << minuto << " minuto(s) e " << segundo << " segundo(s)." << endl;
	
	
	return 0;
}
