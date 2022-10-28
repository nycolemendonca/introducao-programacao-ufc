#include <iostream>

// CONTAR ELEMENTOS [-10, 10]

using namespace std;

int main()
{
    const short M = 3, N = 3;
    short A[M][N];
    short i, j;
    unsigned int qtde = 0; // A quantidade deve ser positiva

    cout << "Leitura da matriz: " << endl;
    for (i = 0; i < M; i++){
        for (j = 0; j < N; j++){
            cout << "A[" << i << "][" << j << "]: ";
            cin >> A[i][j];

            if ((A[i][j] >= -10) && (A[i][j] <= 10)){ qtde++; }
        }
    }

    cout << "Qtde em [-10, 10]: " << qtde << endl;

    return 0;
}
