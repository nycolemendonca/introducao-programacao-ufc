#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float num1, num2, hipotenusa;

    cout << "Entre com o cateto oposto: ";
    cin >> num1;
    cout << "Entre com o cateto adjacente: ";
    cin >> num2;

    hipotenusa = sqrt( pow(num1, 2) + pow(num2, 2)  );

    cout << "Hipotenusa: " << hipotenusa << endl;

    return 0;
}
