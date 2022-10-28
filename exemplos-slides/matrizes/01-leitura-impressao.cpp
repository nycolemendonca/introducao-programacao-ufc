#include <iostream>

// LEITURA E IMPRESSÃO DOS ELEMENTOS DE UMA MATRIZ

using namespace std;

int main()
{
    const short M = 3, N = 2;
    short A[M][N];
    short i, j; // contadores (ou índices)

    cout << "Leitura da matriz: " << endl;
    for (i = 0; i < M; i++){
        for (j = 0; j < N; j++){
            cout << "A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }

    cout << endl;
    cout << "Impressao da matriz: " << endl;
    for (i = 0; i < M; i++){
        for (j = 0; j < N; j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
