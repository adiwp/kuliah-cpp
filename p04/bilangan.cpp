#include<iostream>
using namespace std;

main () {
	int bilangan;
	
	cout << "Masukkan sebuah bilangan bulat: "; cin >> bilangan;
	
	if (bilangan > 0)
		cout << bilangan << " adalah bilangan positif" << endl;
	else if (bilangan < 0)
		cout << bilangan << " adalah bilangan negatif" << endl;
	else
		cout << bilangan << " adalah nol" << endl;
}