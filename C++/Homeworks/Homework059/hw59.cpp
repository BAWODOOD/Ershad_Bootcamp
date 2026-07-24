/*
    AUTHOR: BANDAR KHALED SALEH BAWODOOD 
    DATE: 6/7/2026
    TITLE: Digit Frequency
*/

#include <iostream>

using namespace std;

int main(void)
{
    int num = 0, size = 0;
    int freq[10] {0};

    cout << "Number of integers: ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> num;

        if (num == 0)
        {
            freq[num]++;
        }
        
        while (num !=0)
        {
            freq[num % 10]++;
            num /= 10;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        cout << i << " " << freq[i] << "\n";
    }

    return 0;
}

 