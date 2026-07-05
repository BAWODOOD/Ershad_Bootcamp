/*
    AUTHOR: BANDAR KHALED SALEH BAWODOOD 
    DATE: 6/7/2026
    TITLE: Replace MinMax?
*/

#include <iostream>

using namespace std;

int main(void)
{
    int min = 0, max = 0, size = 0;
    cin >> size;

    int N[size] {0};

    cin >> N[0];

    max = N[0];
    min = N[0];

    for (int i = 1; i < size; i++)
    {
        cin >> N[i];

        if (N[i] > max)
        {
            max = N[i];
        }

        if (N[i] < min)
        {
            min = N[i];
        }
    }

    for (int i = 0; i < size; i++)
    {
        if (N[i] == max)
        {
            N[i] = min;
        }
        else if (N[i] == min)
        {
            N[i] = max;
        }

        cout << N[i] << " ";
    }

    return 0;
}

