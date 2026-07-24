/*
 * AUTHOR: BANDAR KHALED SALEH BAWODOOD 
 * DATE: 20/7/2026
 *
 * Subject #12: Recursive Functions 
 * Problem 10: Suffix Sum
 * 
 * Description: 
 * Write a function that sums only the last N elements in an array.
 * Define its signature.
 * 
 * Example:
 * - Input [1, 3, 4, 6, 7], 3 => 17 (4+6+7)
 */

#include <iostream>

using namespace std;


int suffix_sum(int arr[], int len, int n)
{
    if (n == 0)
    {
        return 0;
    } 

    return arr[len - 1] + suffix_sum(arr, len - 1, n - 1);
}

int main(void)
{
   // Test 1: The Homework Example 
    int arr1[] = {1, 3, 4, 6, 7};
    cout << "Test 1 (Homework): " << suffix_sum(arr1, 5, 3) << " (Expected: 17)\n";

    // Test 2: The Second Example (Summing last 2)
    int arr2[] = {1, 8, 2, 10, 3};
    cout << "Test 2 (Last 2):   " << suffix_sum(arr2, 5, 2) << " (Expected: 13)\n";

    // Test 3: Sequential Numbers (Summing last 4)
    int arr3[] = {1, 2, 3, 4, 5, 6};
    cout << "Test 3 (Last 4):   " << suffix_sum(arr3, 6, 4) << " (Expected: 18)\n";

    // Test 4: Identical Numbers (Summing all 3)
    int arr4[] = {7, 7, 7};
    cout << "Test 4 (All 3):    " << suffix_sum(arr4, 3, 3) << " (Expected: 21)\n";

    // Test 5: Single Element (Boundary Case)
    int arr5[] = {42};
    cout << "Test 5 (Single):   " << suffix_sum(arr5, 1, 1) << " (Expected: 42)\n";
    return 0;
}
