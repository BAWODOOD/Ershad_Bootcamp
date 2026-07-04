/*
    AUTHOR: BANDAR KHALED SALEH BAWODOOD 
    DATE: 2/7/2026
    TITLE: Line of Characters
*/

#include <iostream>

using namespace std;

int main(void)
{
    int num1 = 0;
    char cr = '0';

    cin >> num1 >> cr;

    while (num1)
    {
        cout << cr;
        num1--;
    }

    return 0;
}