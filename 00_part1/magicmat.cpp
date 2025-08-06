#include<iostream>
#include<vector>

using namespace std ;

class Solution {
public:
    bool isMagic(const vector<vector<int>>& grid, int r, int c) {
        vector<bool> valid(10, false);
        int sum = grid[r][c] + grid[r][c + 1] + grid[r][c + 2];
        
        // Check rows, columns, and diagonals
        for (int i = 0; i < 3; i++) {
            int rowSum = 0, colSum = 0;
            for (int j = 0; j < 3; j++) {
                int rowVal = grid[r + i][c + j];
                int colVal = grid[r + j][c + i];
                
                if (rowVal == 0 || rowVal >= 10 || valid[rowVal]) return false;
                valid[rowVal] = true;
                rowSum += rowVal;
                colSum += colVal;
            }
            if (rowSum != sum || colSum != sum) return false;
        }
        
        // Check diagonals
        int diag1 = grid[r][c] + grid[r + 1][c + 1] + grid[r + 2][c + 2];
        int diag2 = grid[r][c + 2] + grid[r + 1][c + 1] + grid[r + 2][c];
        
        return diag1 == sum && diag2 == sum;
    }

    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int count = 0;
        for (int i = 0; i < grid.size() - 2; i++) {
            for (int j = 0; j < grid[0].size() - 2; j++) {
                if (grid[i + 1][j + 1] == 5 && isMagic(grid, i, j)) {
                    count++;
                }
            }
        }
        return count;
    }
};


int main()
{
    vector<vector<int>> v = {{4,3,8,4},{9,5,1,9},{2,7,6,2}} ; 
    Solution magic ; 
    cout << magic.numMagicSquaresInside(v) ; 

}