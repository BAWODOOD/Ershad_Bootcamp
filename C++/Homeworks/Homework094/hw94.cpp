/*
 * AUTHOR: BANDAR KHALED SALEH BAWODOOD 
 * DATE: 20/7/2026
 *
 * Subject #12: Recursive Functions 
 * Problem 5: Array average
 * 
 * Description: 
 * Implement the following function:
 * double average(int arr[], int len);
 * 
 * Requirements:
 * - Write a function that computes array average
 *     - Don't divide by length in the main
 * - Example: Input 1, 8, 2, 10, 3 => 4.8
 */

#include <iostream>

using namespace std;

double average(int arr[], int len)
{
    if (len == 0) 
    {
        return 0.0;
    }

    return (average(arr, len - 1) * (len - 1) + arr[len - 1]) / (double) len;
}

int main(void)
{
    // Test 1: The Homework Example 
    int arr1[] = {1, 8, 2, 10, 3};
    cout << "Test 1 (Homework): " << average(arr1, 5) << " (Expected: 4.8)\n";

    // Test 2: Sequential Numbers
    int arr2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "Test 2 (1 to 10): " << average(arr2, 10) << " (Expected: 5.5)\n";

    // Test 3: Identical Numbers (Ensures the division math stays perfectly balanced)
    int arr3[] = {7, 7, 7, 7, 7};
    cout << "Test 3 (Identicals): " << average(arr3, 5) << " (Expected: 7)\n";

    // Test 4: Negative Numbers
    int arr4[] = {10, -5, 2, -1, 4};
    cout << "Test 4 (Negatives): " << average(arr4, 5) << " (Expected: 2)\n";

    // Test 5: Single Element (Boundary Case)
    int arr5[] = {42};
    cout << "Test 5 (Single): " << average(arr5, 1) << " (Expected: 42)\n";

    // Test 6: Empty Array (Testing your clever len == 0 base case!)
    int arr6[] = {}; 
    cout << "Test 6 (Empty): " << average(arr6, 0) << " (Expected: 0)\n";

    return 0;
}
