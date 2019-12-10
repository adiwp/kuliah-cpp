#include <iostream>
using namespace std;

void swap(int *a, int *b) {
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;

}

int main() {
    int a, b;

    a = 5;
    b = 6;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    
    cout << "&a: " << &a << endl;
    cout << "&b: " << &b << endl;

    swap(&a, &b);

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    cout << "&a: " << &a << endl;
    cout << "&b: " << &b << endl;
    
    return 0;
}