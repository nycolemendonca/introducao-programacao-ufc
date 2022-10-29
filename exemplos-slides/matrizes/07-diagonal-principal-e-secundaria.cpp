#include <iostream>
#include <stdlib.h>

// Manipulando as diagonais principal e secund�ria da matriz

using namespace std;

int main()
{
    const short N = 4;
    unsigned short i, j, M[N][N];

    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            M[i][j] = rand()%10; // Gera matriz aleat�ria
            cout << M[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Diagonal Principal: ";
    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            if (i == j) { cout << M[i][j] << " "; }
        }
    }
    cout << endl;
    cout << endl;
    cout << "Diagonal Secundaria: ";
    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            if (i+j == N-1) { cout << M[i][j] << " "; }
        }
    }
    cout << endl;


    return 0;
}
