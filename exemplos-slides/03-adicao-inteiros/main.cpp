#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2, soma;
	
	cout << "Entre com o primeiro termo: ";
	cin >> num1;
	cout << "Entre com o segundo termo: ";
	cin >> num2;
	
	cout << endl;
	
	cout << "A soma é: " << num1 + num2 << endl;
	
	return 0;
}
