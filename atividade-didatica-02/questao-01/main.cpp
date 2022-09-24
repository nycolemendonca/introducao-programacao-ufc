#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float altura, raio, volume, area;

    cout << "Altura: ";
    cin >> altura;
    cout << "Raio: ";
    cin >> raio;
    cout << endl;

    if ((altura > 0) && (raio > 0)) {

        volume = (M_PI * pow(raio, 2) * altura) / 3;
        area = M_PI * raio * (raio + sqrt(pow(raio, 2) + pow(altura, 2)));

        cout << "Volume: " << volume << endl;
        cout << "Area: " << area << endl;

    } else {
        cout << "Erro." << endl;
        }


    return 0;
}
