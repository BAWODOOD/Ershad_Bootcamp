/*
 * AUTHOR: BANDAR KHALED SALEH BAWODOOD 
 * DATE: 18/7/2026
 *
 * Subject #10: Multidimensional Arrays 
 * Problem #1: Smaller row?
 * 
 * Description: 
 * Read integers N, M, then read a matrix of size NxM. 
 * Then read Q for Q queries.
 * 
 * Each query consists of 2 integers: the first and 2nd row indices (1-based).
 * Compare the 2 rows and print "YES" if the first row is strictly less 
 * than the 2nd row for ALL the row values. Otherwise, print "NO".
 *
 * Example Input:
 * 3 4          => row column 
 * 8 16 9 52    
 * 3 15 27 6
 * 14 25 29 10
 * 3            => num of compares
 * 1 2          => row 1 < row 2 ? (output is NO)
 * 2 3          => row 2 < row 3 ? (output is YES)
 * 1 3          => row 1 < row 3 ? (output is NO)
 *
 */

#include <iostream>

using namespace std;

int main(void)
{
    size_t rows, columns;

    cin >> rows >> columns;

    int matrix[rows][columns];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cin >> matrix[i][j];
        }
    }

    size_t queries = 0;
    cin >> queries;

    for (int q = 0; q < queries; q++)
    {
        size_t q_row1, q_row2;

        cin >> q_row1 >> q_row2;

        for (int cl = 0; cl < columns; cl++)
        {
            if (matrix[q_row1 - 1][cl] > matrix[q_row2 - 1][cl])
            {
                cout << "NO\n";
                break;
            }
            else if (cl == columns - 1)
            {
                cout << "YES\n";
            }
        }
    }

    return 0;
}
