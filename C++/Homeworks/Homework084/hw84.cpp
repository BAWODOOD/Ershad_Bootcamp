/*
 * AUTHOR: BANDAR KHALED SALEH BAWODOOD 
 * DATE: 19/7/2026
 *
 * Subject #11: Functions 
 * Problem 2: Reverse a string
 * 
 * Description: 
 * Develop a function that do reverse for the string. Function is:
 * string reverse_str(const string & str);
 *
 * Note:
 * Don't try to change str content or you will get compilation error
 */

#include <iostream>

using namespace std;

string reverse_str(const string &str)
{
    string reversed;

    for (int i = str.size() - 1; i >= 0; i--)
    {
        reversed.push_back(str[i]); 
    }

    return reversed;
}

string reverse_str2(const string &str)
{
    return string(str.rbegin(), str.rend());
}

int main(void)
{
    cout << reverse_str("Bandar") << endl;
    cout << reverse_str2("Bandar") << endl;

    return 0;
}
