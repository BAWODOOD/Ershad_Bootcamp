/*
    AUTHOR: BANDAR KHALED SALEH BAWODOOD 
    DATE: 23/6/2026
    TITLE: Swapping 2 numbers
*/

#include <iostream>

using namespace std;

int main(void)
{
    int num1, num2, num3;

    cin >> num1 >> num2;

    num3 = num2;
    num2 = num1;
    num1 = num3;

    cout << num1 << " " << num2 << endl;

    return 0;
}