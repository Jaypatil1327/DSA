class Solution {
public:
    int concatenatedBinary(int n) {
        long long ans = 0;
        int mod = 1e9 + 7;
        int digits = 0;

        for (int i = 1; i <= n; i++) {
            // eg : 7 , 8 but 8 has one extra bit so value gets to 0 :
            if ((i & (i - 1)) == 0) {
                digits++; 
            }

            ans = ((ans << digits) + i) % mod;
        }

        return ans;
    }
};