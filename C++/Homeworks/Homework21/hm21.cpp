/*
    AUTHOR: BANDAR KHALED SALEH BAWODOOD 
    DATE: 29/6/2026
    TITLE: Fractional Part
*/

#include <iostream>

using namespace std;

int main(void)
{
    double num1 = 0, num2 = 0;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << (num1 / num2) - (int)(num1 / num2) << "\n";

    return 0;
}