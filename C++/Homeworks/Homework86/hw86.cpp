/*
 * AUTHOR: BANDAR KHALED SALEH BAWODOOD 
 * DATE: 19/7/2026
 *
 * Subject #11: Functions 
 * Problem 4: Is Palindrome Array
 * 
 * Description: 
 * Read N, then N integers for an Array. Call a function with the array to check if
 * the array is palindrome or note
 *
 * Notes:
 * - We already coded it before
 * - Just copy code and rearrange to call function with array
 */

#include <iostream>

using namespace std;

bool IsPalindromeChecker(int array[], int size)
{
    bool IsPalindrome = true;
     for (int i = 0; i < (size / 2); i++)
    {
        if (array[i] != array[size - 1 - i])
        {
            IsPalindrome = false;
        }
    }

    return IsPalindrome;
}

int main(void)
{
     int num = 0, size = 0;
    bool IsPalindrome = true;

    cin >> size;

    int N[size] {0};

    for (int i = 0; i < size; i++)
    {
        cin >> N[i];
    }

    (IsPalindromeChecker(N, size)) ? cout << "Is Palindrome" << endl : cout << "Is not Palindrome" << endl;
    
    return 0;
}
