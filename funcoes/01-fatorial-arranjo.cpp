#include <iostream>

/* Crie uma função que receba como parâmetro um inteiro não-negativo, calcule e retorne o seu
fatorial. Usando essa função, crie uma segunda função que calcule o número de arranjos de p dos
n elementos. Use essa função na main para calcular e imprimir o número de arranjos de p dos n
elementos, em que n > 0 e p > 0 && p <= n são lidos via teclado na função main.
 */

using namespace std;

unsigned int fatorial(unsigned short n){
    unsigned int f = 1;
    if (n > 1) return n*fatorial(n-1);
    else return 1;
}

unsigned int arranjo(unsigned short n, unsigned short p){
    int arranjof = 1;
    for (int i = n; i > (n-p); i--){ arranjof = arranjof * i; }
    return arranjof;
}

int main(){
    float num, p;
    cout << "Entre com um numero: ";
    cin >> num;
    cout << "Valor de p (arranjo): ";
    cin >> p;
    cout << "O fatorial de " << num << " eh: " << fatorial(num) << endl;
    cout << "Arranjo: " << arranjo(num, p) << endl;

    return 0;
}
