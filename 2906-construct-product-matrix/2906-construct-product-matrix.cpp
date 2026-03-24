class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        // pre suff
        int m = grid.size();
        int n = grid[0].size();

        vector<vector<int>> prefix(m, vector<int>(n));
        vector<vector<int>> suffix(m, vector<int>(n));

        long long prod = 1;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                prefix[i][j] = prod;
                prod = (grid[i][j] * prod) % 12345 ;
            }
        }
        prod = 1;
        for (int i = m - 1; i >= 0; i--) {
            for (int j = n - 1; j >= 0; j--) {
                suffix[i][j] = prod;
                prod = (grid[i][j] * prod) % 12345;
            }
        }

        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                grid[i][j] = ((prefix[i][j] % 12345) * (suffix[i][j] % 12345)) % 12345 ; 
            }
        }
        return grid ;
    }
};