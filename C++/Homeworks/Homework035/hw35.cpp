/*
    AUTHOR: BANDAR KHALED SALEH BAWODOOD 
    DATE: 30/6/2026
    TITLE: Two Intersection Intervals
*/

#include <iostream>

using namespace std;

int main(void)
{
    int num1 = 0, num2 = 0, num3 = 0, num4 = 0;
    cin >> num1 >> num2 >> num3 >> num4;

    if (num3 < num2)
    {
        if (num2 > num4)
        {
            cout << num3 << " " << num4;
        }
        else 
        {
            cout << num3 << " " << num2;
        }
    }
    else cout << -1 << endl;
    
    return 0;
}