#include <iostream>
using namespace std;

int main() {
	
	int bilangan;
	
	cout << "Masukkan sebuah bilangan: "; cin >> bilangan;
	
	if (bilangan % 2 != 0)
		cout << bilangan << " adalah bilangan ganjil." << endl;
	
	return 0;
}