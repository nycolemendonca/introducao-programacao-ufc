#include <iostream>

using namespace std;
/* conversão de letra maiúscula em minúscula pela soma ou subtração de 32 */

int main(int argc, char** argv) {
	
	char letraMaiuscula, letraMinuscula, convertMinuscula, convertMaiuscula;
	
	cout << "Entre com uma letra maiuscula: ";
	cin >> letraMaiuscula;
	cout << "Entre com uma letra minuscula: ";
	cin >> letraMinuscula;
	cout << endl;
	
	convertMinuscula = letraMaiuscula + 32;
	cout << letraMaiuscula << " em minusculo eh " << convertMinuscula << endl;
	
	convertMaiuscula = letraMinuscula - 32;
	cout << letraMinuscula << " em maiusculo eh " << convertMaiuscula << endl;
	
	
	return 0;
}
