#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
int main(int argc, char** argv) {
	
	char letra = 'N';
	short valor;
	valor = letra;
	short a = 2, b = 3;
	float c;
	
	c = a/b; // a casas decimais s�o desconsideradas porque o tipo � inteiro
	cout << c << endl;
	
	c = (float)a/b; // as casas decimais s�o consideradas
	// c = static_cast<float>(a)/b 
	cout << c << endl;
	
	return 0;
}
