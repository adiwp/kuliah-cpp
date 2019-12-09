#include <iostream>
using namespace std;

void coba (int *x) {
    *x = 20;
}

int main()
{
    int y = 66;

    cout << "Y = " << y << endl;
    coba (&y);
    cout << "Y = " << y << endl;

    return 0;
}