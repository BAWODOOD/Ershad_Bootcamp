/*
    AUTHOR: BANDAR KHALED SALEH BAWODOOD 
    DATE: 2/7/2026
    TITLE: Print left angled triangle 
*/

#include <iostream>

using namespace std;

int main(void)
{
    int num1 = 0, cnt = 1, n = 0;

    cin >> num1;

    n = num1;
    
    while (num1 > 0)
    {
        cnt = n - num1 + 1;

        while (cnt != 0)
        {
            cout << "*";
            cnt--;
        }

        cout << "\n";
        num1--;
    }

    return 0;
}