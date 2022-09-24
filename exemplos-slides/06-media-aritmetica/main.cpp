#include <iostream>
#include <locale.h>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	float AP1, AP2, AP3, media;
	
	cout << "Digite a nota da AP1 (de 0 a 10): ";
	cin >> AP1;
	cout << "Digite a nota da AP2 (de 0 a 10): ";
	cin >> AP2;
	cout << "Digite a nota da AP3 (de 0 a 10): ";
	cin >> AP3;
	cout << endl;
	
	media = (AP1 + AP2 + AP3) / 3;
	cout << "A média é: " << media << endl;
	
	return 0;
}
