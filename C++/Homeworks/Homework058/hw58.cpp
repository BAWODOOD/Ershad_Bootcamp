/*
    AUTHOR: BANDAR KHALED SALEH BAWODOOD 
    DATE: 6/7/2026
    TITLE: Find most frequent number
*/

#include <iostream>

using namespace std;

int main(void)
{
    int num = 0, size = 0;

    cout << "Number of integers: ";
    cin >> size;

    const int N = 771;      //-500 < x < 270
    
    int freq[N] = {0};

    for (int i = 0; i < size; i++)
    {
        cin >> num;
        if (num >= 500 || num <= 270)
        {
            freq[500 + num]++;
        }
    }

    int max = 0;
    for (int i = 0; i < N; i++)
    {
        if (freq[i] > max)
        {
            max = i;
        }
    }

    cout << "The most freq number is " << max - 500 << " with " << freq[max] << " appearance." << endl;

    return 0;
}

 