/*
    AUTHOR: BANDAR KHALED SALEH BAWODOOD 
    DATE: 6/7/2026
    TITLE: Is increasing array?
*/

#include <iostream>

using namespace std;

int main(void)
{
    const int SIZE = 5;
    int N[SIZE] {0};
    bool increasing = true;

    
    for (int i = 0; i < SIZE; i++)
    {
        cin >> N[i];
    } 

    for (int i = 0; i <= SIZE - 1; i++)
    {
        if (N[i + 1] < N[i])
        {
            increasing = false;
            break;
        }
    }

    if (increasing) cout << "Increasing array" << endl;
    else            cout << "Not increasing array" << endl;
  
    
    return 0;
}

