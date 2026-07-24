/*
 * AUTHOR: BANDAR KHALED SALEH BAWODOOD 
 * DATE: 19/7/2026
 *
 * Subject #10: Multidimensional Arrays 
 * Problem #7: Flatten 3D Array
 * 
 * Description: 
 * Read 3 numbers: DEPTH, ROWS, COLS representing the dimensions of a 3D array.
 * Then read an integer (either 1 or 2) representing the conversion type:
 *   - 1: Convert 3D position to 1D index.
 *   - 2: Convert 1D index to 3D position.
 *
 * If the input is 1:
 *   Read 3 integers d, r, c (depth, row, col) and convert them to a position 
 *   in a 1D array.
 * 
 * If the input is 2:
 *   Read 1 integer (position in 1D array), then convert it to a 3D array 
 *   position (d, r, c).
 *
 * Challenge / Note: 
 * Try to generalize the math formula used here so it could work for higher 
 * dimensions (e.g., a 6D array).
 *
 * Example Inputs & Outputs:
 * 3 4 5  1  1 0 0    => 20
 * 3 4 5  2  20       => 1 0 0
 * 3 4 5  1  1 1 1    => 26
 * 3 4 5  1  2 3 2    => 57
 * 3 4 5  1  2 0 0    => 40
 * 3 4 5  2  59       => 2 3 4
 *
 * Hint from slide:
 * You can visualize the index mapping using nested loops:
 * int idx = 0;
 * for (int dep = 0; dep < DEPTH; ++dep)
 *     for (int row = 0; row < ROWS; ++row)
 *         for (int col = 0; col < COLS; ++col)
 *             cout << idx++ << " = " << dep << " " << row << " " << col << "\n";
 */

#include <iostream>

using namespace std;

int main(void)
{
    int depth = 0, row = 0, column = 0;

    cin >> depth >> row >> column;

    int conversion;
    cin >> conversion;

    if (conversion == 1)
    {
        int d = 0, r = 0, c = 0;
        cin >> d >> r >> c;

        int D1_pos = (d * (row * column)) + column * r + c;
        
        cout << D1_pos << endl;
    }
    else if (conversion == 2)
    {
        int d = 0, r = 0, c = 0;
        int d1_pos = 0;

        cin >> d1_pos;

        d = d1_pos / (row * column);
        // d1_pos -= (row * column) * d;
        d1_pos = d1_pos % (row * column);

        r = d1_pos / column;
        // d1_pos -= column * r;
        d1_pos = d1_pos % column;

        c = d1_pos;
        
        cout << d << " " << r << " " << c << endl;
    }

    return 0;
}
