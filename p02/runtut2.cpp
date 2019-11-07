#include <iostream>
using namespace std;

main() {
	long jam, menit, detik;
	long jmlDtk;
	
	cout << "KONVERSI WAKTU KE DALAM DETIK" << endl;
	cout << "Jumlah jam	: "; cin >> jam;
	cout << "Jumlah menit	: "; cin >> menit;
	cout << "Jumlah detik	: "; cin >> detik;
	
	jmlDtk = (3600 * jam) +(60 * menit) + detik;
	
	cout << endl << "HASIL KONVERSI: " << jmlDtk << endl;
}