/*
    AUTHOR: BANDAR KHALED SALEH BAWODOOD 
    DATE: 29/6/2026
    TITLE: 100 or 7
*/

#include <iostream>

using namespace std;

int main(void)
{
    int num = 0;
    cin >> num;

    cout << ((((num % 2) == 0) * 100) + (((num % 2) == 1) * 7)) << endl;

    return 0;
}