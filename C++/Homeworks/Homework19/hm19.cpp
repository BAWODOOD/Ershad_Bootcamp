/*
    AUTHOR: BANDAR KHALED SALEH BAWODOOD 
    DATE: 29/6/2026
    TITLE: Simplify Expressions
*/

#include <iostream>

using namespace std;

int main(void)
{
    bool T = true, F = false;

    cout << (T && T && F && T) << "\n";                                             //F
    cout << (T && T && F && T || T && T) << "\n";                                   //T
    cout << (T && T && T && T || T && (T || F)) << "\n";                            //T
    cout << (T && T && T || T && (F || (T && (T && T)))) << "\n";                   //T
    cout << (T && T || T && F && T || T && T && F || (T && (T || F))) << "\n";      //T
    cout << (T && T || T && F && T || (T && T && F || (T && (T || F)))) << "\n";    //T
    cout << ((T && T || T && F && T || T) && T && F || (T && (T || F))) << "\n";    //T
    cout << (T && T || T && (F && T || T && T) && F || (T && (T || F))) << "\n";    //T

    return 0;
}