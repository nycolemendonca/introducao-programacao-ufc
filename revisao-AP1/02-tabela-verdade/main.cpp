#include <iostream>

using namespace std;

/* escreva um programa que imprima a tabela-verdade das funções not, and, or e ou-exclusivo */

int main(int argc, char** argv) {
	
	cout << "tabela-verdade: not" << endl;
	cout << "not 0 = " << (!false) << endl;
	cout << "not 1 = " << (!true) << endl;
	cout << endl;
	
	cout << "tabela verdade: and" << endl;
	cout << "0 and 0 = " << (false & false) << endl;
	cout << "0 and 1 = " << (false & true) << endl;
	cout << "1 and 0 = " << (true & false) << endl;
	cout << "1 and 1 = " << (true & true) << endl;
	cout << endl;
	
	cout << "tabela-verdade: or" << endl;
	cout << "0 or 0 = " << (false | false) << endl;
	cout << "0 or 1 = " << (false | true) << endl;
	cout << "1 or 0 = " << (true | false) << endl;
	cout << "1 or 1 = " << (true | true) << endl;
	cout << endl;
	
	cout << "tabela-verdade: ou-exclusivo" << endl;
	cout << "0 xor 0 = " << (false ^ false) << endl;
	cout << "0 xor 1 = " << (false ^ true) << endl;
	cout << "1 xor 0 = " << (true ^ false) << endl;
	cout << "1 xor 1 = " << (true ^ true) << endl;
	cout << endl;
	
	return 0;
}
