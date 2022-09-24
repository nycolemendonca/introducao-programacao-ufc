#include <iostream>
#include <cmath>

/* incluir condição de existência do triângulo
    ladoA < ladoB + ladoC
    ladoB < ladoA + ladoB
    ladoC < ladoA + ladoB
*/

using namespace std;

int main()
{
    float areaTriangulo, ladoA, ladoB, ladoC, s;

    cout << "Entre com os lados do triangulo: ";
    cin >> ladoA >> ladoB >> ladoC;

    s = (ladoA + ladoB + ladoC) / 2;

    areaTriangulo = sqrt(s * (s - ladoA) * (s - ladoB) * (s - ladoC));

    cout << "Area do Triangulo: " << areaTriangulo << endl;


    return 0;
}
