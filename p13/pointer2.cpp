#include <iostream>
using namespace std;

int main() {
    int vint = 63;
    int* pint;

    cout << "vint  = " << vint << endl;
    cout << "&vint = " << &vint << endl;

    pint = &vint;
    *pint = 66;

    cout << "vint  = " << vint << endl;
    cout << "pint  = " << pint << endl;
    cout << "*pint = " << *pint << endl;

    return 0;
}