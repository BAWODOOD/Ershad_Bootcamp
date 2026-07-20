/*
 * AUTHOR: BANDAR KHALED SALEH BAWODOOD 
 * DATE: 20/7/2026
 *
 * Subject #12: Recursive Functions 
 * Problem 4: Array sum
 * 
 * Description: 
 * Implement the following function:
 * int sum(int arr[], int len);
 * 
 * Requirements:
 * - Write a function that computes array sum
 * - Example: Input 1, 8, 2, 10, 3 => 24
 */

#include <iostream>

using namespace std;

int sum(int arr[], int len)
{
    if (len == 0) 
    {
        return 0;
    }

    return arr[len - 1] + sum(arr, len - 1);
}

int main(void)
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << sum(arr, 10) << endl;

    int arr2[5] = {1, 8, 2, 10, 3};
    cout << sum(arr2, 5) << endl; 

    return 0;
}
