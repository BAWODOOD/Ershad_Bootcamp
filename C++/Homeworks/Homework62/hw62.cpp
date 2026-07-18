/*
    AUTHOR: BANDAR KHALED SALEH BAWODOOD 
    DATE: 6/7/2026
    TITLE: Recamán's sequence
*/

#include <iostream>

using namespace std;

int main(void)
{
    const int MAX_SUMMATION = 20200;
    bool recaman[MAX_SUMMATION] = {0};
    int currentVal = 0, targetIndex = 0;

    cin >> targetIndex;

    recaman[currentVal] = true;

    for (int i = 1; i <= targetIndex; i++)
    {

        int val = currentVal - i;

        if ((val > 0) && !recaman[val])
        {
            currentVal = val;
        }
        else 
        {
            currentVal = currentVal + i;
        }

        recaman[currentVal] = true;
    }

    cout << currentVal << endl;

    return 0;
}

 