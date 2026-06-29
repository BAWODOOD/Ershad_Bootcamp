/*
    AUTHOR: BANDAR KHALED SALEH BAWODOOD 
    DATE: 29/6/2026
    TITLE: Arithmetic 
*/

#include <iostream>

using namespace std;

int main(void)
{
    int num1 = 0, num2 = 0;
    cin >> num1 >> num2;
    
    bool is1_even = num1 % 2 == 0;
    bool is2_even = num2 % 2 == 0;

    if (!is1_even && !is2_even)
    {
        cout << num1 * num2 << endl;
    }
    else if (is1_even && is2_even)
    {
        cout << double (num1 / num2) << endl;
    }
    else if (!is1_even && is2_even)
    {
        cout << num1 + num2 << endl;
    }
    else 
    {
        cout << num1 - num2 << endl;
    }

    return 0;
}