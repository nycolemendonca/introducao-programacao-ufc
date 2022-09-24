#include <iostream>

using namespace std;

int main()
{
    unsigned int dia1, dia2, mes1, mes2, ano1, ano2;

    cout << "Entre com a primeira data: ";
    cin >> dia1 >> mes1 >> ano1;
    cout << "Entre com a segunda data: ";
    cin >> dia2 >> mes2 >> ano2;
    cout << endl;

    if (ano1 > ano2) {
        cout << "as datas nao estao em ordem cronologica" << endl;
    } else {
        if ((ano1 == ano2) && (mes1 == mes2) && (dia1 > dia2)) {
            cout << "as datas nao estao em ordem cronologica" << endl;
        } else {
            if ((ano1 == ano2) && (mes1 ==  mes2) && (dia1 > dia2)) {
                cout << "primeira > segunda" << endl;
            } else {
                if ((ano1 == ano2) && (mes1 == mes2) && (dia1 == dia2)) {
                    cout << "as datas sao iguais" << endl;
                } else {
                    cout << "as datas estao em ordem cronologica" << endl;
                }
            }
        }
    }

    return 0;
}
