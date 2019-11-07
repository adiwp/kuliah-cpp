#include<iostream>
using namespace std;

main() {
	int r, s;
	
	r = 22; s = 55; r++; s++;
	cout << "Tanda ++ di belakang" << endl;
	cout << "r = " << r << endl;
	cout << "s = " << s << endl;
	
	r = 22; s = 55; ++r; ++s;
	cout << "Tanda ++ di belakang" << endl;
	cout << "r = " << r << endl;
	cout << "s = " << s << endl;
}