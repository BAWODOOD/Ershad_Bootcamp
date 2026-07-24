/*
    AUTHOR: BANDAR KHALED SALEH BAWODOOD 
    DATE: 6/7/2026
    TITLE: Unique Numbers of ordered list 
*/

#include <iostream>

using namespace std;

int main(void)
{
    int num = 0, size = 0;
    cin >> size;

    int N[size] {0};

    for (int i = 0; i < size; i++)
    {
        cin >> N[i];
    }

    for (int i = 0; i < size; i++)
    {
        if (N[i] != num)
        {
            cout << N[i] << " ";
            num = N[i];
        }
    }

    return 0;
}

