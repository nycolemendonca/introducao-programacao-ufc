#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	// a subtração em binário pode ser feita usando complemento de 2:
	// negação bit-a-bit do subtraendo - > soma com o minuendo
	
	short int x = 30, y = 10;
	cout << "30 - 10 = " << x - y << endl;
	y = ~y; // negação do subtraendo
	y++;	// soma 1 no subtraendo
	
	cout << "30 - 10 = " << x + y << endl; // soma com o minuendo
	
	return 0;
}
