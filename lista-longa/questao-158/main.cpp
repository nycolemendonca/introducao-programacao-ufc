#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    float valorEmprestimo, txJurosAno, numParcelasAno, numAnos, i, R, balancoEmp, parcelasPagas;

    cout << "Valor do emprestimo: ";
    cin >> valorEmprestimo;
    cout << "Taxa de juros ao ano: ";
    cin >> txJurosAno;
    cout << "Numero de parcelas (a.a.): ";
    cin >> numParcelasAno;
    cout << "Anos: ";
    cin >> numAnos;
    cout << "Parcelas pagas: ";
    cin >> parcelasPagas;

    numParcelasAno = 12;
    i = txJurosAno / numParcelasAno;


    R = (valorEmprestimo * i) / (1 - (pow(1 + i, - (numParcelasAno * numAnos))));

    balancoEmp = R * (1 - (pow((1 + i), - ((numParcelasAno * numAnos) - parcelasPagas))) / i);

    cout << "Balanco: " << balancoEmp << endl;


    return 0;
}
