/*
    AUTHOR: BANDAR KHALED SALEH BAWODOOD 
    DATE: 4/7/2026
    TITLE: Special Sum 1
*/

#include <iostream>

using namespace std;

int main(void)
{
    int N = 0, T = 0 , num = 0 ;
    long long sum = 0, Multiple = 1, iteration = 1;

    cout << "Number of cases: ";
    cin >> T;

    while (T > 0)
    {
        cout << "Number of integer for case " << T << " : ";
        cin >> N;

        while (N > 0)
        {
            cin >> num;

            sum += num * iteration;
            Multiple *= 10; 
            iteration += Multiple;
            N--;
        }

        cout << "Case " << T << " sum is " << sum  << "\n";
        sum = 0;
        Multiple = 1;
        iteration = 1;
        T--;
    }

    return 0;
}