#include <iostream>
#include <cmath>

using namespace std;

// volume e area - tetraedro regular
int main()
{
    float volume, area, aresta;

    cout << "Aresta: ";
    cin >> aresta;

    if (aresta > 0) {
        volume = (pow(aresta, 3) * sqrt(18)) / 36;
        area = pow(aresta, 2) * sqrt(3);

        cout << "Volume: " << volume << endl;
        cout << "Area: " << area << endl;

    } else {
        cout << "Valor da aresta invalido." << endl;
        }


    return 0;
}
