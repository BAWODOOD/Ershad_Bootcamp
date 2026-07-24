/*
    AUTHOR: BANDAR KHALED SALEH BAWODOOD 
    DATE: 2/7/2026
    TITLE: Print Range 
*/

#include <iostream>

using namespace std;

int main(void)
{
    int num1 = 0, num2 = 0;
    cin >> num1 >> num2;

    while (num1 <= num2)
    {
        cout << num1++ << "\n";
    }

    return 0;
}