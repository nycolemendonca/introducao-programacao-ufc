#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
int main(int argc, char** argv) {
	
	float dividendo, divisor, quociente;
	
	cout << "Entre com o dividendo: ";
	cin >> dividendo;
	cout << "Entre com o divisor: ";
	cin >> divisor;
	
	if (divisor != 0) {
		quociente = dividendo / divisor;
		cout << "Quociente = " << quociente << endl;
	} else { cout << "A divisao por zero eh invalida." << endl; }
	
	return 0;
}
