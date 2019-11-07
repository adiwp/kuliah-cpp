#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int jumlahMhs;
    int jumlahNilai = 0;
    float rataNilai = 0.0;

    cout << "Berapa jumlah mahasiswa? "; cin >> jumlahMhs;
    int nilai[jumlahMhs];
    
    for(int i = 0; i < jumlahMhs; i++) {
        cout << "Nilai mahasiswa ke-" << i << ": "; cin >> nilai[i];
        jumlahNilai += nilai[i];
    }

    rataNilai = (float) jumlahNilai / (float) jumlahMhs;

    cout << fixed << setprecision(3);
    cout << "\nNilai rata-rata mahasiswa: " << rataNilai << endl;
}