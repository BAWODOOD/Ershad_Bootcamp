/*
 * AUTHOR: BANDAR KHALED SALEH BAWODOOD 
 * DATE: 20/7/2026
 *
 * Subject #12: Recursive Functions 
 * Problem 11: Prefix Sum
 * 
 * Description: 
 * Write a function that sums only the first N elements in an array.
 * Define its signature.
 * 
 * Example:
 * - Input [1, 3, 4, 6, 7], 3 => 8 (1+3+4)
 */

#include <iostream>

using namespace std;


int prefix_sum(int arr[], int len, int n)
{
    if (n > len)   n = len;

    if (n == 0)
    {
        return 0;
    } 

    return arr[n - 1] + prefix_sum(arr, len - 1, n - 1);
}

int main(void)
{
    // Test 1: The Homework Example 
    int arr1[] = {1, 3, 4, 6, 7};
    cout << "Test 1 (Homework): " << prefix_sum(arr1, 5, 3) << " (Expected: 8)\n";

    // Test 2: The Second Example (Summing first 2)
    int arr2[] = {1, 8, 2, 10, 3};
    cout << "Test 2 (First 2):  " << prefix_sum(arr2, 5, 2) << " (Expected: 9)\n";

    // Test 3: Sequential Numbers (Summing first 4)
    int arr3[] = {1, 2, 3, 4, 5, 6};
    cout << "Test 3 (First 4):  " << prefix_sum(arr3, 6, 4) << " (Expected: 10)\n";

    // Test 4: Identical Numbers (Summing all 3)
    int arr4[] = {7, 7, 7};
    cout << "Test 4 (All 3):    " << prefix_sum(arr4, 3, 3) << " (Expected: 21)\n";

    // Test 5: Single Element (Boundary Case)
    int arr5[] = {42};
    cout << "Test 5 (Single):   " << prefix_sum(arr5, 1, 1) << " (Expected: 42)\n";

    return 0;
}
