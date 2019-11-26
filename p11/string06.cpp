#include <iostream>
#include <string>
using namespace std;

int main()
{
    string fullName;
    cout << "Type your full name: ";
    
    // input string dalam satu baris, termasuk spasi
    getline(cin, fullName);
    cout << "Your name is: " << fullName;
 
    return 0;
}