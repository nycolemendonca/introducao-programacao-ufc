#include <iostream>

// Matriz Identidade -> Diagonal principal (índices iguais) = 1.

using namespace std;

int main()
{
    const short N = 5;
    short i, j, I[N][N]; // a matriz identidade é sempre quadrada

    cout << "Matriz Identidade: " << endl;
    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            I[i][j] = (i == j) ? 1 : 0; // 1 se e somente se i = j
        }
    }

    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            cout << I[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
