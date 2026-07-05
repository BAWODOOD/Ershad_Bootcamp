/*
    AUTHOR: BANDAR KHALED SALEH BAWODOOD 
    DATE: 6/7/2026
    TITLE: Is Palindrome? 
*/

#include <iostream>

using namespace std;

int main(void)
{
    int num = 0, size = 0;
    bool IsPalindrome = true;

    cin >> size;

    int N[size] {0};

    for (int i = 0; i < size; i++)
    {
        cin >> N[i];
    }

    for (int i = 0; i < (size / 2); i++)
    {
        if (N[i] != N[size - 1 - i])
        {
            IsPalindrome = false;
        }
    }

    if (IsPalindrome) cout << "Is Palindrome" << endl;
    else              cout << "Is not Palindrome" << endl;

  
    return 0;
}

