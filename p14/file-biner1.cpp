#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int angka[] = {22, 7, 66};

    // mendefinisikan objek
    ofstream file_keluaran;

    // membuka file
    file_keluaran.open("Angka.dat", ios::binary);
    cout << "Merekam data binari..." << endl;

    for (int i = 0; i < (sizeof(angka)/sizeof(int)); i++)
        file_keluaran.write((char *) &angka[i], sizeof(int));

    // menutup file
    file_keluaran.close();

    return 0;
}