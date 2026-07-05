/*
    AUTHOR: BANDAR KHALED SALEH BAWODOOD 
    DATE: 6/7/2026
    TITLE: Find the 3 mimimum values 
*/

#include <iostream>

using namespace std;

int main(void)
{
    int num = 0, size = 0;

    cin >> size;

    if (size < 3)
    {
        cout << "minumum allowable numbers is 3";
        return -1;
    }

    int A[size] {0};
    
    int min1 = INT_MAX;
    int min2 = INT_MAX;
    int min3 = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        cin >> A[i];

        if (A[i] < min1)
        {
            min3 = min2;
            min2 = min1;
            min1 = A[i];
        }
        else if (A[i] < min2 && A[i] != min1)
        {
            min3 = min2;
            min2 = A[i];
        }
        else if (A[i] < min3 && A[i] != min1 && A[i] != min2)
        {
            min3 = A[i];
        }
    }

    cout << min1 << " " << min2 << " " << min3 << endl;

    return 0;
}

