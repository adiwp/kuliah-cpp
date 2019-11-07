#include <iostream>
using namespace std;

int main() {
	int i, n; 
	long faktorial;
	
	i = 1, faktorial = i;
	
	cout << "Masukkan nilai N "; cin >> n;
	cout << endl;
	
	while (i <= n) {
		faktorial *= (long) i;
		i++;
	}
	
	cout << "Faktorial dari " << n << " adalah " << faktorial << endl;
	
	return 0;
}