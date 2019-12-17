#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // mendefinisikan objek
    ofstream file_keluaran;

    // membuka file
    file_keluaran.open("Biodata.txt", ios::app);

    cout << "menambah data..." << endl;

    file_keluaran << "Golongan Darah : B " << endl;

    // menutup file
    file_keluaran.close();

    return 0;
}