/*
    AUTHOR: BANDAR KHALED SALEH BAWODOOD 
    DATE: 4/7/2026
    TITLE: String Filter
*/

#include <iostream>

/*
    Conditions for valid strings:
    1- Must be exactly 2 letters long.
    2- Must consist of one "N" and one "O".
    3- Must be case-insensitive (e.g., N, n, O, o are all valid).
    4- Order does not matter ("NO" and "ON" are both valid).
*/

using namespace std;

int main(void)
{
    int N = 0;

    cin >> N;
    
    while (N > 0)
    {
        string test = " ";
        cin >> test;

        if ((test == "NO") || (test == "No") || (test == "nO") || (test == "no") ||
            (test == "ON") || (test == "On") || (test == "oN") || (test == "on") )
            {
                cout << "Valid: " << test << "\n";
            }

        N--;
    }

    return 0;
}