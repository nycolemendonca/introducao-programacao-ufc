/*
    conversão uppercase (soma 32 ou 2^5) -> lowercase (subtrai 32 ou 2^5)
*/

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char letraMinuscula, letraMaiuscula;

    cout << "Minuscula: ";
    cin >> letraMinuscula;
    cout << "Maiuscula: ";
    cin >> letraMaiuscula;
    cout << endl;

    cout << letraMinuscula << " em maiúscula é " << static_cast<char>(letraMinuscula - 32) << endl;
    cout << letraMaiuscula << " em minúscula é " << static_cast<char>(letraMaiuscula + 32) << endl;

    return 0;
}
