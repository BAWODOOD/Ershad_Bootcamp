/*
 * AUTHOR: BANDAR KHALED SALEH BAWODOOD 
 * DATE: 20/7/2026
 *
 * Subject #12: Recursive Functions 
 * Problem 12: Is Palindrome
 * 
 * Description: 
 * Implement a function that decides if array is palindrome or not
 * Define its signature
 */

#include <iostream>

using namespace std;


bool is_palindrome(int arr[], int len)
{
    if (len <= 1)
    {
        return true;
    }
    
    if (arr[0] != arr[len - 1])
    {
        return false;
    }

    return is_palindrome(arr + 1, len - 2);
}

void print_array(int arr[], int len)
{
    cout << "[ ";
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "]";
}

int main(void)
{
   cout << boolalpha; 

    // Test 1: Odd-length Palindrome
    int arr1[] = {1, 2, 3, 2, 1};
    cout << "Test 1 ";
    print_array(arr1, 5);
    cout << " : " << is_palindrome(arr1, 5) << " (Expected: true)\n";

    // Test 2: Even-length Palindrome
    int arr2[] = {1, 2, 2, 1};
    cout << "Test 2 ";
    print_array(arr2, 4);
    cout << "    : " << is_palindrome(arr2, 4) << " (Expected: true)\n";

    // Test 3: Not a Palindrome
    int arr3[] = {1, 2, 3, 4, 5};
    cout << "Test 3 ";
    print_array(arr3, 5);
    cout << " : " << is_palindrome(arr3, 5) << " (Expected: false)\n";

    // Test 4: Single Element (Base Case)
    int arr4[] = {42};
    cout << "Test 4 ";
    print_array(arr4, 1);
    cout << "          : " << is_palindrome(arr4, 1) << " (Expected: true)\n";

    // Test 5: Close but no cigar
    int arr5[] = {1, 2, 3, 1};
    cout << "Test 5 ";
    print_array(arr5, 4);
    cout << "    : " << is_palindrome(arr5, 4) << " (Expected: false)\n";

    return 0;
}
