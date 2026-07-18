/*
 * AUTHOR: BANDAR KHALED SALEH BAWODOOD 
 * DATE: 18/7/2026
 * TITLE: Grouping
 *
 * Subject #9: Char Arrays
 * Problem #6: Grouping
 * 
 * Description: 
 * Read a string, then divide it into consecutive groups of the same 
 * letter (or character). Print each group.
 *
 * Examples:
 * Input: "111222aabbb"  => Output: 111 222 aa bbb
 * Input: "HHHH"         => Output: HHHH
 */

#include <iostream>
#include <string.h>

using namespace std;

int main(void)
{
    char string1[15] = {" "};

    cin >> string1;

    for (int i = 0; i <= strlen(string1) - 1; i++)
    {
        if (string1[i] == string1[i + 1])
        {
            cout << string1[i];
        } 
        else 
        {
            cout << string1[i] << " ";
        }
    }

    return 0;
}

 