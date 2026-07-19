/*
 * AUTHOR: BANDAR KHALED SALEH BAWODOOD 
 * DATE: 19/7/2026
 *
 * Subject #10: Multidimensional Arrays 
 * Problem #5: Find mountains
 * 
 * Description: 
 * Read integers N and M, then read a matrix of size NxM. 
 * Print all positions that are considered a "mountain". 
 * A position is a mountain if its value is strictly greater than 
 * the values of all its valid neighbors (up to 8 neighbors: up, 
 * down, left, right, and 4 diagonals).
 *
 * Hint: 
 * "Code smartly" – This usually implies using directional arrays 
 * (e.g., dx[] and dy[]) to iterate through neighbors cleanly 
 * instead of writing 8 hardcoded if-statements.
 *
 * Example Input:
 * 3 3
 * 8 6 1
 * 3 2 9
 * 1 6 4
 *
 * Example Output & Explanation:
 * 0 0    => (8 > 6, 3, 2) 
 * 1 2    => (9 > 1, 2, 6, 4, 6) 
 */

#include <iostream>

using namespace std;

int main(void)
{
    size_t row = 0, col = 0;

    int8_t dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int8_t dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

    cin >> row >> col;

    int matrix[10][10];

    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            int val = matrix[i][j];
            bool ismountain = true;

            for (int step = 0; step < 8; step++)
            {
                int ni = i + dx[step];
                int nj = j + dy[step];

                if (ni < 0 || ni >= row || nj < 0 || nj >= col)
                {
                    continue;
                }

                if (val <= matrix[ni][nj])
                {
                    ismountain = false;
                    break;
                }
            }

            if (ismountain) cout << i << " " << j << " \n";
        }
    }

    return 0;
}
