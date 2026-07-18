/*
 * AUTHOR: BANDAR KHALED SALEH BAWODOOD 
 * DATE: 18/7/2026
 *
 * Subject #9: Char Arrays
 * Problem #5: Convert to number
 * 
 * Description: 
 * Read a string of 6 letters maximum (representing a number), 
 * convert it to an integer (int), then print:
 * 1. The number itself
 * 2. The number multiplied by 3
 *
 * Examples:
 * Input: "100"   => Output: 100 300
 * Input: "0200"  => Output: 200 600
 */

#include <iostream>
#include <string.h>

using namespace std;

int main(void)
{
    char string1[6] = {" "};
    int num = 0, mult = 1;

    cin >> string1;

    for (int i = 0; i < strlen(string1) - 1; i++)
        mult *= 10;

    for (int i = 0; i < strlen(string1); i++, mult /= 10)
    {
        cout << int(string1[i]) - 48; 
        num += (int(string1[i]) - 48) * mult;
    }

    cout << " " << num * 3;

    return 0;
}

 