/*
    AUTHOR: BANDAR KHALED SALEH BAWODOOD 
    DATE: 28/6/2026
    TITLE: Create Logic!
*/

#include <iostream>

using namespace std;

int main(void)
{
    int nb = 0, ng = 0, nt = 0;

    cout << "Enter number of boys: ";
    cin >> nb;

    cout <<"Enter number of girls: ";
    cin >> ng;

    cout << "Enter number of teachers: ";
    cin >> nt;

    cout << (nb > 25) << "\n";
    cout << (ng <= 30) << "\n";
    cout << (nb > 20 && nt > 2 || ng > 30 && nt > 4) << "\n";
    cout << (ng < 60 || ng < 70) << "\n";
    cout << !(nb >= 60 || ng >= 70) << "\n";
    cout << (nb > 10 + ng) << "\n";
    cout << (nb - ng > 10 || nt > 5) << "\n";
    cout << (nb > 10 + ng || ng > 15 + nb) << "\n";

    return 0;
}
