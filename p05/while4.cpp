#include <iostream>
using namespace std;

int main() {
	int Z = 2;
	
	cout << "Menampilkan Nilai Z" << endl;
	cout << "===================" << endl;
	
	while (Z <= 12) {
		if (Z > 6)
			break;
		
		cout << "Nilai Z: " << Z << endl;
		Z++;
	}
	
	return 0;
}