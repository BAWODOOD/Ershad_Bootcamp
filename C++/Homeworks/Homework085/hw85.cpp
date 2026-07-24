/*
 * AUTHOR: BANDAR KHALED SALEH BAWODOOD 
 * DATE: 19/7/2026
 *
 * Subject #11: Functions 
 * Problem 3: Calculator
 * 
 * Description: 
 * Develop a function that allows user to do the following (menu options):
 *   - Add 2 numbers
 *   - Subtract 2 numbers
 *   - Multiply 2 numbers
 *   - Divide 2 numbers
 *   - End the program
 *
 * Consider the following functions:
 *   - Function to read 2 double numbers - by reference
 *   - 4 functions, one for each operation. Don't divide by zero!
 *   - Function to display the menu of the 5 options - read number and return it.
 *       - User should enter number from 1 to 5. If not, display error message
 *       - If exit, end the program by printing how many operations were done
 */

#include <iostream>

using namespace std;

double addition (double a, double b)
{
    return a + b;
}

double subtraction(double a, double b)
{
    return a - b;
}

double mulitplication(double a, double b)
{
    return a * b;
}

double division(double a, double b)
{
    return (b != 0) ? a / b : 0.0;
}

void menuOptions (int &option)
{
    cout << "\nChoose the operation :\n";
    cout << "1- Additiono\n";
    cout << "2- Subtraction\n";
    cout << "3- Multiplication\n";
    cout << "4- Division\n";
    cout << "5- End the program\n";
    cout << "Number of choosen oparation: ";
    cin >> option;
}

void userInput(double &a, double &b)
{
    cout << "Enter num1 and num2: ";
    cin >> a >> b;
}

int main(void)
{

    int operation = 0, count = 0;
    do
    {
        do
        {
            menuOptions(operation);
        } while (operation > 5 || operation <= 0);

        double a = 0.0, b = 0.0;

        if (operation != 5) userInput(a, b);

        switch (operation)
        {
            case 1:   cout << a << " + " << b << " = " << addition(a, b) << "\n"; 
                      count++;
                      break;
                    
            case 2:   cout << a << " - " << b << " = " << subtraction(a, b) << "\n"; 
                      count++;
                      break;

            case 3:   cout << a << " * " << b << " = " << mulitplication(a, b) << "\n"; 
                      count++;
                      break;

            case 4:   cout << a << " / " << b << " = " << division(a, b) << "\n"; 
                      count++;
                      break;
        }

    }while (operation != 5);

    cout << count << " operations" << endl;
  
    return 0;
}
