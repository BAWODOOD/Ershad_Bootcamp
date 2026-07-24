/*
    AUTHOR: BANDAR KHALED SALEH BAWODOOD 
    DATE: 6/7/2026
    TITLE: Smallest pair 
*/

#include <iostream>

using namespace std;

int main(void)
{
    int num = 0, size = 0, smallest = INT_MAX;

    cin >> size;

    int A[size] {0};

    for (int i = 0; i < size; i++)  
        cin >> A[i];

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            num = A[i] + A[j] + j - i;

            if (smallest > num)
                smallest = num;
        }
    }

    cout << smallest << endl;
    
  
    return 0;
}

