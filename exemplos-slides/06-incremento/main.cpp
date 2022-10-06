#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	unsigned short a, b;
	
	a = 10;
	b = a++; // atribui e depois incrementa
	cout << "a = " << a << " b = " << b << endl;
	
	a = 10;
	b = ++a; // incrementa e depois atribui
	cout << "a = " << a << " b = " << b << endl;
	
	a = 10;
	b = (a = (a + 1)); // incrementa e depois atribui (perceba a ordem das operações pelos parênteses
	cout << "a = " << a << " b = " << b << endl;
	
	return 0;
}
