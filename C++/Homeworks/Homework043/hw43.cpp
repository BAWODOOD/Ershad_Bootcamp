/*
    AUTHOR: BANDAR KHALED SALEH BAWODOOD 
    DATE: 2/7/2026
    TITLE: Special Multiples 2
*/

#include <iostream>

using namespace std;

int main(void)
{
    int N = 0, num = 1, m = 0, cnt = 0;

    cin >> N;
    
    while (N != cnt)
    {
       m = 3 * num;
       if (num % 4 != 0)
       {
        cout << m << " ";
        cnt++;
       }

       num++;
    }

    return 0;
}