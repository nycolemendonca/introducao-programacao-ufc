#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	const short N = 6; // entrada dos produtos
	float preco, p1{0}, p2{0}, p3{0};
	// p1 (barato), p2 (acessivel), p3 (caro)
	
	for (short n = 0; n < N; ++n) {

		// do-while -> validação dos dados de entrada
		do {
			cout << "Digite o preco do produto: ";
			cin >> preco;
			
			if (preco <= 0) { cout << "O preco deve ser maior ou igual a zero." << endl; }
		
		} while (preco <= 0);
		
		// separação dos preços
		if (preco < 50) { p1++; }
		else if (preco < 1000) { p2++; }
		else { p3++; }
	}
	
	cout << "Percentual de produtos baratos: " << (p1 / N) * 100 << " %" << endl;
	cout << "Percentual de produtos acessiveis: " << (p2 / N) * 100 << " %" << endl;
	cout << "Percentual de produtos caros: " << (p3 / N) * 100 << " %" << endl;
	
	return 0;
}
