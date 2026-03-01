class Solution {
public:
    vector<int> dp ;
    int f(int i , string &s) {
        if(i == s.length()) return 1 ; 
        else if(i > s.length() or s[i] == '0') return 0 ; 
        else if(dp[i] != -1) return dp[i] ; 
        else {
            int way1 = f(i+1 , s) ; 
            int way2 = 0 ; 
            if(i+1 < s.length()) {
                int num = stoi(s.substr(i , 2)) ; 
                if(num < 27) {
                    way2 = f(i+2 , s) ; 
                }
            }
            return dp[i] = way1 + way2 ; 
        }
    }
    int numDecodings(string s) {
        dp.clear() ; 
        dp.resize(107 , -1) ; 
        return f(0 , s) ; 
    }
};