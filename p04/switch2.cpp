#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main() {
	int PilihK;
	char Pilih;
	float Sisi, Jari, IsiKubus, LuasKubus, LuasLingkaran;
	
	cout << "MENU" << endl;
	cout << "~~~~~~~" << endl;
	cout << "A. Menghitung KUBUS" << endl;
	cout << "B. Menghitung LUAS LINGKARAN" << endl;
	cout << "Pilih [A/B]: "; cin >> Pilih;
	
	cout << fixed << setprecision(3);
	
	switch (Pilih) {
		case 'A':
			cout << "1. Isi Kubus " << endl;
			cout << "2. Luas Kubus " << endl;
			cout << "Pilih [1/2]: " ; cin >> PilihK;
			cout << "Masukkan panjang sisi kubus: "; cin >> Sisi;
			
			switch(PilihK) {
				case 1:
					IsiKubus = pow(Sisi, 3);
					cout << "Isi kubus: " << IsiKubus << endl;
					break;
				case 2:
					LuasKubus = 6 * pow(Sisi, 2);
					cout << "Luas kubus: " << LuasKubus << endl;
					break;
				default:
					cout << "Pilihan Anda tidak ada.";
			}
			break;
		case 'B':
			cout << "Jari-jari lingkaran: "; cin >> Jari;
			LuasLingkaran = 3.14 * pow(Jari, 2);
			cout << "Luas Lingkaran: " << LuasLingkaran << endl;
			break;
		default	:
			cout << "Pilihan Anda tidak ada." << endl;
	}
	return 0;
}