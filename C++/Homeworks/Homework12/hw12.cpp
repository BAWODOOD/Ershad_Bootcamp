/*
    AUTHOR: BANDAR KHALED SALEH BAWODOOD 
    DATE: 23/6/2026
    TITLE: Print Me
*/

#include <iostream>

using namespace std;

int main(void)
{
    int num1, num2;

    cin >> num1 >> num2;

    cout << ( (2 * num1 + 1) * ( (1 - num2) / 2 ) + (num1 * num1) * ( (num2 + 1) / 2) ) << endl;

    return 0;
}