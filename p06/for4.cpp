#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int x, JD;
    float IsiData, Rata2, Total;

    Total = 0;

    cout << "Menampilkan total data dan rata-rata" << endl;
    cout << "Masukkan jumlah data! "; cin >> JD;

    for (x = 1; x <= JD; x++) {
        cout << "Masukkan data ke-" << x << endl; cin >> IsiData;
        Total += IsiData;
    }

    Rata2 = Total / JD;

    cout << fixed << setprecision(3);
    cout << "Jumlah data yang diinput: " << JD << endl;
    cout << "Jumlah total data yang diinput: " << Total << endl;
    cout << "Rata-rata data yang diinput: " << Rata2 << endl;
}