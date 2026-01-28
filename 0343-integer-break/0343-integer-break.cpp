class Solution {
public:
    vector<int> dp ; 
    int f(int n) {
        if(n == 1 || n == 2) return 1 ; 
        int res = INT_MIN ; 
        if(dp[n] != -1) return dp[n] ; 
        for(int i=1 ; i < n ; i++) {
            int prod = i * max(n-i , f(n-i)) ; 
            res = max(res , prod) ;  
        }
        return dp[n] = res ; 
    }
    int integerBreak(int n) {
        dp.clear() ; 
        dp.resize(100 , -1) ; 
        return f(n) ; 
    }
};