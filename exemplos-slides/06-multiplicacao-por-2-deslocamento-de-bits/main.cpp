#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	short int x = 30, y;
	
	y = x << 1; // multiplica��o por 2
	cout << "x = " << x << ", y = " << y << endl;
	
	y = x >> 1; // divis�o por 2
	cout << "x = " << x << ", y = " << y << endl;
	
	return 0;
}
