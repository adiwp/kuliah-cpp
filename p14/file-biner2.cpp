#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int bilangan;

    // membaca file
    ifstream file_masukan("Angka.dat", ios::binary);

    cout << "Menampilkan isi File Angka..." << endl;

    // membaca bilangan
    file_masukan.read((char *) &bilangan, sizeof(int));

    while (file_masukan) {
        cout << bilangan << endl;
        file_masukan.read((char *) &bilangan, sizeof(int));
    }

    // menutup file
    file_masukan.close();

    return 0;
}