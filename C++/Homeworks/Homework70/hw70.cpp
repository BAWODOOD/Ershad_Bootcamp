/*
 * AUTHOR: BANDAR KHALED SALEH BAWODOOD 
 * DATE: 18/7/2026
 *
 * Subject #9: Char Arrays
 * Problem #4: Is Subsequence?
 * 
 * Description: 
 * Read 2 strings, 'input' and 'str'. Print "YES" if 'str' is a 
 * subsequence of the 'input' string. Otherwise, print "NO".
 * 
 * Note: A subsequence maintains the relative order of characters 
 * but does not require them to be contiguous.
 *
 * Examples:
 * Input: ABCDEFG ACEG  => Output: YES
 * Input: ABCDEFG GD    => Output: NO
 */

#include <iostream>
#include <string.h>

using namespace std;

int main(void)
{
    char string1[15] = {" "}, string2[15] = {" "};

    cin >> string1 >> string2;

    int j = 0;
    for (int i = 0; i < strlen(string1) && j < strlen(string2); i++)
    {
        if (string1[i] == string2[j])
        {
            j++;
        }
    }

    if (j == strlen(string2))
    {
         cout << "Yes" << endl;
    }
    else
    {
         cout << "No" << endl;
    }

    return 0;
}

 