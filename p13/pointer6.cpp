#include <iostream>
using namespace std;

int main()
{
    int n = 44, *pn;

    // inisialisasi pointer pn dengan alamat variabel n
    pn = &n;

    cout << "n   = " << n << endl;
    cout << "&n  = " << &n << endl;
    cout << "pn  = " << pn << endl;
    cout << "*pn  = " << *pn << endl;

    return 0;
}