/*
 * AUTHOR: BANDAR KHALED SALEH BAWODOOD 
 * DATE: 18/7/2026
 *
 * Subject #9: Char Arrays
 * Problem #8: Add 5555
 * 
 * Description: 
 * Read a very long string of digits (at least 6 digits), and add 
 * 5555 to it.
 *
 * Constraint:
 * Don't convert the string to an integer, as standard integer types 
 * have a maximum limit for values that this string might exceed.
 *
 * Examples:
 * Input: "100000"                               => Output: "105555"
 * Input: "10001234"                             => Output: "10006789"
 * Input: "3001072"                              => Output: "3006627"
 * Input: "10999999999"                          => Output: "11000005554"
 * Input: "999999999999999999999999999999999"    => Output: "100000000000000000000000000005554"
 */

#include <iostream>
#include <string.h>

using namespace std;

int main(void)
{
    char string1[100] = {" "};

    cin >> string1;
    int carry = 0;
    for (int i = strlen(string1) - 1, j = 0; i >= 0; i--, j++)
    {
        int temp = string1[i] - 48;     //0 up to 9

        int add = (j <= 3) ? 5 : 0;

        int sum = add + temp + carry;

        string1[i] = (sum % 10) + '0';
        carry = sum / 10;
    }
    
    if (carry > 0) 
    {
        cout << carry;
    }
    
    cout << string1;

    return 0;
}

 