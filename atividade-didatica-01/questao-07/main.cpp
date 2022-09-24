#include <iostream>

using namespace std;

int main()
{
    float num;

    cout << "Entre com um numero qualquer: ";
    cin >> num;

    if (num > 20) {
        cout << "Numero informado: " << num << endl;
    } else {
        cout << "O valor informado nao eh maior que 20." << endl;
    }


    return 0;
}
