/*
    AUTHOR: BANDAR KHALED SALEH BAWODOOD 
    DATE: 4/7/2026
    TITLE: Is Prime 
*/

#include <iostream>

using namespace std;

int main(void)
{
    int N = 0;
    bool prime = true;

    cin >> N;

    for (int i = 2; i < N; ++i)
    {
        if (N % i == 0)
        {
            prime  = false;
            break;
        }
    }

    if (prime) cout << "is prime" << endl;
    
    return 0;
}

