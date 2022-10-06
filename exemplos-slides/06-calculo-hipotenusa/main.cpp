#include <iostream>
#include <cmath>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	float catetoOposto, catetoAdjacente, hipotenusa;
	
	cout << "Cateto Oposto: ";
	cin >> catetoOposto;
	cout << "Cateto Adjacente: ";
	cin >> catetoAdjacente;
	
	hipotenusa = sqrt(pow(catetoOposto, 2) + pow(catetoAdjacente, 2));
	cout << "Hipotenusa: " << hipotenusa << endl;
	hipotenusa = hypot(catetoOposto, catetoAdjacente);
	cout << "Hipotenusa: " << hipotenusa << endl;
	
	return 0;
}
