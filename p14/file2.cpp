#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // mendeklarasikan array sebagai penyangga/buffer
    const int MAKS = 80;
    char penyangga[MAKS+1];

    ifstream file_masukan("Biodata.txt");

    while (file_masukan) {
        file_masukan.getline(penyangga, MAKS);
        cout << penyangga << endl;
    }

    // menutup file
    file_masukan.close();

    return 0;
}