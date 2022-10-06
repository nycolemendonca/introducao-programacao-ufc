#include <iostream>
#include <cmath>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	float angulo, c1, c2, hipotenusa;
	
	cout << "Angulo: ";
	cin >> angulo;
	cout << "Hipotenusa: ";
	cin >> hipotenusa;
	
	angulo = (angulo / 180) * M_PI; // conversão grau-radiano
	c1 = hipotenusa * cos(angulo);
	c2 = hipotenusa * sin(angulo);
	
	cout << "c1 = " << c1 << endl;
	cout << "c2 = " << c2 << endl;
	cout << "hipotenusa = " << hypot(c1, c2) << endl;
	
	return 0;
}
