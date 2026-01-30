class Solution {
public:
    vector<int> dp;
    int f(vector<int>& v, int sum) {
        if (sum == 0)
            return 0;
        if (dp[sum] != -2)
            return dp[sum];
        int res = INT_MAX;
        for (int i = 0; i < v.size(); i++) {
            int x = sum - v[i];
            if (x >= 0)
                res = min(res, f(v, x));
        }
        return dp[sum] = (res == INT_MAX ? INT_MAX : res + 1);
    }

    int fbu(vector<int> &v) {
        dp[0] = 0;
        for (int i = 1 ; i < dp.size(); i++) {
            int res = INT_MAX;
            for (int k = 0; k < v.size(); k++) {
                int x = i - v[k];
                if (x >= 0) {
                    res = min(res , dp[x]) ; 
                }
            }
            dp[i] = (res == INT_MAX ? INT_MAX : res + 1); 
        }

        return dp[dp.size() -1] ; 
    }

    int coinChange(vector<int>& coins, int amount) {
        dp.clear();
        dp.resize(amount + 1, INT_MAX);
        int x = fbu(coins);
        return x == INT_MAX ? -1 : x;
    }
};