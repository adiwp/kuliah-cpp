#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // mendefinisikan objek
    ofstream file_keluaran;

    // membuka file
    file_keluaran.open("Biodata.txt");

    cout << "Merekam..." << endl;

    file_keluaran << "Nama      : Adi Wahyu" << endl;
    file_keluaran << "Alamat    : Pasar Minggu" << endl;
    file_keluaran << "email     : adi.wahyu.p@univpancasila.ac.id" << endl;

    // menutup file
    file_keluaran.close();
    
    return 0;
}