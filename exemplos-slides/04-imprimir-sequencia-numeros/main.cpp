#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	unsigned short i = 1; // inteiro "curto"
	
	while (i <= 100) {
		cout << i << endl;
		i++; // incrementa i de 1 e retorna ao while
	}
	
	return 0;
}
