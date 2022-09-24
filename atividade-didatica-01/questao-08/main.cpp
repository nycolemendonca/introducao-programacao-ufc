#include <iostream>

using namespace std;

int main()
{
    float num1, num2, soma;

    cout << "Entre com dois valores: ";
    cin >> num1 >> num2;

    soma = num1 + num2;

    if ( soma > 10 ) {
        cout << "Soma: " << soma;
    } else {
        cout << "A soma nao resulta em um valor maior que 10." << endl;
    }


    return 0;
}
