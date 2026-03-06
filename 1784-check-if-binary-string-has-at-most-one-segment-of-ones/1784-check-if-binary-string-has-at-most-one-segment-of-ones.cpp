class Solution {
public:
    bool checkOnesSegment(string s) {
       bool flag = false ; 

       for(int i = 0 ; i < s.length() ; i++) {
        if(s[i] == '1' and !flag) {
            while(s.length() > i and s[i] == '1') i++ ; 
            flag = true ; 
        }
        else if(s[i] == '1' and flag) return false ; 
       } 
       return true ; 
    }
};