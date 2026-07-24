/*
    AUTHOR: BANDAR KHALED SALEH BAWODOOD 
    DATE: 29/6/2026
    TITLE: Our Reminder
*/

#include <iostream>

using namespace std;

int main(void)
{
    double num1 = 0, num2 = 0, multiple = 0;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    multiple = int (num1 / num2);

    cout << (num1 - multiple * num2) << "\n";

    return 0;
}