int MOD = 1e9 + 7 ; 
class Solution {
public:
    int concatenatedBinary(int n) {
        int ans = 0 ; 
        int pw = 1 ; 
        for(int i = n ; i >= 1 ; i--) {
            int x = i ; 
            while(x >= 1) {
                if(x & 1) {
                    ans = ((ans % MOD) + ((pw * 1) % MOD)) % MOD ; 
                } 
                x = x >> 1 ; 
                pw = ((pw * 2) % MOD) ; 
            }
        }
        return ans ; 
    }
};