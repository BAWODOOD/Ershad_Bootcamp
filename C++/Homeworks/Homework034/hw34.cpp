/*
    AUTHOR: BANDAR KHALED SALEH BAWODOOD 
    DATE: 30/6/2026
    TITLE: Intervals
*/

#include <iostream>

using namespace std;

int main(void)
{
    int X = 0, num1 = 0, num2 = 0, interval_count = 0;
    cin >> X;

    cin >> num1 >> num2;
    if (X >= num1 && X <= num2) interval_count++;

    cin >> num1 >> num2;
    if (X >= num1 && X <= num2) interval_count++;

    cin >> num1 >> num2;
    if (X >= num1 && X <= num2) interval_count++;

    cout << interval_count << endl;
    
    return 0;
}