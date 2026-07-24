/*
    AUTHOR: BANDAR KHALED SALEH BAWODOOD 
    DATE: 29/6/2026
    TITLE: Averages 
*/

#include <iostream>

using namespace std;

int main(void)
{
    double num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 5;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Enter the third number: ";
    cin >> num3;

    cout << "Enter the fourth number: ";
    cin >> num4;

    cout << "Enter the fifth number: ";
    cin >> num5;

    cout << "Everage: " << (num1 + num2 + num3 + num4 + num5) / 5 << "\n";
    cout << "Sum of first three over sum of last two: " << (num1 + num2 + num3) / (num4 + num5) << "\n";
    cout << "Everage of first three over average of last two: " << (2.0 / 3.0) * (num1 + num2 + num3) / (num4 + num5) << "\n";

    return 0;
}