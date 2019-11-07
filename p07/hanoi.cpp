#include <iostream>
using namespace std;

void hanoi(int n, int A, int B, int C)
{
    if (n > 0)
    {
        hanoi(n - 1, A, C, B);
        cout << "Pindahkan cakram " << n << " dari menara " << A << " ke menara " << C << endl;
        hanoi(n - 1, B, A, C);
    }
}

int main()
{
    int cakram;

    cout << "Berapa jumlah cakram? ";
    cin >> cakram;

    hanoi(cakram, 1, 2, 3);

    return 0;
}