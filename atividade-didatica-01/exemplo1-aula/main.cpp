// primeiro menor e ultimo maior

#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3;

    cout << "Entre com 3 valores: ";
    cin >> num1 >> num2 >> num3;

    if (num1 <= num2 && num1 <= num3) {
        cout << num1 << ' ' << endl;

        if (num2 <= num3) {
            cout << num1 << ' ' << num3 << endl;

        } else {
            cout << num3 << ' ' << num1 << endl;
            }

    } else if ( num2 <= num1 && num2 <= num3 ) {
        cout << num2 << ' ';

        if (num1 <= num3) {
            cout << num1 << ' ' << num3 << endl;

            } else {
                cout << num3 << ' ' << num1 << endl;
                }
        }

 /*
    if (num3 > num1 && num3 > num2) {
        cout << "O ultimo numero eh o maior" << endl;
    }

    if (num2 > num1 && num2 > num3) {
        cout << "O segundo numero eh o maior" << endl;
    }
 */


    return 0;
}
