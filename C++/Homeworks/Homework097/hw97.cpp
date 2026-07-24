/*
 * AUTHOR: BANDAR KHALED SALEH BAWODOOD 
 * DATE: 20/7/2026
 *
 * Subject #12: Recursive Functions 
 * Problem 8: Left-Max
 * 
 * Description: 
 * Given array, change each element at position i to be the maximum of 
 * numbers from 0 to index i.
 * 
 * Implement the following function:
 * void left_max(int arr[], int len);
 * 
 * Example:
 * - Input 1 3 5 7 4 2 => [1, 3, 5, 7, 7, 7]
 */

#include <iostream>

using namespace std;

void left_max(int arr[], int len)
{
    if (len <= 1)
    {
        return;
    } 

    left_max(arr, len - 1);

    if (arr[len - 2] > arr[len - 1])
    {
        arr[len - 1] = arr[len - 2];
    }
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
    // Test 1: The First Homework Example 
    int arr1[] = {1, 3, 5, 7, 4, 2};
    left_max(arr1, 6);
    cout << "Test 1 (Homework 1): ";
    print_array(arr1, 6);          
    cout << "\n(Expected: 1 3 5 7 7 7)\n\n";

    // Test 2: The Second Example
    int arr2[] = {1, 8, 2, 10, 3};
    left_max(arr2, 5);
    cout << "Test 2 (Homework 2): ";
    print_array(arr2, 5);          
    cout << "\n(Expected: 1 8 8 10 10)\n\n";

    // Test 3: Sequential Numbers
    int arr3[] = {1, 2, 3, 4, 5, 6};
    left_max(arr3, 6);
    cout << "Test 3 (1 to 6):     ";
    print_array(arr3, 6);
    cout << "\n(Expected: 1 2 3 4 5 6)\n\n";

    // Test 4: Identical Numbers
    int arr4[] = {7, 7, 7};
    left_max(arr4, 3);
    cout << "Test 4 (All 7s):     ";
    print_array(arr4, 3);
    cout << "\n(Expected: 7 7 7)\n\n";

    // Test 5: Single Element (Boundary Case)
    int arr5[] = {42};
    left_max(arr5, 1);
    cout << "Test 5 (Single):     ";
    print_array(arr5, 1);
    cout << "\n(Expected: 42)\n";

    return 0;
}
