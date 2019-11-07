#include<iostream>
using namespace std;

int main() {
    int jumlahMahasiswa;
    cout << "Berapa jumlah mahasiswa? "; cin >> jumlahMahasiswa;

    int nilai[jumlahMahasiswa];
    int jumlahNilai = 0;
    float ratarataNilai = 0.0;

    // input nilai setiap mahasiswa menggunakan for
    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "Nilai ke-" << i << ": "; cin >> nilai[i];
        jumlahNilai += nilai[i];
    }

    ratarataNilai = (float) jumlahNilai / (float) jumlahMahasiswa;

    cout << "Rata-rata Nilai adalah " << ratarataNilai;
    
    return 0;
}