/*
 * AUTHOR: BANDAR KHALED SALEH BAWODOOD 
 * DATE: 19/7/2026
 *
 * Subject #10: Multidimensional Arrays 
 * Problem #3: Transpose
 * 
 * Description: 
 * Read integers N, M, then read a matrix of size NxM. 
 * Compute and output another array, which is the transpose of the given matrix.
 * 
 * Note: The transpose of a matrix is obtained by interchanging its 
 * rows and columns (i.e., an NxM matrix becomes an MxN matrix).
 *
 * Example Input (4x5 Matrix):
 * 4 5
 * 1 2 3 4 5
 * 6 7 8 9 10
 * 11 12 13 14 15
 * 16 17 18 19 20
 *
 * Example Output (5x4 Transpose Matrix):
 * 1 6 11 16
 * 2 7 12 17
 * 3 8 13 18
 * 4 9 14 19
 * 5 10 15 20
 */

#include <iostream>

using namespace std;

int main(void)
{
    size_t row = 0, col = 0;

    cin >> row >> col;

    int matrix[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int transMat[col][row];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            transMat[j][i] = matrix[i][j];
        }
    }

    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << transMat[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
