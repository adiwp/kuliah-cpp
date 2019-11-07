#include<iostream>

using namespace std;

int main() {
	int angka;
	
	cout << "Masukkan angka [1/2/3]: " ; cin >> angka;
	
	switch (angka) {
		case 1	:
			cout << "Angka SATU" << endl;
			break;
		case 2	:
			cout << "Angka DUA" << endl;
			break;
		case 3	:
			cout << "Angka TIGA" << endl;
			break;
		default	:
			cout << "Angka Anda Salah" << endl;
	}
	
	return 0;
}