#include <iostream>

using namespace std;

int main()
{
    short idade;

    cout << "Idade: ";
    cin >> idade;

    if (idade >= 0) {

        if ((idade >= 0) && (idade <= 10)) { cout << "Preco: R$ 30.00" << endl; }
        else if ((idade > 10) && (idade <= 29)) { cout << "Preco: R$ 60.00" << endl; }
        else if ((idade > 29) && (idade <= 45)) { cout << "Preco: R$ 120.00" << endl; }
        else if ((idade > 45) && (idade <= 59)) { cout << "Preco: R$ 150.00" << endl; }
        else if ((idade > 59) && (idade <= 65)) { cout << "Preco: R$ 250.00" << endl; }
        else { cout << "Preco: R$ 400.00" << endl; }
        }

        else { cout << "Idade invalida." << endl; }

        return 0;
    }
