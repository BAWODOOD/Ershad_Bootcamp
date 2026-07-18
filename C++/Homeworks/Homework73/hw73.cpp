/*
 * AUTHOR: BANDAR KHALED SALEH BAWODOOD 
 * DATE: 18/7/2026
 *
 * Subject #9: Char Arrays
 * Problem #6: Compressing
 * 
 * Description: 
 * Read a string of letters and then compress each consecutive group 
 * of the same letter. The compression format should be the letter 
 * followed by its count (e.g., if the sub-string is "cccc", it 
 * becomes "c4"). Use an underscore ('_') between each group.
 *
 * Examples:
 * Input: ccccDDDxxe     => Output: c4_D3_x2_e1
 * Input: xxxxxxxx       => Output: x8
 */

#include <iostream>
#include <string.h>

using namespace std;

int main(void)
{
    char string1[15] = {" "};

    cin >> string1;

    for (int i = 0, count = 0; i <= strlen(string1) - 1; i++)
    {
        if (string1[i] == string1[i + 1])
        {
            count++;
        } 
        else 
        {
            cout << string1[i] << count + 1;
            i == strlen(string1) - 1 ? cout << "" : cout << "_";
            count = 0;
        }
    }

    return 0;
}

 