/*
 * AUTHOR: BANDAR KHALED SALEH BAWODOOD 
 * DATE: 20/7/2026
 *
 * Subject #12: Recursive Functions 
 * Problem 16: Grid Sum
 * 
 * Problem Statement:
 * Given a 2D array of numbers, all of them are positive distinct. Robot starts 
 * from (0, 0). It can move to the right, down, or diagonal. (Note: The original 
 * assignment text says "left", but the example clearly demonstrates moving down).
 * It will select one direction: the maximum. Print the total path sum of this robot.
 * 
 * Signature:
 * int path_sum(int grid[100][100], int row, int col, int ROWS, int COLS);
 * 
 * Input:
 * 3 3
 * 1 7 8
 * 2 10 11
 * 20 5 9
 * 
 * Output: 
 * 31 (from 1 + 10 + 11 + 9)
 * 
 * Explanation:
 * - Robot start at (0, 0). 3 possible values (2, 7, 10). Max 10, so go to this cell.
 * - Then 3 possible values (5, 9, 11). Go to 11. Then only 9 available.
 */

#include <iostream>

using namespace std;

int path_sum(int grid[100][100], int row, int col, int ROWS, int COLS)
{
    int current_val = grid[row][col];

    int max_val = -1;
    int next_row = 0, next_col = 0;

    if (row + 1 < ROWS)
    {
        if (grid[row + 1][col] > max_val)
        {
            max_val = grid[row + 1][col];
            next_row = row + 1;
            next_col = col;
        }
    }

    if (col + 1 < COLS)
    {
        if (grid[row][col + 1] > max_val)
        {
            max_val = grid[row][col + 1];
            next_row = row;
            next_col = col + 1;
        }
    }

    if (col + 1 < COLS && row + 1 < ROWS)
    {
        if (grid[row + 1][col + 1] > max_val)
        {
            max_val = grid[row + 1][col + 1];
            next_row = row + 1;
            next_col = col + 1;
        }
    }

    if (next_row == 0 && next_col == 0)
    {
        return current_val;
    }

    return current_val + path_sum(grid, next_row, next_col, ROWS, COLS);
}

int main() 
{
    // int ROWS, COLS;
    // int grid[100][100];

    // cout << "Enter rows and cols: ";
    // cin >> ROWS >> COLS;
    
    // cout << "Enter the grid numbers:\n";
    // for (int i = 0; i < ROWS; ++i) 
    // {
    //     for (int j = 0; j < COLS; ++j) 
    //     {
    //         cin >> grid[i][j];
    //     }
    // }
    
    // int result = path_sum(grid, 0, 0, ROWS, COLS);
    // cout << "Output: " << result << "\n";

    // --- Test 1: The Quick Diagonal (2x2 Grid) ---
    {
        int ROWS = 2, COLS = 2;
        int grid[100][100] = {
            {5, 8},
            {3, 9}
        };
        
        cout << "Test 1 [2x2 Grid]:  " << path_sum(grid, 0, 0, ROWS, COLS);
        cout << " (Expected: 14)\n";
    }

    // --- Test 2: Hitting the Wall (3x3 Grid) ---
    {
        int ROWS = 3, COLS = 3;
        int grid[100][100] = {
            {2,  15, 4},
            {1,  3,  6},
            {10, 8,  7}
        };
        
        cout << "Test 2 [3x3 Grid]:  " << path_sum(grid, 0, 0, ROWS, COLS);
        cout << " (Expected: 30)\n";
    }

    // --- Test 3: The Zig-Zag (4x4 Grid) ---
    {
        int ROWS = 4, COLS = 4;
        int grid[100][100] = {
            {1,   2,  3,  4},
            {8,   7,  6,  5},
            {9,  10, 11, 12},
            {16, 15, 14, 13}
        };
        
        cout << "Test 3 [4x4 Grid]:  " << path_sum(grid, 0, 0, ROWS, COLS);
        cout << " (Expected: 61)\n";
    }

    // --- Test 4: The Original Homework Example ---
    {
        int ROWS = 3, COLS = 3;
        int grid[100][100] = {
            {1,   7,  8},
            {2,  10, 11},
            {20,  5,  9}
        };
        
        cout << "Test 4 [HW Example]: " << path_sum(grid, 0, 0, ROWS, COLS);
        cout << " (Expected: 31)\n";
    }

    return 0;
}