/*
 * AUTHOR: BANDAR KHALED SALEH BAWODOOD 
 * DATE: 19/7/2026
 *
 * Problem: NxN tic-tac-toe
 * 
 * Description: 
 * Read an integer N for the dimension of the tic-tac-toe grid (3 <= N <= 9). 
 * Then run a game of 2 users ('x' and 'o') who keep playing until one of them 
 * wins or the game ends in a tie. Print the grid after each round.
 *
 * Requirements & Edge Cases:
 * - The grid should be initialized with dots ('.') representing empty spaces.
 * - The coordinates for the location are 1-based (r, c).
 * - If a player enters a location that is already taken, print "Invalid input. Try again"
 *   and do not switch turns.
 * - If a player enters a location out of bounds, print "Invalid input. Try again"
 *   and do not switch turns.
 *
 * Example Game Execution:
 * 3
 * Player x turn. Enter empty location (r, c): 1 1
 * x..
 * ...
 * ...
 * Player o turn. Enter empty location (r, c): 3 1
 * x..
 * ...
 * o..
 * Player x turn. Enter empty location (r, c): 2 2
 * x..
 * .x.
 * o..
 * Player o turn. Enter empty location (r, c): 2 1
 * x..
 * ox.
 * o..
 * Player x turn. Enter empty location (r, c): 2 2
 * Invalid input. Try again
 * Player x turn. Enter empty location (r, c): 5 5
 * Invalid input. Try again
 * Player x turn. Enter empty location (r, c): 3 3
 * x..
 * ox.
 * o.x
 * Player x won
 */

 #include <iostream>

 using namespace std;

 int main(void)
 {
   char grid[9][9];

   int dimension = 0;
   cin >> dimension;

   for (size_t i = 0; i < dimension; i++)
   {
      for (size_t j = 0; j < dimension; j++)
      {
         grid[i][j] = '.';
      }
   }

   bool GameOver = false;
   char currentPlayer = 'x';
   int rounds = 0;

   while(!GameOver)
   {
      int row = 0, column = 0;
      bool isvalid = true;
      
      do
      {
         cout << "Player "<< currentPlayer << " turn. Enter empty location (r, c): ";
         cin >> row >> column;      //1-Base input 

         if (row > dimension || column > dimension || (row - 1) < 0 || (column - 1) < 0 || grid[row - 1][column - 1] != '.')
         {
            cout << "Invalid input. Try again\n";
            isvalid = false;
         }
         else 
         {
            grid[row - 1][column - 1] = currentPlayer;
            isvalid = true;
         }
      } while (!isvalid);

      rounds++;

      for (size_t i = 0; i < dimension; i++)
      {
         for (size_t j = 0; j < dimension; j++)
         {
            cout << grid[i][j];
         }
         cout << "\n";
      }

      //********* Chech for a winner **********
      bool iswinner = false;

      //Row and columns winner ?
      for (int i = 0; i < dimension; i++)
      {
         bool row_winner = true;
         bool column_winner = true;

         for (int j = 0; j < dimension; j++)
         {
            if (grid[i][j] != currentPlayer) row_winner = false;
            if (grid[j][i] != currentPlayer) column_winner = false;
         }

         if (row_winner || column_winner)
         {
            iswinner = true;
            break;
         }
      }

      if (!iswinner)
      {   //Diagonally winner ?
         bool diagonal1_winner = true;
         bool diagonal2_winner = true;

         for (int i = 0; i < dimension; i++)
         {
            if (grid[i][i] != currentPlayer)                 diagonal1_winner = false;
            if (grid[i][dimension - 1 - i] != currentPlayer) diagonal2_winner = false;
         }

         if (diagonal1_winner || diagonal2_winner) iswinner = true;
      }


      if (iswinner)
      {
         cout << "Player " << currentPlayer << " won" << endl;
         GameOver = true;  
      }
      else if (rounds == dimension * dimension)
      {
         cout << "Tie" << endl;
         GameOver = true;
      }
      else
      {
         if (currentPlayer  == 'x') currentPlayer = 'o';
         else currentPlayer = 'x';
      }
   }

   return 0;
 }