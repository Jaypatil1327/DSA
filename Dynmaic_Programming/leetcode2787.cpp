#include<bits/stdc++.h>
using namespace std ; 

class Solution {
public:
    vector<vector<int>> dp;
    const int mod = 1000000007; // 1e9 + 7

    int solve(int n, int x, int i) {
        if (n == 0) return 1;
        if (n < 0) return 0;
        if (dp[n][i] != -1) return dp[n][i];

        long long poss = 0;
        for (int j = i; ; j++) {
            long long p = 1;
            for (int k = 0; k < x; k++) p *= j;
            if (p > n) break;
            poss = (poss + solve(n - p, x, j + 1)) % mod;
        }
        return dp[n][i] = poss;
    }

    int numberOfWays(int n, int x) {
        dp.assign(n + 1, vector<int>(n + 1, -1));
        return solve(n, x, 1);
    }
};
