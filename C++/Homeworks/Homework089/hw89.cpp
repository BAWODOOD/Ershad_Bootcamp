/*
 * AUTHOR: BANDAR KHALED SALEH BAWODOOD 
 * DATE: 19/7/2026
 *
 * Subject #11: Functions 
 * Problem 7: Replace substring
 * 
 * Description: 
 * Implement this function:
 * string replace_str(string input, string pattern, string to)
 *   - Constraints: Input consists only of lower cases, len(pattern) > 0, len(to) >= 0
 *
 * The function replaces every pattern with to and return it
 *   - Input: "aabcabaaad", "aa", "x"      - Return: "xbcabxad"
 *   - Input: "aabcabaaad", "aa", "aaaa"   - Return: "aaaabcabaaaaad"
 *   - Input: "aabcabaaad", "aa", ""       - Return: "bcabad"
 *
 * Requirements:
 * Let your code makes use of another function:
 * bool starts_with(string input, string pattern, int pos);
 *   - Return true if string input has the pattern starting from pos
 *   - Input: "aabcabaaad", "aa", 0 => True
 *   - Input: "aabcabaaad", "aa", 1 => False
 */

#include <iostream>

using namespace std;

bool starts_with(string input, string pattern, int pos)
{
    if (pos + pattern.length() > input.length()) 
    {
        return 1;
    }

    for (int i = 0; i < pattern.length(); i++)
    {
        if (input[pos + i] != pattern[i])
        {
            return 1; 
        }
    }

    return 0; 
}

string replace_str(string input, string pattern, string to)
{
    string replaced;    
    int i = 0;

    while (i < input.length())
    {
        if (starts_with(input, pattern, i) == 0)
        {
            replaced += to;             
            i += pattern.length();      
        }
        else 
        {
            replaced += input[i];       
            i++;                      
        }
    }

    return replaced;
}


int main(void)
{
    string name = "aabcabaaad";

    cout << replace_str(name, "aa", "x") << "\n";      
    cout << replace_str(name, "aa", "aaaa") << "\n";    
    cout << replace_str(name, "aa", "") << "\n";       
    return 0;
}
