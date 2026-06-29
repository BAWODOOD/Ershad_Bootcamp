/*
    AUTHOR: BANDAR KHALED SALEH BAWODOOD 
    DATE: 29/6/2026
    TITLE: Is Even ?
*/

#include <iostream>

using namespace std;

int main(void)
{
    int num = 0;
    cin >> num;

    bool is_even1 = false;
    is_even1 = num % 2 == 0;
    cout << is_even1 << "\n";

    bool is_even2 = false;
    is_even2 = ((double) num / (num / 2) - 2.0) == 0.0;
    cout << is_even2 << "\n";

    bool is_even3 = false;    
    is_even3 = (((num % 10) / 2.0) - ((num % 10) / 2)) == 0;
    cout << is_even3 << "\n";

    return 0;
}