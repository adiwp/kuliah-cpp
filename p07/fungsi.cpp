#include <iostream>
using namespace std;

// deklarasi fungsi
int max(int num1, int num2);

int main() {
    int a = 100, b = 200;
    int ret;

    ret = max(a, b);

    cout << "Nilai maksimalnya adalah: " << ret;

    return 0;
}

/* definisi fungsi maks
   algoritma mencari nilai maksimal dari dua parameter input */
int max(int num1, int num2) {
    // variable local
    int result;

    if (num1 > num2 )
        result = num1;
    else
        result = num2;

    return result;
}