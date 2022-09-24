#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
	
	int a, b, c, delta, x1, x2;
	
	cout << "Digite as constantes a, b, c: ";
	cin >> a >> b >> c;
	
	delta = pow(b, b) - (4 * a * c);
	
	// Verifica se as raízes são reais e distintas
	if (delta > 0) {
		x1 = (-b + sqrt(delta)) / (2 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);
		
		cout << "x1 = " << ceil(x1) << ", x2 = " << ceil(x2) << endl;
	}
	
	return 0;
}
