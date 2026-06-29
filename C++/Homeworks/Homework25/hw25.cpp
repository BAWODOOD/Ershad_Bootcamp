/*
    AUTHOR: BANDAR KHALED SALEH BAWODOOD 
    DATE: 29/6/2026
    TITLE: 4th digit from the end
*/

#include <iostream>

using namespace std;

int main(void)
{
    int num = 0;
    cin >> num;

    cout << ((num % 10000) / 1000) << endl;

    return 0;
}