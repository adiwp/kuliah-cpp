#include<iostream>
using namespace std;

int main() {
    int Nilai[3][4] = {{11, 22, 33, 44}, {63, 11, 66, 7}, {22, 28, 11, 7}};
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++)
            cout << Nilai[i][j] << " ";
        cout << endl;
    }

    return 0;
}