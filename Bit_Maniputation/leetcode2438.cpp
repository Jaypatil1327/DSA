#include<bits/stdc++.h>
using namespace std ; 

class Solution {
public:
    long long mod = 1e9 + 7;

    long long modPow(long long base, long long exp) {
        long long res = 1;
        while (exp > 0) {
            if (exp & 1)
                res = (res * base) % mod;
            base = (base * base) % mod;
            exp >>= 1;
        }
        return res;
    }

    vector<int> productQueries(int n, vector<vector<int>>& que) {
        vector<int> temp;
        vector<long long> power;
        while (n >= 1) {
            temp.push_back(n % 2);
            n /= 2;
        }
        for (int i = 0; i < temp.size(); i++) {
            if (temp[i] == 1) {
                if (power.empty())
                    power.push_back((1LL << i) % mod);
                else {
                    power.push_back(((1LL << i) % mod * power.back()) % mod);
                }
            }
        }
        vector<int> ans;
        for (int i = 0; i < que.size(); i++) {
            int a = que[i][0];
            int b = que[i][1];

            if (a == 0)
                ans.push_back((int)power[b]);
            else if (a == b) {
                long long inv = modPow(power[a - 1], mod - 2);
                ans.push_back((int)((power[a] * inv) % mod));
            }
            else {
                long long inv = modPow(power[a - 1], mod - 2);
                ans.push_back((int)((power[b] * inv) % mod));
            }
        }
        return ans;
    }

}
;
