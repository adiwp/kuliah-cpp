// Contoh penggunaan
// getline(), push_back() and pop_back()
// fungsi tersebut ada di library <string>
#include <iostream>
#include <string> // for string class
using namespace std;
int main()
{
    // Deklarasi string
    string str;

    // Input string menggunakan fungsi getline
    // "geeksforgeek" in givin output
    getline(cin, str);

    // Menampilkan string
    cout << "The initial string is : ";
    cout << str << endl;

    // Menggunakan push_back() untuk memasukkan sebuah karakter di akhir
    // pushes 's' pada contoh ini
    str.push_back('s');

    // Menampilkan  string
    cout << "The string after push_back operation is : ";
    cout << str << endl;

    // Menggunakan pop_back() untuk menghapus karakter dari akhir
    // pops 's' pada contoh ini
    str.pop_back();

    // Menampilkan string
    cout << "The string after pop_back operation is : ";
    cout << str << endl;

    return 0;
}