/*
 * AUTHOR: BANDAR KHALED SALEH BAWODOOD 
 * DATE: 18/7/2026
 *
 * Subject #9: Char Arrays
 * Problem #3: Is Substring?
 * 
 * Description: 
 * Read 2 strings, 'input' and 'str'. Print "YES" if the given 'str' 
 * is a substring of the 'input' string. Otherwise, print "NO".
 * 
 * Note: A substring must be a contiguous sequence of characters 
 * within the original string.
 *
 * Examples:
 * Input: ABCDEFG BCD   => Output: YES
 * Input: ABCDEFG ACEG  => Output: NO
 * Input: ABCDEFG GD    => Output: NO
 */

#include <iostream>
#include <string.h>

using namespace std;

int main(void)
{
    char string1[15] = {" "}, string2[15] = {" "};

    cin >> string1 >> string2;

    for (int i = 0, j = 0; i < strlen(string1) && j < strlen(string2); i++)
    {
        if (string1[i] == string2[j])
        {
            j++;
        }
        else if (string1[i] != string2[j] && j != 0)
        {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}

 