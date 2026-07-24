/*
    AUTHOR: BANDAR KHALED SALEH BAWODOOD 
    DATE: 2/7/2026
    TITLE: Print Diamond  
*/

#include <iostream>

using namespace std;

int main(void)
{
    int N = 0, spaces = 0, stars = 0, cnt = 1, N2 = 0;

    cin >> N;

    N2 = N;

    while (N > 0)
    {
       spaces = N - 1;
       while(spaces >= 0)
       {
            cout << " ";
            spaces--;
       }

       stars = cnt;
       while(stars > 0)
       {
            cout << "*";
            stars--;
       }

        cout << "\n";

        cnt += 2;
        N--;
    }

    N = 1;
    cnt = 2 * N2 - 1;

    while (N <= N2)
    {
       spaces = N - 1;
       while(spaces >= 0)
       {
            cout << " ";
            spaces--;
       }

       stars = cnt;
       while(stars > 0)
       {
            cout << "*";
            stars--;
       }

        cout << "\n";

        cnt -= 2;
        N++;
    }

    return 0;
}