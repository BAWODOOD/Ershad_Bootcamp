/*
 * AUTHOR: BANDAR KHALED SALEH BAWODOOD 
 * DATE: 20/7/2026
 *
 * Subject #12: Recursive Functions 
 * Problem 14: Trace
 * 
 * Instructions:
 * Without running code on the right
 *  - Trace by hand: What does this method do?
 *  - What happens if we swapped lines 6 & 7?
 */

#include <iostream>

using namespace std;

void do_something(int n) {
    if (n) {
        cout << n % 10;
        do_something(n / 10);
    }
}

// What happens if we swapped lines 6 & 7?
void do_something_swapped(int n) {
    if (n) {
        do_something_swapped(n / 10);
        cout << n % 10;
    }
}

int main() {
    cout << "Original function output: ";
    do_something(123456); 
    cout << "\n(Expected: 654321)\n\n";

    cout << "Swapped function output:  ";
    do_something_swapped(123456); 
    cout << "\n(Expected: 123456)\n";

    return 0;
}