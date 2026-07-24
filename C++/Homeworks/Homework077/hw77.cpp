/*
 * AUTHOR: BANDAR KHALED SALEH BAWODOOD 
 * DATE: 18/7/2026
 *
 * Subject #10: Multidimensional Arrays 
 * Problem #2: Triangular matrix
 * 
 * Description: 
 * Read an integer N, then read a Square matrix of size NxN. 
 * Then, print 2 values: the sum of the lower triangle matrix 
 * followed by the sum of the upper triangle matrix.
 * 
 * Note: Based on the example, both the upper and lower triangular 
 * sums must include the elements on the main diagonal.
 *
 * Example Input:
 * 3
 * 8 16 9
 * 3 15 27
 * 14 25 29
 *
 * Example Output:
 * 94
 * 104
 *
 * Explanation of Output:
 * Lower triangle sum: (8 + 15 + 29) + (3 + 25 + 14) = 94
 * Upper triangle sum: (8 + 15 + 29) + (16 + 27 + 9) = 104
 */

#include <iostream>

using namespace std;

int main(void)
{
    size_t N = 0;

    cin >> N;

    int matrix[N][N];

    for (size_t i = 0; i < N; i++)
    {
        for (size_t j = 0; j < N; j++)
        {
            cin >> matrix[i][j];
        }
    }

    //Upper triangle
    int upper_sum = 0;
    for (size_t row = 0; row < N; row++)
    {
        for (size_t col = row; col < N; col++)
        {
            upper_sum += matrix[row][col]; 
        }
    }

     //lower triangle
    int lower_sum = 0;
    for (size_t col = 0; col < N; col++)
    {
        for (size_t row = col; row < N; row++)
        {
            lower_sum += matrix[row][col]; 
        }
    }

    cout << upper_sum << " " << lower_sum << endl;
    
    return 0;
}
