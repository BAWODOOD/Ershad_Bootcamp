/*
    AUTHOR: BANDAR KHALED SALEH BAWODOOD 
    DATE: 7/7/2026
    TITLE: Josephus problem
*/

#include <iostream>

using namespace std;

int main(void)
{
    int PeopleNum = 0, k = 0, remaining = 0;

    cin >> PeopleNum;

    int people[PeopleNum];

    for (int i = 0; i < PeopleNum; i++)
    {
        people[i] = i + 1;
    }

    cin >> k;

    remaining = PeopleNum;
    int nextRemoval = 0;

    while (remaining != 0)
    {
        nextRemoval = (nextRemoval + k - 1) % remaining;

        cout << people[nextRemoval] << " ";
        
        for (int i = nextRemoval; i < remaining - 1; i++)
        {
            int temp = people[i + 1];
            people[i + 1] = people[i];
            people[i] = temp;
        }
        remaining--;
    }

    return 0;
}

 