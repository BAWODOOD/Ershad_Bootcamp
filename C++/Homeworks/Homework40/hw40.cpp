/*
    AUTHOR: BANDAR KHALED SALEH BAWODOOD 
    DATE: 2/7/2026
    TITLE: Special Average 
*/

#include <iostream>

using namespace std;

int main(void)
{
    double  num = 0, even_average = 0, odd_average = 0;
    int N = 0, even = 0, odd = 0;

    cin >> N;
    
    while (N > 0)
    {
        
        cin >> num;

        if (N % 2 == 0)
        {
            even_average+= num;
            even++;
        }
        else 
        {
            odd_average += num;
            odd++;
        }

        N--;
    }

    cout << (even_average / even) << " " << (odd_average / odd) << endl;

    return 0;
}