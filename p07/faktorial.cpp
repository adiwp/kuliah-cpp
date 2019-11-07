#include <iostream>
using namespace std;

int factorial(int n);

int main() {
    int n;
    cout << "Masukkan bilangan bulat positif: ";
    cin >> n;
    cout << "Faktorial dari " << n << " = " << factorial(n);
    return 0;
}

int factorial(int n) {
    if (n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}