class Solution {
public:
    int minPartitions(string n) {
        int mx = INT_MIN ; 
        for(int i = 0 ; i < n.length() ; i++) {
            mx = max(int(n[i]) , mx) ; 
        } 
        return mx - 48 ; 
    }
};