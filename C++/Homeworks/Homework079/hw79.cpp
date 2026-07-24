/*
 * AUTHOR: BANDAR KHALED SALEH BAWODOOD 
 * DATE: 19/7/2026
 *
 * Subject #10: Multidimensional Arrays 
 * Problem #4: How many primes
 * 
 * Description: 
 * Read 2 integers N and M, then read a matrix of size NxM. 
 * Then read an integer Q, for Q queries.
 * For each query read 4 integers: i, j, r, c.
 * - These integers represent a grid (submatrix) where (i, j) is the top-left corner.
 * - The variables (r, c) stand for the number of rows and number of columns, respectively.
 * For each query, print how many prime numbers are in the requested grid.
 *
 * Constraints & Notes:
 * - Each query should be answered using nested loops maximum not more.
 * - In the future: with smart precomputation it can be done without loops.
 * - It is called Image integral in the Computer Vision field.
 *
 * Example Input:
 * 3 4
 * 8 2 9 5
 * 3 2 27 6
 * 7 8 29 22
 * 2
 * 1 0 2 2
 * 0 1 2 3
 *
 * Example Output & Explanation:
 * 3    => (primes 3, 2, 7 in rectangle (0, 1) (2, 1))
 * 3    => (primes 2, 5, 2 in rectangle (0, 1) (1, 3))
 */

#include <iostream>

using namespace std;

int main(void)
{
    size_t row = 0, col = 0;

    cin >> row >> col;

    int matrix[10][10];

    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
    }

    size_t queries = 0;

    cin >> queries;

    size_t start_row = 0, start_col = 0, num_rows = 0, num_cols = 0, count = 0;
    bool isprime = true;

    for (size_t q = 0; q < queries; q++)
    {
        cin >> start_row >> start_col >> num_rows >> num_cols;

        for (size_t r = start_row; r < start_row + num_rows; r++)
        {
            for (size_t c = start_col; c < start_col + num_cols; c++)
            {
                int val = matrix[r][c];
                bool isprime = true;

                if (val <= 1) 
                {
                    isprime = false;
                }
                else
                {
                   
                    for (int i = 2; i < val; ++i)
                    {
                        if (val % i == 0)
                        {
                            isprime  = false;
                            break;
                        }
                    }
                }

                if (isprime) 
                {
                    count++;
                }
            }
        }
        cout << count << "\n";
        count = 0;
    }
    
    return 0;
}
