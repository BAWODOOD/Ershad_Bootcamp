/*
 * AUTHOR: BANDAR KHALED SALEH BAWODOOD 
 * DATE: 19/7/2026
 *
 * Subject #11: Functions 
 * Problem 1: Max of 6 numbers
 * 
 * Description: 
 * Write a function that reads 6 numbers and compute their maximum. Create 
 * the following functions:
 *   - max(int a, int b, int c)
 *   - max(int a, int b, int c, int d)
 *   - max(int a, int b, int c, int d, int e)
 *   - max(int a, int b, int c, int d, int e, int f)
 *
 * Hint: 
 * How can max(int a, int b, int c, int d) utilize max(int a, int b, int c)? 
 * and so on...
 */

#include <iostream>

using namespace std;

int max(int a, int b, int c)
{
    if (a > b && a > c)
    {
        return a;
    }
    else if(b > c)
    {
        return b;
    }

    return c;
}

int max(int a, int b, int c, int d)
{
    return (a > max(b, c, d)) ? a : max(b,c,d);
}

int max(int a, int b, int c, int d, int e)
{
    return (a > max(b, c, d, e)) ? a : max(b,c,d, e);
}

int max(int a, int b, int c, int d, int e, int f)
{
    return (a > max(b, c, d, e, f)) ? a : max(b,c,d, e, f);
}

int main(void)
{
    int max1 = max(1, 2, 3);
    int max2 = max(1, 2, 3, 4);
    int max3 = max(9, 2, 3, 4, 5);
    int max4 = max(1, 2, 3, 4, 5, 6);

    cout << max1 << " " << max2 << " " << max3 << " " << max4 << endl;
   
    return 0;
}
