#include <iostream>
#include <cctype>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	char letraMinuscula, letraMaiuscula;
	
	cout << "Entre com uma letra minuscula: ";
	cin >> letraMinuscula;
	cout << "Entre com uma letra maiuscula: ";
	cin >> letraMaiuscula;
	
	cout << endl;
	
	cout << letraMinuscula << " em maiusculo eh " << static_cast<char>(toupper(letraMinuscula)) << endl;
	cout << letraMaiuscula << " em minusculo eh " << static_cast<char>(tolower(letraMaiuscula)) << endl;
	
	return 0;
}
