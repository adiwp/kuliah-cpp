#include <iostream>
#include <string>
using namespace std;

int main()
{
    string myString = "Hello";
    // mengubah nilai karakter ke-0 di myString
    myString[0] = 'J';
    
    cout << myString;

    return 0;
}
