#include <iostream>
#define n 9
using namespace std;

// deklarasi variabel global
int i, k, j, X;

void tampil1() {
    // deklarasi Array beserta data-datanya
    int A[n] = {23, 17, 14, 6, 13, 10, 1, 5, 7};
    
    cout << "Sebelum dilakukan pengurutan array" << endl;
    cout << "==================================" << endl;

    // menampilkan nilai array A belum diurut
    for (i = 0; i < 9; i++)
        cout << A[i] << " ";
    
    cout << endl << endl;
}

void tampil2() {
    int A[n];
    cout << "Pengurutan array" << endl;
    cout << "==================================" << endl;

    k = 0;
    
    while (k < n-1) {
        j = k;
        i = k + 1;
        
        while (i < n) {
            if (A[i] > A[j])
                j = i;
            cout << A[i] << " ";
            i++;
        }

        cout << endl;
        X = A[j];
        A[j] = A[k];
        A[k] = X;
        k++;
    }

    cout << endl << endl;
}

void tampil3() {
    int A[n];
    cout << "Setelah pengurutan" << endl;
    cout << "==================================" << endl;

    for (i = 0; i < n; i++)
        cout << A[i] << " ";
    
    cout << endl << endl;
}

int main() {
    tampil1();
    tampil2();
    tampil3();

    return 0;
}