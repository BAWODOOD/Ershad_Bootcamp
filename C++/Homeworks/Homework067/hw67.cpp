/*
 * AUTHOR: BANDAR KHALED SALEH BAWODOOD 
 * DATE: 18/7/2026
 *
 * Subject #9: Char Arrays
 * Problem #1: Is Prefix?
 * 
 * Description: 
 * Read 2 strings, 'input' and 'str'. Print "YES" if the given 'str' 
 * is a prefix of the 'input' string. Otherwise, print "NO".
 * 
 * Note: A prefix must match the exact sequence of characters 
 * at the very beginning of the original string.
 *
 * Examples:
 * Input: ABCDEFG ABCD  => Output: YES
 * Input: ABCDEFG EFG   => Output: NO
 * Input: ABCDEFG BCD   => Output: NO
 */

#include <iostream>
#include <string.h>

using namespace std;

int main(void)
{
    char string1[15] = {" "}, string2[15] = {" "};

    cin >> string1 >> string2;

    for (int i = 0; i < strlen(string2); i++)
    {
        if (string1[i] != string2[i])
        {
            cout << "No\n";
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}

 