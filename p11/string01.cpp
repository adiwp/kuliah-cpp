#include <iostream>
#include <string>
using namespace std;

int main()
{
    // deklarasi character
    char Huruf = 'A';
    char Nama[10] = { 'S', 'o', 'e', 'l', 'i', 's', 't', 'i', 'y', 'o'};

    // output Huruf
    cout << "Isi karakter Huruf: " << Huruf << endl;
    // output Nama
    for (int i = 0; i < 10; i++) {
        cout << Nama[i];
    }
    cout << endl;


    // deklarasi string
    string greeting = "Hello";
    // output greeting
    cout << greeting;

    return 0;
}