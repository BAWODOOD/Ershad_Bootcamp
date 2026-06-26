/*
    AUTHOR: BANDAR KHALED SALEH BAWODOOD 
    DATE: 23/6/2026
    TITLE: Stuudents grades
*/

#include <iostream>

using namespace std;

int main(void)
{
    string name1 (" "), name2 (" ");
    int id1 (0), id2 (0);
    double grade1 (0.0), grade2 (0.0);

    cout << "Enter student 1 name: ";
    cin >> name1;

    cout << "His id ";
    cin >> id1;

    cout << "his grade ";
    cin >> grade1;

    cout << "Enter student 2 name: ";
    cin >> name2;

    cout << "His id ";
    cin >> id2;

    cout << "his grade ";
    cin >> grade2;

    cout << "Students grades in math\n";
    cout << name1 << " (with id " << id1 << " ) " << "got grade " << grade1 << endl;
    cout << name2 << " (with id " << id2 << " ) " << "got grade " << grade2 << endl;
    cout << "Average grade is " << (grade1 + grade2) / 2.0 << endl;

    return 0;
}