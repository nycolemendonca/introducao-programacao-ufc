#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    char operacao;

    cout << "Entre com o primeiro valor: ";
    cin >> num1;
    cout << "Entre com o segundo valor: ";
    cin >> num2;

    cout << "Escolha a operacao: +, -, *, /: ";
    cin >> operacao;
    cout << endl;

    switch (operacao) {
        case '+': cout << num1 << " + " << num2 << " = " << (num1+num2) << endl;
        break;

        case '-': cout << num1 << " - " << num2 << " = " << (num1-num2) << endl;
        break;

        case '*': cout << num1 << " * " << num2 << " = " << (num1*num2) << endl;
        break;

        case '/':
            if (num2 != 0) { cout << num1 << " / " << num2 << " = " << (num1/num2) << endl; }
            else { cout << "A divisao por zero eh invalida." << endl; }
        break;

        default: cout << "Operacao Invalida." << endl;
    }

    return 0;
}
