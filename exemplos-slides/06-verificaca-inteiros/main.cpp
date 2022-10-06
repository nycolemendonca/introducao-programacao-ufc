#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	// igual, diferente, maior que, menor que, maior ou igual, menor ou igual
	float num1, num2;
	
	cout << "Entre com dois valores: ";
	cin >> num1 >> num2;
	
	if (num1 == num2) { cout << num1 << " eh igua a " << num2 << endl; }
	if (num1 != num2) { cout << num1 << " eh diferente de " << num2 << endl; }
	if (num1 > num2) { cout << num1 << " eh maior que " << num2 << endl; }
	if (num1 < num2) { cout << num1 << " eh menor que " << num2 << endl; }
	if (num1 >= num2) { cout << num1 << " eh maior ou igual a " << num2 << endl; }
	if (num1 <= num2) { cout << num1 << " eh menor ou igual a " << num2 << endl; }
	
	return 0;
}
