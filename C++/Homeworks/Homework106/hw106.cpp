/*
 * AUTHOR: BANDAR KHALED SALEH BAWODOOD 
 * DATE: 20/7/2026
 *
 * Subject #12: Recursive Functions 
 * Problem 17: Fibonacci
 * 
 * Problem Statement:
 * Implement the fibonacci sequence using recursion. 
 * Recall the fibonacci sequence: 1 1 2 3 5 8 13 21 34... 
 * (Note: The original assignment text contains a typo, listing '35' instead of '34').
 * 
 * Recall that: fibonacci(n) = fibonacci(n-1) + fibonacci(n-2). 
 * So it calls 2 subproblems of its type.
 * 
 * Signature:
 * int fibonacci(int n);
 * 
 * Example:
 * fibonacci(6) = 13 // Since fib(6) = fib(5) + fib(4) = 13
 * 
 * Questions to Answer:
 * 1. Can u compute fibonacci(40)? fibonacci(50)? 
 * 2. Why? 
 * 3. Any work around? Hint: Array
 */

#include <iostream>

using namespace std;

int fibonacci(int n)
{
    if (n <= 1)
    {
        return 1;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() 
{
    // Test 1: The standard example
    cout << "Test 1 [fibonacci(6)]: " << fibonacci(6);
    cout << " (Expected: 13)\n";
    
    return 0;
}