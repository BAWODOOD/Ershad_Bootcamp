/*
    AUTHOR: BANDAR KHALED SALEH BAWODOOD 
    DATE: 23/6/2026
    TITLE: MATH OPERATIONS
*/

#include <iostream>

using namespace std;

int main(void)
{
    double num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Addition: " << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    cout << "Subrtaction: " << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    cout << "Multiplication: " << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    cout << "Division: " << num1 << " / " << num2 << " = " << num1 / num2 << endl;

    return 0;
}