/*
    AUTHOR: BANDAR KHALED SALEH BAWODOOD 
    DATE: 4/7/2026
    TITLE: Reverse and Multiply
*/

#include <iostream>

using namespace std;

int main(void)
{
    int N = 0, NumOfDigit = 0;

    cin >> N;

    int temp =  N;
    int reversed_N = 0;

    while (temp != 0)
    {
       int digit = temp % 10;

       reversed_N = (reversed_N * 10) + digit;

       temp /= 10;
    }

    cout << "Reversed: " << reversed_N << endl;
    cout << "Reversed * 3: " << 3 * reversed_N << endl;

    return 0;
}