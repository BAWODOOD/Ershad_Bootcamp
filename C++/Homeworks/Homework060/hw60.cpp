/*
    AUTHOR: BANDAR KHALED SALEH BAWODOOD 
    DATE: 6/7/2026
    TITLE: Unique Numbers of unordered list 
*/

#include <iostream>

using namespace std;

int main(void)
{
    int num = 0, size = 0, appears = 0;
    int nums[501] {-1};
    int nums_index[501] {0};

    cout << "Number of integers: ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> num;

        if (nums[num] != 1)
        {
            nums[num] = 1;
            nums_index[appears] = num; 
            appears++;
        }
    }

    for (int i = 0; i < appears; i++)
    {
        cout << nums_index[i] << " ";
    }

    return 0;
}

 