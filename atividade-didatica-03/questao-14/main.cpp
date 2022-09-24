#include <iostream>

using namespace std;

int main()
{
    unsigned int num, i;
    bool ehPrimo = true;

    cout << "Entre com um numero: ";
    cin >> num;

    for (i = 2; i <= (num-1); ++i) {
        if (num % i == 0) {
            ehPrimo = false;
            break;
        }
    }

    if (ehPrimo) {
        cout << "primo" << endl;
    } else { cout << "nao eh primo" << endl; }


    return 0;
}
