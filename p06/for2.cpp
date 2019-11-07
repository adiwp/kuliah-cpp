#include <iostream>
using namespace std;

int main() {
    int k, n;

    cout << "menampilkan pengulangan 4x" << endl;

    n = 0;

    for (k = 1; k <= 4; k++) {
        n += 5;
        cout << "data ke-" << k << endl;
        cout << "nilai akhir dari n adalah " << n << endl;
    }

    return 0;
}