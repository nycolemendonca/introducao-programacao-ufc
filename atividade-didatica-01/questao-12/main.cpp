#include <iostream>

using namespace std;

int main()
{
    unsigned int total, horas, minutos, segundos;

    cout << "Total de segundos: " ;
    cin >> total;

    horas = total / 3600;
    total = total % 3600;
    minutos = total / 60;
    total = total % 60;
    segundos = total;

    cout << horas << " hora(s), " << minutos << " minuto(s) e " << segundos << " segundo(s)." << endl;

    return 0;
}
