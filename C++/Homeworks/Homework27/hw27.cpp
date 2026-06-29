/*
    AUTHOR: BANDAR KHALED SALEH BAWODOOD 
    DATE: 29/6/2026
    TITLE: Years!
*/

#include <iostream>

using namespace std;

int main(void)
{
    int num = 0;
    cin >> num;
    int years = 0, months = 0,  days = 0;

    years = num / 360;
    num -= 360 * years;
    months = num / 30;
    num -= 30 * months;
    days = num;

    cout << years << " " << months << " " << days << endl;

    return 0;
}