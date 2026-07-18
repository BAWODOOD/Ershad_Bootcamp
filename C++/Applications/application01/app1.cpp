/*
 * AUTHOR: BANDAR KHALED SALEH BAWODOOD 
 * DATE: 18/7/2026
 *
 * Project: Employee Program (v1)
 * 
 * Description: 
 * Create a program that runs continuously to help a factory manage its employees. 
 * It must display a menu with the following choices and process user input from 1 to 4:
 *
 * 1) Add new employee: 
 *    Allow the manager to enter information for a new employee.
 *    Prompt the user to input: Name, Age, Salary, and Gender letter (M/F), and add this to the database.
 *
 * 2) Print all employees: 
 *    Print all stored employees, outputting one line per employee.
 *
 * 3) Delete by age: 
 *    Prompt the user to enter two values: a start age and an end age. 
 *    Find all employees whose age falls within this range (start_age <= age <= end_age) and remove them.
 *
 * 4) Update Salary by name: 
 *    Prompt the user to enter an employee's name followed by a new salary. 
 *    Find that specific employee and update their salary.
 */

 #include <iostream>

 using namespace std;

 int main(void)
 {
    string names[10];
    char genders[10] = {' '};
    int ages[10] = {0}, salaries[10] = {0}, choice = 0;
    
    size_t current_index = 0, change = 0;

    do
    {
        cout << "\n**************************\n";
        cout << "Enter your choice: \n";
        cout << "1) Add new employee.\n";
        cout << "2) Print all employeyes.\n";
        cout << "3) Delete be age.\n";
        cout << "4) Update Salary by name.\n";

        cin >> choice;

        switch (choice)
        {
            case 1:   
            {
                    cout << "Enter name: "; cin >> names[current_index]; 
                    cout << "Enter age: "; cin >> ages[current_index]; 
                    cout << "Enter salary: "; cin >> salaries[current_index]; 
                    cout << "Enter gender (M/F): "; cin >> genders[current_index]; 
                    current_index++;
                    break;
            }
            case 2:
            {
                    for (int i = 0; i < current_index; i++)
                    {
                        cout << names[i] << " " << ages[i] << " " << salaries[i] << " " << genders[i] << "\n";
                    }
                    break;
            }
            case 3:
            {
                    int age_range1 = 0, age_range2 = 0;
                    cout << "Enter start and end age: "; cin >> age_range1 >> age_range2;

                    for (int i = 0; i < current_index; i++)
                    {
                        if ((age_range1 <= ages[i]) && (age_range2 >= ages[i]))
                        {
                            ages[i] = 0;
                            names[i] = "0";
                            salaries[i] = 0;
                            genders[i] = '0';

                            for (int j = i; j < current_index; j++)
                            {
                                string temp = names[j + 1];
                                names[j + 1] = names[j];
                                names[j] = temp;

                                int temp_num = ages[j + 1];
                                ages[j + 1] = ages[j];
                                ages[j] = temp_num;

                                temp_num = salaries[j + 1];
                                salaries[j + 1] = salaries[j];
                                salaries[j] = temp_num;

                                char temp_char = genders[j + 1];
                                genders[j + 1] = genders[j];
                                genders[j] = temp_char;
                            }
                            --i;
                            change++;
                        }
                    }

                    current_index -= change;
                    change = 0;
                    break;
            }
            case 4:
            {
                    string name;
                    int salary;

                    cout << "Enter the name and salary: "; cin >> name; cout << " "; cin >> salary;

                    for (int i = 0; i < current_index; i++)
                    {
                        if (name == names[i])
                        {
                            salaries[i] = salary;
                            break;
                        }
                    }
                    break;
            }
        }

    } while (true);
    
    return 0;
 }