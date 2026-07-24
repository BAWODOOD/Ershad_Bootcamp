/*
    AUTHOR: BANDAR KHALED SALEH BAWODOOD 
    DATE: 28/6/2026
    TITLE: Guess Program Output 3
*/

#include <iostream>

using namespace std;

int main(void)
{
    int a = 210;

    a /= 2;                 // a = 105
    cout << a << "\n";      // Output 105

    cout << (a /= 3) << "\n";   // Output 35 and a = 35
    cout << (a /= 5) << "\n";   // Output 7 and a = 7
    cout << (a /= 7) << "\n";   // Output 1 and a = 1

    cout << (2 + 3) * (5 - (-3)) / 5 / 8 << "\n";   //Output 1

    a = 10;                     // a = 10
    cout << a++ + 10 << "\n";   // Output 20 and a = 11
    cout << ++a + 10 << "\n";   // Output 22 and a = 12
    cout << a-- + 10 << "\n";   // Output 22 and a = 11
    cout << --a + 10 << "\n";   // Output 20 and a = 10

    int b = 10;                 // b = 10
    cout << a++ + ++b << "\n";  // Output 21 and a = 11

    cout << a << "\n";          // Output 11 
    ++a += 10;                  // a = 12 + 10 = 22
    cout << a << "\n";          // Output 22

    return 0;
}