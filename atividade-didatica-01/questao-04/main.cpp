#include <iostream>

using namespace std;

int main()
{
    float celsius, fahrenheit;

    cout << "Temperatura em Celsius: ";
    cin >> celsius;

    fahrenheit = (9 * (celsius / 5)) + 32;

    cout << "Temperatura em Fahrenheit: " << fahrenheit << endl;

    return 0;
}
