/*
 * AUTHOR: BANDAR KHALED SALEH BAWODOOD 
 * DATE: 20/7/2026
 *
 * Subject #12: Recursive Functions 
 * Problem 6: Array Increment
 * 
 * Description: 
 * Implement the following function:
 * void array_increment(int arr[], int len);
 * 
 * Requirements:
 * - The function increments each arr[i] with i
 * - E.g. for input
 *     - [1, 2, 5, 9] it be [1+0, 2+1, 5+2, 9+3]
 *     - 1 8 2 10 3 => 1 9 4 13 7
 */

#include <iostream>

using namespace std;

void array_increment(int arr[], int len)
{
    if (len == 0)
    {
        return;
    } 

    arr[len - 1] += len - 1;

    array_increment(arr, len - 1);
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
    array_increment(arr1, 5);
    cout << "Test 1 (Homework): ";
    print_array(arr1, 5);          
    cout << "(Expected: 1 9 4 13 7)\n";

    // Test 2: Sequential Numbers
    int arr2[] = {1, 2, 3, 4};
    array_increment(arr2, 4);
    cout << "Test 2 (1 to 4):   ";
    print_array(arr2, 4);
    cout << "(Expected: 1 3 5 7)\n";

    // Test 3: Identical Numbers
    int arr3[] = {7, 7, 7};
    array_increment(arr3, 3);
    cout << "Test 3 (All 7s):   ";
    print_array(arr3, 3);
    cout << "(Expected: 7 8 9)\n";

    // Test 4: Single Element (Boundary Case)
    int arr4[] = {42};
    array_increment(arr4, 1);
    cout << "Test 4 (Single):   ";
    print_array(arr4, 1);
    cout << "(Expected: 42)\n";

    return 0;
}
