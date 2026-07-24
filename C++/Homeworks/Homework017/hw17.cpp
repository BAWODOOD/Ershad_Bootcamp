/*
    AUTHOR: BANDAR KHALED SALEH BAWODOOD 
    DATE: 28/6/2026
    TITLE: Guess the output
*/

#include <iostream>

using namespace std;

int main(void)
{
    int a = 10, b = 20, c = 30, d = 40;

    cout << (a + b == c) << "\n";                                   //True 1
    cout << (a + b + c == 2 * d) << "\n";                           //False 0

    cout << (a > 5 || d < 30) << "\n";                              //True 1
    cout << (a > 5 && d < 30) << "\n";                              //False 0
    cout << (a <= b && b <= c) << "\n";                             //True 1

    cout << (a > 5 && d < 30 || c - b == 10) << "\n";               //True 1
    cout << (a <= b && b <= c && c <= d) << "\n";                   //True 1

    cout << (a > 5 && d < 30 || c > d || d % 2 == 0) << "\n";       //True 1
    cout << (a > 5 && d < 30 || c > d && d % 2 == 0) << "\n";       //False 0

    cout << (a == 10 || b != 20 && c != 30 || d != 40) << "\n";     //True 1
    cout << ((a == 10 || b != 20) && c != 30 || d != 40) << "\n";   //False 0

    return 0;
}

