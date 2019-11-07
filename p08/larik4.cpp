#include <iostream>
#include <string>
using namespace std;

int main()
{
    int jumlah;
    cout << "Masukkan jumlah mahasiswa: "; cin >> jumlah;
    
    string mahasiswa[jumlah];

    for (int i = 0; i < jumlah; i++) {
        cout << "Mahasiswa ke-" << i << ": "; cin>> mahasiswa[i];
    }
    
    cout << "Output\n";
    for (int i = 0; i < jumlah; i++) {
        cout << "Mahasiswa ke-" << i << ": " << mahasiswa[i] << endl;
    }

    
    return 0;
}