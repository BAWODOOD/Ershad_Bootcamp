/*
 * AUTHOR: BANDAR KHALED SALEH BAWODOOD 
 * DATE: 19/7/2026
 *
 * Subject #11: Functions 
 * Problem 5: Set-powers
 * 
 * Description: 
 * Implement this function
 * void set_powers(int arr[], int len = 5, int m = 2)
 *
 * This function will fill the array of len as following:
 *   - The i-th position: m^i, e.g. m * m * m ... i times
 *   - E.g. for len = 6, m = 2 => 1 2 4 8 16 32
 *   - E.g. for len = 4, m = 3 => 1 3 9 27
 *
 * Notes:
 * - After a return from call: print the array
 * - Try it with different default value scenarios
 */

#include <iostream>

using namespace std;

const int length = 6;
const int mul = 2;

void set_powers(int arr[], int len = length, int m = mul)
{
    for (int i = 0; i < len; i++)
    {
        if (i == 0)
        {
            arr[i] = 1;
        }
        else
        {
            arr[i] = arr[i - 1] * m;
        }
    }
}

int main(void)
{
    int array[length] = {1};
    set_powers(array);

    for (int i = 0; i < length; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}
