/*
 * AUTHOR: BANDAR KHALED SALEH BAWODOOD 
 * DATE: 18/7/2026
 *
 * Subject #9: Char Arrays
 * Problem #7: Compare strings
 * 
 * Description: 
 * Read 2 strings, then output "YES" if the first string is smaller 
 * than or equal to the second string (lexicographically). 
 * Otherwise, output "NO".
 *
 * Constraint:
 * Don't use the '<' operator to compare strings. Use loops.
 *
 * Examples:
 * Input: aaa aaa             => Output: YES
 * Input: aaaaa aa            => Output: NO
 * Input: abc d               => Output: YES
 * Input: dddddddddddddd xyz  => Output: YES
 * Input: azzzzzzzz za        => Output: YES
 * Input: za azzzzzzzz        => Output: NO
 */

#include <iostream>
#include <string.h>

using namespace std;

int main(void)
{
    char string1[15] = {" "}, string2[15] = {" "};

    cin >> string1 >> string2;

    for (int i = 0, count = 0; i <= strlen(string1) - 1; i++)
    {
        if (strlen(string1) != strlen(string2))
        {
            if (strlen(string1) > strlen(string2))
            {
                (string1[i] >= string2[i]) ? cout << "No" << endl : cout << "Yes" << endl;
                return 0;
            }
            else 
            {
                (string1[i] <= string2[i]) ? cout << "Yes" << endl : cout << "No" << endl;
                return 0;
            } 
        }
        else
        {
            if (string1[i] < string2[i])
            {
                cout << "No" << endl;
                return 0;
            } 
        }  
    }

    cout << "Yes";

    return 0;
}

 