#include <iostream>

using namespace std;

int main()
{
    const short N = 2;
    unsigned int i, j;
    unsigned int A[N][N], B[N][N], C[N][N];

    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            cout << "A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }

    cout << endl;
    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            cout << "B[" << i << "][" << j << "]: ";
            cin >> B[i][j];
        }
    }

    cout << endl;
    cout << "SOMA" << endl;
    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            C[i][j] = A[i][j] + B[i][j];
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    cout << "SUBTRACAO" << endl;
    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            C[i][j] = A[i][j] - B[i][j];
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    cout << "PRODUTO" << endl;
    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            C[i][j] = A[i][j] * B[i][j];
            cout << C[i][j] << " ";
        }
        cout << endl;
    }




    return 0;
}
