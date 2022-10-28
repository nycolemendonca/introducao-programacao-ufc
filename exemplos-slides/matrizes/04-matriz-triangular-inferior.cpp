#include <iostream>

// Matriz triangular inferior -> Zero acima da diagonal principal, i < j

using namespace std;

int main()
{
    const short N = 5;
    short i, j, T[N][N];

    cout << "Matriz triangular inferior" << endl;
    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            // Índice linha >= índice coluna
            T[i][j] = (i >= j) ? 1 : 0;
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
