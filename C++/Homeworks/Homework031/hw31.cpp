/*
    AUTHOR: BANDAR KHALED SALEH BAWODOOD 
    DATE: 29/6/2026
    TITLE: Conditional Count
*/

#include <iostream>

using namespace std;

int main(void)
{
    int num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0, x = 0, less = 0;
    cin >> x >> num1 >> num2 >> num3 >> num4 >> num5;
    

    if (x <= num1) less++;
    if (x <= num2) less++;
    if (x <= num3) less++;
    if (x <= num4) less++;
    if (x <= num5) less++;

    cout << (less != 5) * (5 - less) << " " << less << endl;

    return 0;
}