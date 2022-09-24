#include <iostream>

using namespace std;

int main()
{
    float fahrenheit, celsius;

    cout << "Temperatura em Fahrenheit: ";
    cin >> fahrenheit;

    celsius = 5 * ((fahrenheit - 32) / 9);

    cout << "Temperatura em Celsius: " << celsius << endl;

    return 0;
}
