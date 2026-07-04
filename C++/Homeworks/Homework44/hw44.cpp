/*
    AUTHOR: BANDAR KHALED SALEH BAWODOOD 
    DATE: 2/7/2026
    TITLE: Minimum of Values
*/

#include <iostream>

using namespace std;

int main(void)
{
    int N = 0, min = 0, cases = 0, num = 0;

    cin >> cases;
    
    while (cases != 0)
    {
      cin >> N;
      cin >> min;

      while (N - 1 > 0)
      {
        cin >> num;
        if (num < min)
        {
            min = num;
        }
        N--;
      }

      cout << "Minumum value of case " << cases  << ": " << min << "\n";
      cases--;
    }

    return 0;
}