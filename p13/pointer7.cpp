#include <iostream>
using namespace std;

int main() {
    int n, *pn, **ppn;
    n = 44;
    pn = &n;
    ppn = &pn;

    cout << "n - *pn - *ppn : " << n << " - " << *pn << " - " << *ppn << endl;
    cout << "&n - &pn - &ppn : " << &n << " - " << &pn << " - " << &ppn << endl;
    cout << "n - pn - ppn : " << n << " - " << pn << " - " << ppn << endl;
    
    return 0;
}