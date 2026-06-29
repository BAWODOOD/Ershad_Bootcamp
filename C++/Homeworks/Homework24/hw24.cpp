/*
    AUTHOR: BANDAR KHALED SALEH BAWODOOD 
    DATE: 29/6/2026
    TITLE: Last 3 digits sum
*/

#include <iostream>

using namespace std;

int main(void)
{
    int num = 0;
    cin >> num;

    int last_3digits = num % 1000;
    cout << ((last_3digits % 10) + ((last_3digits % 100) / 10) + ((last_3digits % 1000) / 100)) << endl;

    return 0;
}