/*  Escreva um programa que leia como inteiros o dia, o mês e o ano de duas datas
    e determine se as duas estão em ordem cronológica (se a primeira é anterior à
    segunda). Imprima uma mensagem adequada em cada caso. Assuma que as duas datas
    fornecidas serão válidas. */

#include <iostream>

using namespace std;

int main()
{
    short int dia1, dia2, mes1, mes2, ano1, ano2;

    cout << "Primeira data (dd mm aaaa): ";
    cin >> dia1 >> mes1 >> ano1;
    cout << "Segunda data (dd mm aaaa): ";
    cin >> dia2 >> mes2 >> ano2;

    if (ano1 > ano2) { cout << "As datas nao estao em ordem cronologica." << endl; }
    else if ((ano1 == ano2) && (mes1 > mes2)) { cout << "As datas nao estao em ordem cronologica." << endl; }
    else if ((ano1 == ano2) && (mes1 == mes2) && (dia1 > dia2)) { cout << "As datas nao estao em ordem cronologica." << endl; }
    else { cout << "As datas estao em ordem cronologica." << endl; }

    return 0;
}
