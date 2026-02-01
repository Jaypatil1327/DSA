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
        dp.clear();
        dp.resize(grid.size(), vector<int>(grid[0].size(), -1));
        return f(grid, 0, 0);
    }
};