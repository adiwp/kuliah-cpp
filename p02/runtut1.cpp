#include <iostream>

using namespace std;

int A, B, C;

int main() {
	A = 97;
	B = 26;
	
	cout << "A dan B sebelum nilainya ditukar." << endl;
	cout << "A: " << A << endl;
	cout << "B: " << B << endl;
	
	C = A; A = B; B = C;
	
	cout << "A dan B setelah nilainya ditukar." << endl;
	cout << "A: " << A << endl;
	cout << "B: " << B << endl;
	
	return 0;
}