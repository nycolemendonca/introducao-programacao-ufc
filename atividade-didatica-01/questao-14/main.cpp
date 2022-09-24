#include <iostream>
#include <bitset>
#include <iomanip>

using namespace std;

int main()
{
    int i;

    auto x = bitset<8>(4);

    for (i = 0; i <= 15; i++) {

        cout << setw(3) << setfill('0') << dec << i << " - ";
        cout << hex << i << " - ";
        cout << setw(3) << setfill('0') << oct << i << " - ";
        cout << bitset<4>(i) << endl;
    }

    cout << endl;

    x.set(1);
    cout << x << endl;


    return 0;
}
