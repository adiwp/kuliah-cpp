#include <iostream>

using namespace std;

int A, B;

int main() {
	A = 97;
	B = 26;
	
	cout << "A dan B sebelum nilainya ditukar." << endl;
	cout << "A: " << A << endl;
	cout << "B: " << B << endl;
	
	A = A + B; B = A - B; A = A - B;
	
	cout << "A dan B setelah nilainya ditukar." << endl;
	cout << "A: " << A << endl;
	cout << "B: " << B << endl;
	
	return 0;
}