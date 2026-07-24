/*
    AUTHOR: BANDAR KHALED SALEH BAWODOOD 
    DATE: 6/7/2026
    TITLE: Sorting numbers
*/

#include <iostream>

using namespace std;

int main(void)
{
    int size = 0;

    cout << "Number of integers: ";
    cin >> size;

    int sort[size];

    for (int i = 0; i < size; i++)
    {
        cin >> sort[i]; 
    }

    for (int i = 0; i < size; i++)
    {
        for(int j = i + 1; j < size; j++)
        {
            if (sort[j] < sort[i])
            {
                int temp = sort[j];
                sort[j] = sort[i];
                sort[i] = temp;
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << sort[i] << " ";
    }

    return 0;
}

 