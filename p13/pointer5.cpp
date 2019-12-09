#include <iostream>
using namespace std;

int main() {
    int n = 44;

    // inisialisasi pointer pn dengan alamat variabel n
    int *pn = &n;

    cout << "n   = " << n << endl;
    cout << "&n  = " << &n << endl;
    cout << "pn  = " << pn << endl;

    // inisialisasi m dengan integer m dan integer pn sebagai pointer
    int m = *pn;

    cout << "m   = " << m << endl;

    return 0;
}