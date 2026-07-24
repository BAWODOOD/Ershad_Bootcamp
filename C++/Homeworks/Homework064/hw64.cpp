/*
    AUTHOR: BANDAR KHALED SALEH BAWODOOD 
    DATE: 6/7/2026
    TITLE: Count increasing subarrays
*/

#include <iostream>

using namespace std;

int main(void)
{
    int num = 0;

    cin >> num;

    int nums[num] = {0};
    int counts {0};

    int count = 0;

    int lastval = nums[0];

    for (int i = 0; i < num; i++)
        cin >> nums[i];

    for (int i = 0; i < num; i++)
    {

        if (nums[i] > lastval)
        {
            count++;
        }
        else 
        {
            count = 1;
        }

        counts += count;

        lastval = nums[i];
    }

    cout << counts << endl;

    return 0;
}

 