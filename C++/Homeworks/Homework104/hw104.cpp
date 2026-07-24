/*
 * AUTHOR: BANDAR KHALED SALEH BAWODOOD 
 * DATE: 20/7/2026
 *
 * Subject #12: Recursive Functions 
 * Problem 15: Count primes
 * 
 * Signature:
 * int count_primes(int start, int end);
 *  - Compute how many primes between start & end, inclusive indices
 * 
 * Requirements:
 * - Don't use loops at all
 * 
 * Input:
 * - 10 20 => 4
 * - 10 200 => 42
 * 
 * Question:
 * - Can u compute answer for [10, 5000000]?
 */

#include <iostream>

using namespace std;

bool is_prime(int n, int divisor = 2)
{
    if (n < 2) return false;

    if (divisor * divisor > n)  return true;

    if (n % divisor == 0) return false;
    
    return is_prime(n, divisor + 1);
}

int count_primes(int start, int end)
{   
    if (start > end)
    {
        return 0;
    }

    return is_prime(start) + count_primes(start + 1, end);
}

int main() 
{
    // --- CATEGORY 1: Edge Cases & Traps ---
    
    // Tests negative numbers and 0/1 (None are prime)
    cout << "Test 1 [-10, 1]:    " << count_primes(-10, 1);
    cout << " (Expected: 0)\n";
    
    // Tests a range of exactly one number which IS prime
    cout << "Test 2 [7, 7]:      " << count_primes(7, 7);
    cout << " (Expected: 1)\n";
    
    // Tests a range of exactly one number which IS NOT prime
    cout << "Test 3 [10, 10]:    " << count_primes(10, 10);
    cout << " (Expected: 0)\n";
    
    // Tests an invalid range where start is already greater than end
    cout << "Test 4 [20, 10]:    " << count_primes(20, 10);
    cout << " (Expected: 0)\n";


    // --- CATEGORY 2: Standard Mathematical Benchmarks ---
    
    // The standard benchmark for primes under 100
    cout << "Test 5 [1, 100]:    " << count_primes(1, 100);
    cout << " (Expected: 25)\n";
    
    // The standard benchmark for primes under 1,000
    cout << "Test 6 [1, 1000]:   " << count_primes(1, 1000);
    cout << " (Expected: 168)\n";
    
    // Tests a range that starts higher up
    cout << "Test 7 [1000, 2000]: " << count_primes(1000, 2000);
    cout << " (Expected: 135)\n";

    /*
     * Question: Can u compute answer for [10, 5000000]?
     * Answer: NO.
     * 
     * If you uncomment the line below, your program will crash. 
     * Calling a recursive function 5 million times in a row will 
     * exceed the memory limit of the "Call Stack" and cause a 
     * Stack Overflow!
     */
    // cout << "Test 3 [10, 5000000]: " << count_primes(10, 5000000) << "\n";

    return 0;
}