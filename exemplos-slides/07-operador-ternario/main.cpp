#include <iostream>

using namespace std;

int main()
{
    short int num;

    cout << "Entre com um numero inteiro: ";
    cin >> num;

    cout << "O numero fornecido eh ";
    cout << ((num % 2 == 0) ? "par.\n" : "impar.\n");

    return 0;
}
