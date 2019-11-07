#include <iostream>
using namespace std;

int main() {
    const int JUMLAHDATA = 7;
    int larik[JUMLAHDATA];

    cout << "INPUT\n";
    for(int i = 0; i < JUMLAHDATA; i++) {
        cout << "Larik[" << i << "]: "; cin >> larik[i];
    }

    cout << "OUTPUT\n";
    for(int i = 0; i < JUMLAHDATA; i++) {
        cout << "Larik[" << i << "]: " << larik[i] << endl;
    }

    return 0;
}