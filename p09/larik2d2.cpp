#include<iostream>
using namespace std;

int main() {
    int Nilai[4][4];
    int i, j;
    // input elemen matrik
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            cout << "Nilai["<<i<<"]["<<j<<"] : ";
            cin >> Nilai[i][j];
        }
    }

    // cetak elemen matrik
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++)
            cout << Nilai[i][j] << " ";
        cout << endl;
    }

    return 0;
}