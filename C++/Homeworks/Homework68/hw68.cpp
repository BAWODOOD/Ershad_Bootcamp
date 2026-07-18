/*
 * AUTHOR: BANDAR KHALED SALEH BAWODOOD 
 * DATE: 18/7/2026
 *
 * Subject #9: Char Arrays
 * Problem #2: Is Suffix?
 * 
 * Description: 
 * Read 2 strings, 'input' and 'str'. Print "YES" if the given 'str' 
 * is a suffix of the 'input' string. Otherwise, print "NO".
 * 
 * Note: A suffix must match the exact sequence of characters 
 * at the very end of the original string.
 *
 * Examples:
 * Input: ABCDEFG EFG   => Output: YES
 * Input: ABCDEFG ABCD  => Output: NO
 * Input: ABCDEFG BCD   => Output: NO
 */

#include <iostream>
#include <string.h>

using namespace std;

int main(void)
{
    char string1[15] = {" "}, string2[15] = {" "};

    cin >> string1 >> string2;

    for (int i = strlen(string1) - 1,  j = strlen(string2) - 1; j >= 0; i--, j--)
    {
        if (string1[i] != string2[j])
        {
            cout << "No\n";
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}

 