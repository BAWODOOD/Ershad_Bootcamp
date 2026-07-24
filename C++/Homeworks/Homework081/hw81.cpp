/*
 * AUTHOR: BANDAR KHALED SALEH BAWODOOD 
 * DATE: 19/7/2026
 *
 * Subject #10: Multidimensional Arrays 
 * Problem #6: Active Robot
 * 
 * Description: 
 * Read integers N and M representing a matrix. A robot starts at cell (0, 0).
 * Read integer K, then K commands. Each command consists of 2 values:
 *   1. Direction (1 to 4): 1=up, 2=right, 3=down, 4=left
 *   2. Steps: A number of steps to take in that direction. 
 *      Note: Steps can be very large, up to 1,000,000,000 [1, 10^9].
 * 
 * Rules:
 * - If the robot hits the wall during the move, it "circulates" (wraps around) 
 *   to the other side of the matrix.
 * - For every command, print where the robot is currently located (row, col).
 *
 * Example Input:
 * 3 4
 * 4
 * 2 1
 * 3 2
 * 4 2
 * 1 3
 * 
 * Explanation of commands: 
 * "2 1" means move right 1 step. 
 * "3 2" means move down 2 steps.
 *
 * Example Output:
 * (0, 1)
 * (2, 1)
 * (2, 3)
 * (2, 3)
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
            matrix[i][j] = 0;
        }
    }

    size_t NCommand = 0;
    cin >> NCommand;

    int position[2] = {0, 0};

    for (size_t commands = 0; commands < NCommand; commands++)
    {
        int direction = 0;
        int steps = 0;

        //Directions [up-1, right-2, down-3, left-4]
        int xdirections[4] = {0, 1, 0, -1};
        int ydirections[4] = {-1, 0, 1, 0};

        cin >> direction >> steps;

        if (direction == 2 || direction == 4)
        {
            steps = steps % col;
        }
        else
        {
            steps = steps % row;
        }

        position[0] += ydirections[direction - 1] * steps;
        position[1] += xdirections[direction - 1] * steps;

        //First Method 
        if (position[0] < 0)   position[0] = row + position[0];
        if (position[1] < 0)   position[1] = col + position[1];
        if (position[0] > row) position[0] = position[0] - row;
        if (position[1] > col) position[1] = position[1] - col;
    
        //Second Method
        // position[0] = (position[0] % row + row) % row;
        // position[1] = (position[1] % col + col) % col;

        cout << "(" <<position[0] << ", " << position[1] << ")\n";
    }

    return 0;
}
