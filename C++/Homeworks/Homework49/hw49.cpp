/*
    AUTHOR: BANDAR KHALED SALEH BAWODOOD 
    DATE: 4/7/2026
    TITLE: Printing X
*/

#include <iostream>

using namespace std;

int main(void)
{
    int N = 0 ;
    cin >> N;

    for (int row = (N / 2), iteration = 0; row > 0; row--, iteration++)
    {
        for(int i = (N / 2) - row; i != 0; i--)                //Printing the spaces before the first x
        {
            cout << " ";
        }
    
        cout << "x";

        for (int j = (N - 2) - 2 * iteration; j > 0; j--)      //Printing the spaces between the Xs
        {
            cout << " ";
        }

        cout << "x\n";
    }

    for (int iteration = (N / 2); iteration > 0 ; iteration--)
    {
         cout << " ";
    }

    cout << "x\n";
    
    for (int row = 0, iteration = (N / 2); row < (N / 2); row++, iteration--)
    {
        for(int i = (N / 2) - row - 1; i != 0; i--)
        {
            cout << " ";
        }
    
        cout << "x";

        for (int j = N - 2 * iteration; j > 0; j--)
        {
            cout << " ";
        }

        cout << "x\n";
    }

    return 0;
}





/*
    for (int i = 0; i < n; ++i)
    {   
        for (int j = 0; j < n; ++j)
        {   
            if (i == j || n - i - 1 ==j)
                cout << "x";
            else 
                cout << " "
        }
    }
*/