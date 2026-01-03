class Solution {
public:
    vector<vector<int>> dp ; 
    int MOD = 1e9 + 7 ; 
       vector<string> state = {
        "RYR","RYG","RGR","RGY",
        "YRY","YRG","YGR","YGY",
        "GRY","GRG","GYR","GYG"
    };
    int solve(int prev , int remState) {
        if(remState == 0) return 1 ;    
        string str = state[prev] ; 
        int result = 0 ; 

        if(dp[remState][prev] != -1) return dp[remState][prev]  ; 
        for(int i = 0 ; i < 12 ; i++) {
            if (i == prev) continue;
            else {
                bool conflict = false ; 
                for(int j = 0 ; j < 3 ; j++) {
                    if(state[i][j] == str[j]) {
                        conflict = true ; 
                        break ; 
                    }
                }
                if(!conflict) {
                    result =  (result + solve(i , remState-1)) % MOD; 
                }
            }
        }
        return  dp[remState][prev] = result ; 
    }
    int numOfWays(int n) {
        dp.resize(n , vector<int> (12 , -1)) ; 
        int result = 0 ; 
        if(n == 1) return 12 ; 

        for(int i = 0 ; i < 12 ; i++) {
            result =( result + solve(i , n-1)) % MOD ; 
        }
        return result ; 
    }
};