/*
 * AUTHOR: BANDAR KHALED SALEH BAWODOOD 
 * DATE: 23/7/2026
 *
 * Project: Hospital System
 * 
 * Problem Statement:
 * Implement the following system for a hospital:
 * 
 * - There are 20 different specialization (e.g. Children, Surgery, etc)
 * - For each specialization, there are only 5 available spots [queue]
 * 
 * System Features:
 * 1. Adding a patient
 *    o Read the requested specialization [1-20].
 *    o Read his name and status (0 = regular, 1 urgent)
 *    o If 5 patients exist, apologize and don't accept.
 *    o If the user is regular, add in end of queue. Otherwise, add in Begin
 * 
 * 2. Print patients
 *    o Print patients, for the specializations that have waiting patients
 * 
 * 3. Dr pickup a patient
 *    o Read the requested specialization. If no patients, inform the doctor
 *    o Otherwise, ask the patient to go with the Dr. Remove from the queue
 */

#include <iostream>

using namespace std;

const int SPECILIZATIONS = 20;
const int SPOTS = 5;

//Function prototypes
void menu(int &specialization_choose);
void ShiftLeft(string names[SPOTS], int status[SPOTS], int queue);
void ShiftRight(string names[SPOTS], int status[SPOTS], int queue);
void AddingNewPatients (string names[][SPOTS], int status[][SPOTS], int queue[]);
void PrintAllPatients(string names[][SPOTS], int status[][SPOTS], int queue[]);
void GetPatient(string names[][SPOTS], int status[][SPOTS], int queue[]);

void menu(int &specialization_choose)
{
    cout << "\nEnter your choice: \n";
    cout << "1) Add new patient.\n";
    cout << "2) Print all patients.\n";
    cout << "3) Get next patient.\n";
    cout << "4) Exit.\n";

    cin >> specialization_choose;
}

// Pulls everyone up one spot to fill the empty space at index 0.
void ShiftLeft(string names[SPOTS], int status[SPOTS], int queue)
{
    // MUST go forwards!
    for (int i = 0; i < queue - 1; i++)
    {
        names[i] = names[i + 1];
        status[i] = status[i + 1];
    }
}

// Moves everyone down one spot to make space at index 0.
void ShiftRight(string names[SPOTS], int status[SPOTS], int queue)
{
    for (int i = queue; i > 0; i--)
    {
        names[i] = names[i - 1];
        status[i] = status[i - 1];
    }
}

void AddingNewPatients (string names[][SPOTS], int status[][SPOTS], int queue[])
{
    string name;
    int state = -1, specilization = -1;

    cout << "Enter specialization , name and status (0 regular, 1 urgent): ";
    cin >> specilization >> name >> state;

    if (specilization < 1 || specilization > 20)
    {
        cout << "Invalid specialization. Please choose 1-20.\n";
        return;
    }

    if (queue[specilization - 1] > 4)
    {
        cout << "Sorry we can not add more patients for this specilizations\n";
        return;
    }

    if (state == 1)     // Urgent patient
    {
        ShiftRight(names[specilization - 1], status[specilization - 1], queue[specilization - 1]);

        names[specilization - 1][0] = name;
        status[specilization - 1][0] = state;
        queue[specilization - 1]++;
    }
    else                // Regular patient
    {
        names[specilization - 1][queue[specilization - 1]] = name;
        status[specilization - 1][queue[specilization - 1]] = state;
        queue[specilization - 1]++;
    }
} 

void PrintAllPatients(string names[][SPOTS], int status[][SPOTS], int queue[])
{
    cout << "****************************\n";
    for (int i = 0; i < SPECILIZATIONS; i++)
    {
        if (queue[i] != 0)
        {
            cout << "There are " << queue[i] << " in specilization " << i + 1 << " \n"; 

            for (int j = 0; j < queue[i]; j++)
            {
                cout << names[i][j] << " ";
                (status[i][j] == 1) ? (cout << " urgent\n") : (cout << " regular\n");

            }

            cout << " \n";
        } 
    }
}

void GetPatient(string names[][SPOTS], int status[][SPOTS], int queue[])
{
    int specilization = 0;

    cout << "Enter specilization : ";
    cin >> specilization;

    if (specilization < 1 || specilization > 20)
    {
        cout << "Invalid specialization.\n";
        return;
    }

    if (queue[specilization - 1] == 0)
    {
        cout << "No patients at the moment. Have rest, Dr.\n";
        return;
    }
    else 
    {
        cout << names[specilization - 1][0] << " please go with the Dr.\n";

        ShiftLeft(names[specilization - 1], status[specilization - 1], queue[specilization - 1]);
        queue[specilization - 1]--;
    }
    
}

int main(void)
{
    int specialization_choose = 0;

    string names[SPECILIZATIONS][SPOTS];
    int status[SPECILIZATIONS][SPOTS];
    int queue[SPECILIZATIONS] = {0};

    while (specialization_choose != 4)
    {

        menu(specialization_choose);

        switch (specialization_choose)
        {
            case 1:
            {
                AddingNewPatients(names, status, queue);
                break;
            }
            case 2:
            {
                PrintAllPatients(names, status, queue);
                break;
            }
            case 3:     
            {
                GetPatient(names, status, queue);
                break;
            }
            case 4:
            { 
                cout << "Exiting system...\n";
                break;
            }
            default :
            {
                cout << "Invalid choice. Please try again.\n";
            }
        }
    }
    return 0;
}