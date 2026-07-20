/*
 * AUTHOR: BANDAR KHALED SALEH BAWODOOD 
 * DATE: 20/7/2026
 *
 * Subject #12: Recursive Functions 
 * Problem 3: Array maximum
 * 
 * Description: 
 * Implement the following function:
 * int arr_max(int arr[], int len);
 * 
 * Requirements:
 * - Write a function that computes array maximum
 * - Example: Input 1, 8, 2, 10, 3 => 10
 */

#include <iostream>

using namespace std;

int arr_max(int arr[], int len)
{
    if (len == 1)
    {
        return arr[0]; 
    }

    int max = arr_max(arr, len - 1);


    if (arr[len - 1] > max)
    {
        return arr[len - 1];
    }
    else 
    {
        return max;
    }
}

int main(void)
{
    int arr[10] = {1, 2, 3, 4, 50, 6, 7, 8, 51, 11};

    cout << arr_max(arr, 10) << endl;

    return 0;
}
