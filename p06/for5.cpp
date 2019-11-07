#include <iostream>
using namespace std;

int main() {
    int k, i, n;

    n = 0;

    cout << "menghitung n = n + 5 di dalam loop bersarang k 4x dan i 6x" << endl;

    for (k = 1; k <= 4; k++) {
        cout << "\"" << k << "\"" << endl;
        for (i = 1; i <= 6; i++) {
            cout << i << " " ;
            n += 5;
            cout << "=> N: " << n << " ";
            if ( i  == 6) cout << endl;
        }
    }

    cout << "Nilai akhir dari n adalah " << n << endl;
    return 0;
}