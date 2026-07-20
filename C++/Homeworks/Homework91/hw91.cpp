/*
 * AUTHOR: BANDAR KHALED SALEH BAWODOOD 
 * DATE: 20/7/2026
 *
 * Subject #12: Recursive Functions 
 * Problem 2: Power function
 * 
 * Description: 
 * Implement the following function:
 * int my_pow(int value, int p = 2)
 *   - Return value * value ..... * value p times
 *   - E.g. my_pow(7, 3) = 7 * 7 * 7 = 343
 *
 * Note:
 * - If p = 0, answer is 1
 */

#include <iostream>

using namespace std;

int my_pow(int value, int p = 2)
{
    if (p == 0)
    {
        return 1;
    }

    return value * my_pow(value, p - 1);
}

int main(void)
{
    cout << "2 power of 2: " << my_pow(2) << endl;
    cout << "2 power of 3: " << my_pow(2,3) << endl;
    cout << "2 power of 5: " << my_pow(2,5) << endl;
    cout << "3 power of 2: " << my_pow(3) << endl;
    cout << "7 power of 3: " << my_pow(7,3) << endl;
    cout << "10 power of 2: " << my_pow(10) << endl;
    cout << "10 power of 3: " << my_pow(10,3) << endl;

    return 0;
}
