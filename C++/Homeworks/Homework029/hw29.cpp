/*
    AUTHOR: BANDAR KHALED SALEH BAWODOOD 
    DATE: 29/6/2026
    TITLE: Sort 3 numbers 
*/

#include <iostream>

using namespace std;

int main(void)
{
    int num1 = 0, num2 = 0, num3 = 0;
    cin >> num1 >> num2 >> num3;
    
    if (num1 >= num2 && num1 >= num3)
    {
        if (num2 >= num3)
        {
             cout << num3 << " " << num2 << " " << num1 << endl;
        }
        else 
        {
             cout << num2 << " " << num3 << " " << num1 << endl;
        }
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        if (num1 >= num3)
        {
             cout << num3 << " " << num1 << " " << num2 << endl;
        }
        else 
        {
             cout << num1 << " " << num3 << " " << num2 << endl;
        }
    }
    else
    {
        if (num1 >= num2)
        {
             cout << num2 << " " << num1 << " " << num3 << endl;
        }
        else  
        {
             cout << num1 << " " << num2 << " " << num3 << endl;
        }
    }
   
    return 0;
}