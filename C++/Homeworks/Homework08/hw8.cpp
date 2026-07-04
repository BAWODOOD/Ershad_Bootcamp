/*
    AUTHOR: BANDAR KHALED SALEH BAWODOOD 
    DATE: 23/6/2026
    TITLE: Even and Odd sum
*/

#include <iostream>

using namespace std;

int main(void)
{
    int nums[8] = {0};

    cin >> nums[0] >> nums[1] >> nums[2] >> nums[3] >> nums[4] >> nums[5] >> nums[6] >> nums[7];

    cout << (nums[1] + nums[3] + nums[5] + nums[7]) << " " << (nums[0] + nums[2] + nums[4] + nums[6]) << endl;

    return 0;
}