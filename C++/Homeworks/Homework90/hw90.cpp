/*
 * AUTHOR: BANDAR KHALED SALEH BAWODOOD 
 * DATE: 20/7/2026
 *
 * Subject #12: Recursive Functions 
 * Problem 1: Length of 3n+1
 * 
 * Description: 
 * Implement 3n+1 function to compute the length of the sequence
 * int length_3n_plus_1(int n)
 *
 * Example:
 * E.g. length_3n_plus_1(6) => 9
 */

#include <iostream>

using namespace std;

int length_3n_plus_1(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else if (n % 2 == 0)
    {
        return 1 + length_3n_plus_1(n / 2);
    }
    else 
    {
        return 1 + length_3n_plus_1(3 * n + 1);
    }
}

int main(void)
{
    cout << "n = 1 " << " " << length_3n_plus_1(1) << endl;
    cout << "n = 3 " << " " << length_3n_plus_1(3) << endl;
    cout << "n = 6 " << " " << length_3n_plus_1(6) << endl;
    cout << "n = 7 " << " " << length_3n_plus_1(7) << endl;
    cout << "n = 10 " << " " <<  length_3n_plus_1(10) << endl;

    return 0;
}
