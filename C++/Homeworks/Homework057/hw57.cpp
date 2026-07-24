/*
    AUTHOR: BANDAR KHALED SALEH BAWODOOD 
    DATE: 6/7/2026
    TITLE: Search for a number
*/

#include <iostream>

using namespace std;

int main(void)
{
    int num = 0, size1 = 0, size2 = 0;

    cout << "Number of integers: ";
    cin >> size1;

    int N[size1] {0};
    cout << "Integers: \n";

    for (int i = 0; i < size1; i++)
    {
        cin >> N[i];
    }

    cout << "Number of Queries: ";
    cin >> size2;

    int Q[size2];
    int index[size2];

    cout << "Queries \n";
    for (int i = 0; i < size2; i++)
    {
        cin >> Q[i];
        index[i] = -1;
    }

    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (N[i] == Q[j])
            {
                index[j] = i;
            }
        }
    }

    for (int i = 0; i < size2; i++)
    {
        cout << index[i] << " ";
    }

    return 0;
}

