#include <iostream>
#include <iomanip>
using namespace std;

float luasSegitiga(int alas, int tinggi) {
    return ((float) alas * (float) tinggi) / 2;
}

int main() {
    int a = 10, t = 15;
    int A = 8, T = 16;

    float luasA, luasB;

    luasA = luasSegitiga(a, t);
    luasB = luasSegitiga(A, T);

    cout << fixed << setprecision(3);
    cout << "Luas Segitiga A: " << luasA << endl;
    cout << "Luas Segitiga B: " << luasB << endl;

    return 0;
}