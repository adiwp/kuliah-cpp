#include <iostream>
using namespace std;

main() {
	int panjang, lebar;
	int keliling, luas;
	
	cout << "Menghitung Luas & Keliling Persegi Panjang" << endl;
	cout << "Panjang: "; 	cin >> panjang;
	cout << "Lebar: "; 		cin >> lebar;
	
	luas = panjang * lebar;
	keliling = (panjang + lebar) * 2;
	
	cout << "Luas: " << luas << endl;
	cout << "Keliling: " << keliling << endl;
}