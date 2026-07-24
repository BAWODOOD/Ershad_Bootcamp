/*
    AUTHOR: BANDAR KHALED SALEH BAWODOOD 
    DATE: 30/6/2026
    TITLE: Find maximum up to 10
*/

#include <iostream>

using namespace std;

int main(void)
{
    int N = 0, num1 = 0, num2 = 0;
    cin >> N;

    cin >> num2;
    if (num1 < num2) num1 = num2; 

    cin >> num2;
    if (num1 < num2) num1 = num2; 

    if (N >= 3)
    {
        cin >> num2;
        if (num1 < num2) num1 = num2; 
    }
    
    if (N >= 4)
    {
        cin >> num2;
        if (num1 < num2) num1 = num2; 
    }

    if (N >= 5)
    {
        cin >> num2;
        if (num1 < num2) num1 = num2; 
    }

    if (N >= 6)
    {
        cin >> num2;
        if (num1 < num2) num1 = num2; 
    }

    if (N >= 7)
    {
        cin >> num2;
        if (num1 < num2) num1 = num2; 
    }
    
    if (N >= 8)
    {
        cin >> num2;
        if (num1 < num2) num1 = num2; 
    }

    if (N >= 9)
    {
        cin >> num2;
        if (num1 < num2) num1 = num2; 
    }

    if (N >= 10)
    {
        cin >> num2;
        if (num1 < num2) num1 = num2; 
    }

    cout << "Maximum: " << num1 << endl;

    return 0;
}