#include <iostream>
#include <string>
using namespace std;

int main() {
    #define MAX 3

    string mahasiswa[MAX] = {"Yanuar", "Solekah", "Yulius"};

    cout << "Mahasiswa terdaftar adalah: ";
    for (int i =0; i < MAX; i++) {
        cout << mahasiswa[i] << " ";
    }
    cout << endl;

    return 0;
}