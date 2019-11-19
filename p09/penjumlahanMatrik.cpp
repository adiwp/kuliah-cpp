#include<iostream>
using namespace std;

int main() {
    int A[3][3];
    int B[3][3];
    int C[3][3];
    int i, j;
    // input elemen matrik A
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << "A[" << i << "][" << j << "] : ";
            cin >> A[i][j];
        }
    }

    // input elemen matrik B
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << "B[" << i << "][" << j << "] : ";
            cin >> B[i][j];
        }
    }

    // cetak elemen matrik A
    cout << "Cetak Matrik A" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            cout << A[i][j] << " ";
        cout << endl;
    }

    // cetak elemen matrik B
    cout << "Cetak Matrik B" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            cout << B[i][j] << " ";
        cout << endl;
    }

    // Penjumlahan Matrik A + Matrik B
    cout << "Menjumlahkan Matrik A dan Matrik B" << endl;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            C[i][j] = A[i][j] + B[i][j];

    // cetak elemen matrik C
    cout << "Cetak Matrik C" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            cout << C[i][j] << " ";
        cout << endl;
    }
    
    return 0;
}