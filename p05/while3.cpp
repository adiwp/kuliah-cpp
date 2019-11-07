#include <iostream>
using namespace std;

int main() {
	int tulisan = 1;
	
	cout << "Menampilkan tulisan 3 baris" << endl;
	cout << "==========================" << endl;
	
	while (tulisan <= 15) {
		cout << "Tulisan ke-" << tulisan << endl;
		cout << "Teknik Informatika" << endl;
		cout << "Kelas B & G" << endl;
		cout << "---MinGW---" << endl << endl;
		tulisan++;
	}
	return 0;
}