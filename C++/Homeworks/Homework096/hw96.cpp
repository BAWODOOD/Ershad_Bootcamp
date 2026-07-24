/*
 * AUTHOR: BANDAR KHALED SALEH BAWODOOD 
 * DATE: 20/7/2026
 *
 * Subject #12: Recursive Functions 
 * Problem 7: Array Accumulation
 * 
 * Description: 
 * Given an array we want to accumulate it as following:
 *   - Input 1 2 3 4 5 6
 *   - Output array
 *       - 1, 1+2, 1+2+3, 1+2+3+4, 1+2+3+4+5, 1+2+3+4+5+6
 *       - 1, 3, 6, 10, 15, 21
 *   - That is return arr[i] = sum of all numbers from 0 to i
 * 
 * Implement the following function:
 * void accumulate_arr(int arr[], int len);
 *   - Input 1 8 2 10 3 => 1 9 11 21 24
 */

#include <iostream>

using namespace std;

void accumulate_arr(int arr[], int len)
{
    if (len <= 1)
    {
        return;
    } 

    accumulate_arr(arr, len - 1);

    arr[len - 1] += arr[len - 2];
}

void print_array(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
}

int main(void)
{
   // Test 1: The Homework Example 
    int arr1[] = {1, 8, 2, 10, 3};
    accumulate_arr(arr1, 5);
    cout << "Test 1 (Homework): ";
    print_array(arr1, 5);          
    cout << "\n(Expected: 1 9 11 21 24)\n\n";

    // Test 2: Sequential Numbers
    int arr2[] = {1, 2, 3, 4, 5, 6};
    accumulate_arr(arr2, 6);
    cout << "Test 2 (1 to 6):   ";
    print_array(arr2, 6);
    cout << "\n(Expected: 1 3 6 10 15 21)\n\n";

    // Test 3: Identical Numbers
    int arr3[] = {7, 7, 7};
    accumulate_arr(arr3, 3);
    cout << "Test 3 (All 7s):   ";
    print_array(arr3, 3);
    cout << "\n(Expected: 7 14 21)\n\n";

    // Test 4: Single Element (Boundary Case)
    int arr4[] = {42};
    accumulate_arr(arr4, 1);
    cout << "Test 4 (Single):   ";
    print_array(arr4, 1);
    cout << "\n(Expected: 42)\n";

    return 0;
}
