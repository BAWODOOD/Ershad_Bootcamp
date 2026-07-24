/*
    AUTHOR: BANDAR KHALED SALEH BAWODOOD 
    DATE: 6/7/2026
    TITLE: Fixed sliding window
*/

#include <iostream>

using namespace std;

int main(void)
{
    int num = 0, window = 0, max = 0, max_indx = 0;

    cin >> window;
    cin >> num;

    int nums[num] = {0};

    for (int i = 0; i < num; i++)
        cin >> nums[i];

    for (int i = 0; i < num - window + 1; i++)
    {
        int sum = 0;
        for (int j = 0; j < window; j++)
        {
            sum += nums[i + j];
        }

        if (sum > max)
        {
            max = sum;
            max_indx = i;
        }
    }

    for (int i = 0; i < window; i++)
    {
        cout << nums[max_indx + i] << " ";
    }

    cout << "\n";
    
    for (int i = 0; i < window; i++)
    {
        cout << max_indx + i << " ";
    }

    cout << "\n" << max_indx << " " << max_indx + window - 1 << " " << max; 

    return 0;
}

 