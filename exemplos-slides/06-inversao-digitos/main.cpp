#include <iostream>
#include <locale.h>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	int n, d1, d2, d3, d4;
	
	cout << "Digite N (0 a 9999): ";
	cin >> n;
	
	if (n >= 0 && n <= 9999) {
		d1 = n % 10;
		d2 = (n / 10) % 10;
		d3 = (n / 100) % 10;
		d4 = (n / 1000) % 10;
		
		cout << "Inversão de N: " << d1 << d2 << d3 << d4 << endl;
	} else {
		cout << "Entre com um valor válido para N." << endl;
	}
	
	return 0;
}
