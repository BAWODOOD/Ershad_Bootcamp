/*
    AUTHOR: BANDAR KHALED SALEH BAWODOOD 
    DATE: 2/7/2026
    TITLE: Special Multiples 1 
*/

#include <iostream>

using namespace std;

int main(void)
{
    int num1 = 0, num = 0;

    cin >> num1;
    
    num = num1;
    num1 = 0;
    
    while (num1 <= num)
    {
       if (num1 % 8 == 0) cout << num1 << " ";
       else if ((num1 % 3 == 0) && (num1 % 4) == 0) cout << num1 << " ";

       num1++;
    }

    return 0;
}