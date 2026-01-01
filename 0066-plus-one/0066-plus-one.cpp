class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1 ; 
        vector<int> v ; 

        for(int i = digits.size()-1 ; i >= 0  ; i--) {
            int num = carry + digits[i]  ; 
            if(num >= 10) {
                carry = 1 ; 
                v.push_back(num % 10) ; 
            } else {
                carry = 0 ; 
                v.push_back(num) ; 
            }
        }

        if(carry == 1) v.push_back(1) ; 
        reverse(v.begin() , v.end()) ; 
        return v ; 
    }
};