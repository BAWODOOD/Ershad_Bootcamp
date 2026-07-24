/*
 * AUTHOR: BANDAR KHALED SALEH BAWODOOD 
 * DATE: 19/7/2026
 *
 * Subject #11: Functions 
 * Problem 6: Get nth-prime
 * 
 * Description: 
 * Implement the following 2 functions:
 * 
 * bool is_prime(int num);
 *   - Return true if number is prime
 * 
 * int nth_prime(int n);
 *   - Return the n-th prime number. It should use is_prime function
 *   - E.g nth_prime(6) = 13
 *       - Recall: 2, 3, 5, 7, 11, 13, 17, 19
 */

#include <iostream>

using namespace std;

bool IsPrime(int num)
{
    bool prime = true;

    if (num < 2) 
        return false;

    for (int i = 2; i < num; ++i)
    {
        if (num % i == 0)
        {
            return prime  = false;
        }
    }

    return prime;
}

int nth_prime(int n)
{
    int found = 0;
    int GoalPrimeNumber = 2;

    while (found < n)
    {
        if(IsPrime(GoalPrimeNumber))  found++;
        if(found < n) GoalPrimeNumber++;
    }

    return GoalPrimeNumber;
}

int main(void)
{
    cout << nth_prime(9) << endl;

    return 0;
}
