class Solution {
public:
    bool checkSubstr(vector<int> freq) {
        int ft = 0 ; 
        for(int i = 0 ; i < 26 ; i++) {
            if(freq[i] == 0) continue ; 
            if(ft == 0) {
                ft = freq[i] ; 
            } 
            else if(ft != freq[i]) return false ;
        } 
        return true ; 
    }
    int longestBalanced(string s) {
        int ans = 0 ; 
        for(int i = 0 ; i < s.length() ; i++) {
            vector<int> freq(26 , 0) ; 
            for(int j = i ; j < s.length() ; j++) {
                freq[s[j] - 'a']++ ; 
                if(checkSubstr(freq)) {
                    ans = max(j-i+1 , ans) ; 
                }
            }
        }
        return ans ; 
    }
};