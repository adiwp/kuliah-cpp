#include <iostream>
using namespace std;

int main() {
	int hrgBarang, bayar;
	
	cout << "Barapa harga barang yang kalian beli? "; cin >> hrgBarang;
	
	if (hrgBarang > 200000) {
		bayar = 13000 + hrgBarang;
		cout << "Tagihan Anda sebesar " << bayar << ", pembayaran kontan." << endl;
	} else {
		bayar = 25000 + hrgBarang;
		cout << "Tagihan Anda sebesar " << bayar << ", pembayaran kontan." << endl;
	}
	
	return 0;
}