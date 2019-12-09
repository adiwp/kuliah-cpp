#include <iostream>
#include <ctype.h>
using namespace std;

int main() {
    int i;
    char *namaKu, NM[6] = {'C', 'A', 'N', 'D', 'R', 'A'};

    cout << "Namaku : " << endl;

    for (i = 0; i < 6; i++) {
        namaKu = &NM[i];
        cout << " " << *namaKu << endl;
    }

    return 0;
}