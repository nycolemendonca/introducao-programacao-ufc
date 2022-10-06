#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {

	float ladoA, ladoB, ladoC;
	bool condicao1, condicao2, condicao3;
	
	cout << "Entre com os lados A B C do triangulo: ";
	cin >> ladoA >> ladoB >> ladoC;
	
	condicao1 = (ladoA < (ladoB + ladoC));
	condicao2 = (ladoB < (ladoA + ladoC));
	condicao3 = (ladoC < (ladoA + ladoB));
	
	if (condicao1 && condicao2 && condicao3){
		cout << "Os 3 lados formam um triangulo." << endl;
		
		condicao1 = (ladoA == ladoB);
		condicao2 = (ladoB == ladoC);
		condicao3 = (ladoC == ladoA);
		
		if (condicao1 && condicao2 && condicao3){ cout << "O tringulo eh equilatero." << endl; }
		else if (condicao1 || condicao2 || condicao3){ cout << "O tringulo eh isosceles." << endl; }
	}

	return 0;
}
