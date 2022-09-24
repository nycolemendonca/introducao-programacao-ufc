#include <iostream>

using namespace std;

int main()
{
    int numPlaneta;
    float peso;

    cout << "Planeta (1 - Mercurio, 2 - Venus, 3 - Marte, 4 - Jupiter, 5 - Saturno, 6 - Urano): ";
    cin >> numPlaneta;
    cout << "Peso na Terra: ";
    cin >> peso;

    if (peso > 0){
        if      (numPlaneta == 1) { cout << "Peso no outro planeta: " << peso * 0.37 << endl; }
        else if (numPlaneta == 2) { cout << "Peso no outro planeta: " << peso * 0.88 << endl; }
        else if (numPlaneta == 3) { cout << "Peso no outro planeta: " << peso * 0.38 << endl; }
        else if (numPlaneta == 4) { cout << "Peso no outro planeta: " << peso * 2.64 << endl; }
        else if (numPlaneta == 5) { cout << "Peso no outro planeta: " << peso * 1.15 << endl; }
        else if (numPlaneta == 6) { cout << "Peso no outro planeta: " << peso * 1.17 << endl; }
        else { cout << "Planeta invalido." << endl; }


    } else { cout << "Valor invalido." << endl; }

    return 0;
}
