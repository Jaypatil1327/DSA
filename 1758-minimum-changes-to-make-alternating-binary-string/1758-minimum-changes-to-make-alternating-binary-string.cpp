class Solution {
public:
    int minOperations(string s) {
        int cnt1 = 0 ; 
        int cnt2 = 0 ; 

        for(int i = 0 ; i < s.length() ; i++) {
           char x = (i % 2 == 0 ? '0' : '1') ; 
           char y = (i % 2 == 0 ? '1' : '0') ; 

           if(x != s[i]) cnt1++ ; 
           if(y != s[i]) cnt2++ ;  
        }
        return min(cnt1 , cnt2) ; 
    }
};