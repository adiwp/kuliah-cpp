#include <iostream>
using namespace std;

int main() {
	int Z = 2;
	
	cout << "===================" << endl;
	cout << "Menampilkan nilai Z" << endl;
	cout << "===================" << endl;
	
	do {
		cout << "Nilai Z adalah: " << Z << endl;
		Z++;
	} while (Z <= 12);
	
	return 0;
}