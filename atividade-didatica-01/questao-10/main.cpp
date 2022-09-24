#include <iostream>

using namespace std;

int main()
{
    cout << "0 xor 0 = " << (false ^ false) << endl;
    cout << "0 xor 1 = " << (false ^ true) << endl;
    cout << "1 xor 0 = " << (true ^ false) << endl;
    cout << "1 xor 1 = " << (true ^ true) << endl;

    cout << endl;

    cout << "0 and 0 = " << (false & false) << endl;
    cout << "0 and 1 = " << (false & true) << endl;
    cout << "1 and 0 = " << (true & false) << endl;
    cout << "1 and 1 = " << (true & true) << endl;

    return 0;
}
