class Solution {
public:
    vector<vector<int>> dp;
    int f(vector<vector<int>>& grid, int i, int j) {
        int m = grid.size() - 1;
        int n = grid[0].size() - 1;

        if (m == i and n == j) {
            return grid[i][j];
        }

        if (i > m or j > n)
            return INT_MAX;
        if (dp[i][j] != -1)
            return dp[i][j];

        int right = f(grid, i, j + 1);
        int down = f(grid, i + 1, j);
        return dp[i][j] = grid[i][j] + min(right, down);
    }

    int minPathSum(vector<vector<int>>& grid) {
        // dp.clear();
        // dp.resize(grid.size(), vector<int>(grid[0].size(), -1));
        // return f(grid, 0, 0);

        for(int i = 0 ; i < grid.size() ; i++) {
            for(int j = 0 ; j < grid[0].size() ; j++) {
                int top = INT_MAX ; 
                int left = INT_MAX ; 
                if(j-1 >= 0) top = grid[i][j-1] ; 
                if(i-1 >= 0) left = grid[i-1][j] ; 

                if(left == INT_MAX and top == INT_MAX) continue  ;
                else {
                    grid[i][j] += min(top , left) ; 
                }
            }
        }

        return grid[grid.size()-1][grid[0].size()-1] ; 
    }
};