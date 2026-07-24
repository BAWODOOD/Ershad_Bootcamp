/*
    AUTHOR: BANDAR KHALED SALEH BAWODOOD 
    DATE: 29/6/2026
    TITLE: Maximum but constrained
*/

#include <iostream>

using namespace std;

int main(void)
{
     int num1 = 0, num2 = 0, num3 = 0;
     cin >> num1 >> num2 >> num3;

     if (num2 >= 100) num2 = 0;
     if (num3 >= 100) num3 = 0;

     if (num1 < 100 && num1 > num2)
     {
          if (num2 > num3)
          {
            cout << num1 << endl;
          }
          else if (num2 < num3)
          {
               cout << num3 << endl;
          }
     }
     else if (num2 > num3)
     {
          cout << num2 << endl;
     }
     else if (num3 != 0)
     {
          cout << num3 << endl;
     }
     else 
     {
          cout << -1 << endl;
     }

     return 0;
}