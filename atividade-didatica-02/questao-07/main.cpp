#include <iostream>

using namespace std;

int main()
{
    short numBisc, numCaixas, numBiscCaixa, numCaixasConteiner, numConteineres;

    cout << "Total de biscoitos: ";
    cin >> numBisc;
    cout << "Numero de biscoitos por caixa: ";
    cin >> numBiscCaixa;
    cout << "Numero de caixas por conteiner: ";
    cin >> numCaixasConteiner;

    if ((numBisc > 0) && (numBiscCaixa > 0) && (numCaixasConteiner > 0)) {
        numCaixas = numBisc / numBiscCaixa;
        numBisc = numBisc % numBiscCaixa;
        cout << "Total de caixas: " << numCaixas << endl;

        if (numBisc > 0) {
            cout << "Serao descartados " << numBisc << " biscoitos." << endl;
        }

        numConteineres = numCaixas / numCaixasConteiner;
        numCaixas = numCaixas % numCaixasConteiner;
        cout << "Total de conteineres: " << numConteineres << endl;

        if (numBisc > 0) {
            cout << "Serao descartadas " << numCaixas << " caixas." << endl;
        }

    } else { cout << "Dados invalidos." << endl; }


    return 0;
}
