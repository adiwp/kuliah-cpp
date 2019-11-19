#include<iostream>
using namespace std;

int main() {
    int Nilai[2][2];
    int i, j;
    // input elemen matrik
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            cout << "Nilai["<<i<<"]["<<j<<"] : ";
            cin >> Nilai[i][j];
        }
    }

    // cetak elemen matrik
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++)
            cout << Nilai[i][j] << " ";
        cout << endl;
    }

    return 0;
}