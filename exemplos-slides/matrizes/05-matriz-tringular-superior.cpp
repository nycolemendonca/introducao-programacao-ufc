#include <iostream>

// Matriz triangular superior -> Zeros abaixo da diagonal principal

using namespace std;

int main()
{
    const short N = 5;
    short i, j, T[N][N];

    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            // Índice linha <= índice coluna
            T[i][j] = (i <= j) ? 1 : 0;
        }
    }

    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            cout << T[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
