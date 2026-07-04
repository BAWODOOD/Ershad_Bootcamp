/*
    AUTHOR: BANDAR KHALED SALEH BAWODOOD 
    DATE: 4/7/2026
    TITLE: Multiplication Table
*/

#include <iostream>

using namespace std;

int main(void)
{
    int N = 0, M = 0, cntN = 1, cntM = 1;

    cin >> N >> M;

    cout << "Multiplication Table:" << "\n";

    while (N >= cntN)
    {
        cout << "Table for " << cntN << " : ";
        while(cntM <= M)
        {
            cout << cntM * cntN << " ";
            cntM++;
        }
        cout << "\n";
        cntM = 1;
        cntN++;
    }

    return 0;
}