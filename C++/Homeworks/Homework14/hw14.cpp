/*
    AUTHOR: BANDAR KHALED SALEH BAWODOOD 
    DATE: 28/6/2026
    TITLE: Guess Program Output 1
*/

#include <iostream>

using namespace std;

int main(void)
{
    int a = 0, b = 0;               // a = 0 and b = 0

    cout << a++ << "\n";            // Output 0 and a = 1
    cout << ++a << "\n";            // Output 2 and a = 2

    a += 2 * b + 1;                 // a = 2 + (2 * 0) + 1
                                    // a = 3 

    b = ++a * 2;                    // a = 4
                                    // b = 4 * 2 = 8

    cout << a << "\n";              // Outout 4

    b = a;                          // b = 4
    a = 12 + a / 3 / 2 - 2 * 2;     // a = 12 + ((4 / 3) / 2) - (2 * 2) 
                                    // a = 12 + (1 / 2) - (2 * 2)
                                    // a = 12 + 0 - 4 = 8
    cout << a << "\n";              // Output 8

    a = b;                          // a = 4
    a = ((12 + b) / 3 / 2 -2) * 2;  // a = ((((12 + 4) / 3) / 2) - 2) * 2
                                    // a = (((16 / 3) / 2) - 2) * 2
                                    // a = ((5 / 2) - 2) * 2
                                    // a = (2 - 2) * 2
                                    // a = 0
    cout << a << "\n";              // Output a = 0

    return 0;
}




