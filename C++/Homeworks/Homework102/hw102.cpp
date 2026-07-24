/*
 * AUTHOR: BANDAR KHALED SALEH BAWODOOD 
 * DATE: 20/7/2026
 *
 * Subject #12: Recursive Functions 
 * Problem 13: Is prefix
 * 
 * Signature:
 * bool is_prefix(string main, string prefix, int start_pos = 0)
 * 
 * Examples:
 * - is_prefix("abcdefgh", "abcd") => true
 * - is_prefix("abcdefgh", "") => true
 * - is_prefix("abcdefgh", "abd") => false
 */

#include <iostream>

using namespace std;


bool is_prefix(string main, string prefix, int start_pos = 0)
{
    if (start_pos == prefix.length())
    {
        return true;
    }

    if (start_pos == main.length() || main[start_pos] != prefix[start_pos])
    {
        return false;
    }

    return is_prefix(main,  prefix, start_pos + 1);
}

int main(void)
{
   // Tell cout to print 'true'/'false' instead of '1'/'0'
    cout << boolalpha; 

    // Test 1: Slide Example 1 (Standard Prefix)
    cout << "Test 1: " << is_prefix("abcdefgh", "abcd");
    cout << "\n(Expected: true)\n\n";

    // Test 2: Slide Example 2 (Empty Prefix)
    // An empty string is always a valid prefix!
    cout << "Test 2: " << is_prefix("abcdefgh", "");
    cout << "\n(Expected: true)\n\n";

    // Test 3: Slide Example 3 (Mismatch)
    cout << "Test 3: " << is_prefix("abcdefgh", "abd");
    cout << "\n(Expected: false)\n\n";

    // Test 4: Edge Case (Prefix is longer than Main string)
    cout << "Test 4: " << is_prefix("abc", "abcdef");
    cout << "\n(Expected: false)\n\n";

    // Test 5: Edge Case (Exact Match)
    cout << "Test 5: " << is_prefix("hello", "hello");
    cout << "\n(Expected: true)\n";

    return 0;
}
