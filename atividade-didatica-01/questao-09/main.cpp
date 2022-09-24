#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i;

    cout << "decimal - octal - hexadecimal" << endl;

    for (i = 0; i <= 15; i++) {
        cout << setw(3) << setfill('0') << dec << i << " - ";
        cout << setw(3) << setfill('0') << oct << i << " - ";
        cout << setw(3) << setfill('0') << hex << i << endl;
    }



    return 0;
}
