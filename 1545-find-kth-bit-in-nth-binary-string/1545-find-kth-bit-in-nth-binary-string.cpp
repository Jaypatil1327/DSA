class Solution {
public:
    string invert(string s) {
        for (int i = 0; i < s.length(); i++) {
            s[i] = (s[i] == '0' ? '1' : '0');
        }
        reverse(s.begin(), s.end());
        return s;
    }
    char findKthBit(int n, int k) {
        string sX = "0";
        for (int i = 1; i <= n; i++) {
            sX = sX + "1" + invert(sX);
        }
        return sX[k - 1];
    }
};